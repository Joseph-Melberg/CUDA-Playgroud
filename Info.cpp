#include <iostream>
#include <cuda_runtime_api.h>
#include <cuda.h>

int main(void)
{
       std::cout << "Hello\n";

       int nDevices;

       cudaGetDeviceCount(&nDevices);
       for (int i = 0; i < nDevices; i++)
       {
              cudaDeviceProp deviceProp;
              cudaGetDeviceProperties(&deviceProp, i);
              printf("Device Number: %d\n", i);
              printf("  Device name: %s\n", deviceProp.name);
              printf("  Memory Clock Rate (KHz): %d\n",
                     deviceProp.memoryClockRate);
              printf("  Memory Bus Width (bits): %d\n",
                     deviceProp.memoryBusWidth);
              printf("  Peak Memory Bandwidth (GB/s): %f\n",
                     2.0 * deviceProp.memoryClockRate * (deviceProp.memoryBusWidth / 8) / 1.0e6);
              printf("For device #%d\n", i);
              printf("Device name:                %s\n", deviceProp.name);
              printf("Major revision number:      %d\n", deviceProp.major);
              printf("Minor revision Number:      %d\n", deviceProp.minor);
              printf("Total Global Memory:        %d\n", deviceProp.totalGlobalMem);
              printf("Total shared mem per block: %d\n", deviceProp.sharedMemPerBlock);
              printf("Total const mem size:       %d\n", deviceProp.totalConstMem);
              printf("Warp size:                  %d\n", deviceProp.warpSize);
              printf("Maximum block dimensions:   %d x %d x %d\n", deviceProp.maxThreadsDim[0],
                     deviceProp.maxThreadsDim[1],
                     deviceProp.maxThreadsDim[2]);

              printf("Maximum grid dimensions:    %d x %d x %d\n", deviceProp.maxGridSize[0],
                     deviceProp.maxGridSize[1],
                     deviceProp.maxGridSize[2]);
              printf("Clock Rate:                 %d\n", deviceProp.clockRate);
              printf("Number of muliprocessors:   %d\n", deviceProp.multiProcessorCount);
              printf("\n");
       }
       return 1;
}