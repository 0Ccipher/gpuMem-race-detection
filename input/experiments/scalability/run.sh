
echo "1dcond"

cd /home/lab/Downloads/tools/gpuMem-race-detection/input/scalability/1dconv/ && ./cop.sh

echo "SB"

cd /home/lab/Downloads/tools/gpuMem-race-detection/input/scalability/SB/ && ./cop.sh

echo "gcon"

cd /home/lab/Downloads/tools/gpuMem-race-detection/input/scalability/gcon/ && ./cop.sh

echo "table 1" 
cd /home/lab/Downloads/tools/gpuMem-race-detection/input/dat3m_bench/opencl/ && ./cop.sh

echo "Dartagnan1"
cd /home/lab/Downloads/tools/dat3m/home/Dat3M/ && ./run.sh

echo "table 1" 
cd /home/lab/Downloads/tools/gpuMem-race-detection/input/dat3m_bench/opencl/ && ./cop.sh


echo "Dartagnan2"
cd /home/lab/Downloads/tools/dat3m/home/Dat3M/ && ./run.sh