/*
*   @file ibmVar.h
*   @author Marco Aurelio Ferrari (marcoferrari@alunos.utfpr.edu.br)
*   @author Waine Jr. (waine@alunos.utfpr.edu.br)
*   @brief Configurations for the immersed boundary method
*   @version 0.3.0
*   @date 26/08/2020
*/

#ifndef __IBM_VAR_H
#define __IBM_VAR_H

#include "../var.h"
#include <stdio.h>

/* ------------------------------------------------------------------------- */
#define NUM_PARTICLES 1  // total number of immersed boundaries in the system
#define IBM_MAX_ITERATION 10 // Number of iterations

// Stencil to use, define only one
// #define STENCIL_2 
#define STENCIL_4 // Peskin Stencil 


#define PARTICLE_DIAMETER 15.0 // 22.99
#define MESH_SCALE 1.0
#define MESH_COULOMB 0
#define SRP 1.0 // Epsilon - successive relaxation parameter - DASH 2014

#define ROTATION_LOCK true   // Lock particle rotation
#define IBM_THICKNESS (1) // Assumed boundary thickness for IBM

constexpr dfloat PARTICLE_DENSITY = 2.5;
constexpr dfloat FLUID_DENSITY  = 1;

// Gravity accelaration on particle (Lattice units)
constexpr dfloat GX = 0.0;
constexpr dfloat GY = 0.0;
constexpr dfloat GZ = 5e-5; //4.26E-04;

// Collision parameters;

// SOFT SPHERE
constexpr dfloat ZETA = 1.0; // Distance threshold
constexpr dfloat E_W = 1.0;  // Stiffness parameter wall
constexpr dfloat E_O = 1.0;  // Soft stiffness parameter particle
constexpr dfloat E_P = 0.1;  // Hard stiffness parameter particle


// Stencil distance
#if defined STENCIL_2
#define P_DIST 1
#endif

#if defined STENCIL_4
#define P_DIST 2
#endif

#endif // !__IBM_VAR_H
