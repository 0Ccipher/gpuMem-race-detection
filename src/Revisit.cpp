/*
 * GenMC -- Generic Model Checking.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 * Author: Michalis Kokologiannakis <mixaskok@gmail.com>
 */

#include "Revisit.hpp"

llvm::raw_ostream& operator<<(llvm::raw_ostream& s,  const Revisit::Kind k)
{
	switch (k) {
	case Revisit::RV_FRev:
		s << "FR";
		break;
	case Revisit::RV_BRev:
		s << "BR";
		break;
	case Revisit::RV_MO:
		s << "MO";
		break;
	default:
		PRINT_BUGREPORT_INFO_ONCE("print-revisit-type", "Cannot print revisit type");
		s << "UNKNOWN";
		break;
	}
	return s;
}

llvm::raw_ostream& operator<<(llvm::raw_ostream& s, const Revisit &item)
{
	switch (item.getKind()) {
	case Revisit::RV_FRev: {
		auto &fi = static_cast<const ForwardRevisit &>(item);
		s << fi.getKind() << "(" << fi.getPos() << ": " << fi.getRev() << ")";
		break;
	}
	case Revisit::RV_BRev: {
		auto &bi = static_cast<const BackwardRevisit &>(item);
		s << bi.getKind() << "(" << bi.getPos() << ": ["
		  << bi.getRev() << ", ";
		for (auto &lab : bi.getPrefixNoRel())
			s << lab->getPos();
		s << "]";
		break;
	}
	case Revisit::RV_MO: {
		auto &mi = static_cast<const WriteRevisit &>(item);
		s << mi.getKind() << "(" << mi.getPos() << ": " << mi.getMOPos() << ")";
		break;
	}

	default:
		s << item.getKind();
		break;
	}
	return s;
}
