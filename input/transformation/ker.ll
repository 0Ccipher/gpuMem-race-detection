; ModuleID = 'ConcurrentKernels.cl'
source_filename = "ConcurrentKernels.cl"
target datalayout = "e-m:e-p270:32:32-p271:32:32-p272:64:64-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64-pc-linux-gnu"

@X = dso_local global i32 0, align 4
@Y = dso_local global i32 0, align 4
@.str = private unnamed_addr constant [59 x i8] c"\0A Kernel 1 Group : %d , LocalItemID: %d , GlobalItemID: %d\00", align 1
@.str.1 = private unnamed_addr constant [59 x i8] c"\0A Kernel 2 Group : %d , LocalItemID: %d , GlobalItemID: %d\00", align 1

; Function Attrs: convergent norecurse nounwind uwtable
define dso_local spir_kernel void @kernel1(i32* noundef %0) local_unnamed_addr #0 !kernel_arg_addr_space !7 !kernel_arg_access_qual !8 !kernel_arg_type !9 !kernel_arg_base_type !10 !kernel_arg_type_qual !11 {
  %2 = tail call i64 @_Z13get_global_idj(i32 noundef 0) #4
  %3 = trunc i64 %2 to i32
  %4 = tail call i64 @_Z12get_local_idj(i32 noundef 0) #4
  %5 = trunc i64 %4 to i32
  %6 = tail call i64 @_Z12get_group_idj(i32 noundef 0) #4
  %7 = trunc i64 %6 to i32
  %8 = tail call i32 (i8*, ...) @printf(i8* noundef nonnull dereferenceable(1) getelementptr inbounds ([59 x i8], [59 x i8]* @.str, i64 0, i64 0), i32 noundef %7, i32 noundef %5, i32 noundef %3) #5
  tail call void @_Z21atomic_store_explicitPU9CLgenericVU7_Atomicii12memory_order12memory_scope(i32* noundef nonnull @Y, i32 noundef 1, i32 noundef 0, i32 noundef 1) #6
  %9 = tail call i32 @_Z20atomic_load_explicitPU9CLgenericVU7_Atomici12memory_order12memory_scope(i32* noundef nonnull @X, i32 noundef 0, i32 noundef 1) #6
  tail call void @_Z21atomic_store_explicitPU9CLgenericVU7_Atomicii12memory_order12memory_scope(i32* noundef %0, i32 noundef %9, i32 noundef 0, i32 noundef 2) #6
  ret void
}

; Function Attrs: convergent mustprogress nofree nounwind readnone willreturn
declare i64 @_Z13get_global_idj(i32 noundef) local_unnamed_addr #1

; Function Attrs: convergent mustprogress nofree nounwind readnone willreturn
declare i64 @_Z12get_local_idj(i32 noundef) local_unnamed_addr #1

; Function Attrs: convergent mustprogress nofree nounwind readnone willreturn
declare i64 @_Z12get_group_idj(i32 noundef) local_unnamed_addr #1

; Function Attrs: convergent nofree nounwind
declare noundef i32 @printf(i8* nocapture noundef readonly, ...) local_unnamed_addr #2

; Function Attrs: convergent
declare void @_Z21atomic_store_explicitPU9CLgenericVU7_Atomicii12memory_order12memory_scope(i32* noundef, i32 noundef, i32 noundef, i32 noundef) local_unnamed_addr #3

; Function Attrs: convergent
declare i32 @_Z20atomic_load_explicitPU9CLgenericVU7_Atomici12memory_order12memory_scope(i32* noundef, i32 noundef, i32 noundef) local_unnamed_addr #3

; Function Attrs: convergent norecurse nounwind uwtable
define dso_local spir_kernel void @kernel2(i32* noundef %0) local_unnamed_addr #0 !kernel_arg_addr_space !7 !kernel_arg_access_qual !8 !kernel_arg_type !9 !kernel_arg_base_type !10 !kernel_arg_type_qual !11 {
  %2 = tail call i64 @_Z13get_global_idj(i32 noundef 0) #4
  %3 = trunc i64 %2 to i32
  %4 = tail call i64 @_Z12get_local_idj(i32 noundef 0) #4
  %5 = trunc i64 %4 to i32
  %6 = tail call i64 @_Z12get_group_idj(i32 noundef 0) #4
  %7 = trunc i64 %6 to i32
  %8 = tail call i32 (i8*, ...) @printf(i8* noundef nonnull dereferenceable(1) getelementptr inbounds ([59 x i8], [59 x i8]* @.str.1, i64 0, i64 0), i32 noundef %7, i32 noundef %5, i32 noundef %3) #5
  tail call void @_Z21atomic_store_explicitPU9CLgenericVU7_Atomicii12memory_order12memory_scope(i32* noundef nonnull @X, i32 noundef 1, i32 noundef 0, i32 noundef 1) #6
  %9 = tail call i32 @_Z20atomic_load_explicitPU9CLgenericVU7_Atomici12memory_order12memory_scope(i32* noundef nonnull @Y, i32 noundef 0, i32 noundef 1) #6
  %10 = getelementptr inbounds i32, i32* %0, i64 1
  tail call void @_Z21atomic_store_explicitPU9CLgenericVU7_Atomicii12memory_order12memory_scope(i32* noundef nonnull %10, i32 noundef %9, i32 noundef 0, i32 noundef 2) #6
  ret void
}

attributes #0 = { convergent norecurse nounwind uwtable "frame-pointer"="all" "min-legal-vector-width"="0" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" "uniform-work-group-size"="false" }
attributes #1 = { convergent mustprogress nofree nounwind readnone willreturn "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #2 = { convergent nofree nounwind "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #3 = { convergent "frame-pointer"="all" "no-trapping-math"="true" "stack-protector-buffer-size"="8" "target-cpu"="x86-64" "target-features"="+cx8,+fxsr,+mmx,+sse,+sse2,+x87" "tune-cpu"="generic" }
attributes #4 = { convergent nounwind readnone willreturn }
attributes #5 = { convergent }
attributes #6 = { convergent nounwind }

!llvm.module.flags = !{!0, !1, !2, !3, !4}
!opencl.ocl.version = !{!5}
!llvm.ident = !{!6}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 7, !"PIC Level", i32 2}
!2 = !{i32 7, !"PIE Level", i32 2}
!3 = !{i32 7, !"uwtable", i32 1}
!4 = !{i32 7, !"frame-pointer", i32 2}
!5 = !{i32 2, i32 0}
!6 = !{!"Ubuntu clang version 14.0.0-1ubuntu1.1"}
!7 = !{i32 1}
!8 = !{!"none"}
!9 = !{!"atomic_int*"}
!10 = !{!"_Atomic(int)*"}
!11 = !{!""}
