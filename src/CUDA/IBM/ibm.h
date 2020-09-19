/*
*   @file ibm.h
*   @author Marco Ferrari. (marcoferrari@alunos.utfpr.edu.br)
*   @author Waine Jr. (waine@alunos.utfpr.edu.br)
*   @brief IBM steps: perform interpolation and spread force
*   @version 0.3.0
*   @date 26/08/2020
*/


#ifndef __IBM_H
#define __IBM_H

#include "ibmVar.h"

#include "ibmGlobalFunctions.h"
#include "../structs/macroscopics.h"
#include "../structs/populations.h"
#include "../structs/globalStruct.h"
#include "structs/particleCenter.h"
#include "structs/particleNode.h"


__host__
void immersedBoundaryMethod(
    Particle* const restrict particles,
    Macroscopics* const restrict macr,
    Populations* const restrict pop,
    const dim3 gridLBM,
    const dim3 threadsLBM,
    const unsigned int gridIBM,
    const unsigned int threadsIBM,
    cudaStream_t* const restrict stream
);


__global__
void gpuForceInterpolationSpread(
    unsigned int totalParticlesNodes,
    ParticleNode* const restrict particlesNodes,
    Macroscopics* const restrict macr
);


__global__
void gpuUpdateMacrResetForces(Populations* restrict pop, Macroscopics* restrict macr);


__global__
void gpuResetNodesForces(ParticleNodeSoA* restrict particleNodes);


__host__ 
void updateParticleCenterForce(
    Particle* restrict particleNode,
    unsigned int numParticles
);

__host__ 
dfloat3 particleCollisionSoft(
    ParticleCenter* restrict particleCenter,
    int particleIndex
);

__global__
void particleMovement(
    ParticleCenter* restrict ParticleCenter
);

#endif // !__IBM_H