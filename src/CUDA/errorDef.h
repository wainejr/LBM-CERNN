#ifndef __ERROR_DEF_H
#define __ERROR_DEF_H

#include <cuda.h>
#include <stdio.h>
#include <stdlib.h>
#include <cuda_runtime.h>
#include <builtin_types.h>
#include <device_launch_parameters.h>


#define checkCudaErrors(err)  __checkCudaErrors(err,#err,__FILE__,__LINE__)
#define getLastCudaError(msg)  __getLastCudaError(msg,__FILE__,__LINE__)

inline void __checkCudaErrors(cudaError_t err, const char *const func, const char *const file, const int line)
{
    if (err != cudaSuccess)
    {
        fprintf(stderr, "CUDA error at %s(%d)\"%s\": [%d] %s.\n",
            file, line, func, (int)err, cudaGetErrorString(err));
        exit(-1);
    }
}


inline void __getLastCudaError(const char *const errorMessage, const char *const file, const int line)
{
    cudaError_t err = cudaGetLastError();
    if (err != cudaSuccess) {
        fprintf(stderr, "CUDA error at %s(%d): [%d] %s.\n",
            file, line, (int)err, cudaGetErrorString(err));
        exit(-1);
    }
}

#endif // !__ERROR_DEF_H