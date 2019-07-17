#ifndef BC_VEL_BOUNCE_BACK_D3Q19_CUH
#define BC_VEL_BOUNCE_BACK_D3Q19_CUH

#include "./../../common/func_idx.cuh"
#include <cuda_runtime.h>

/*
*	Applies velocity bounce-back boundary condition on north wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_N(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);


/*
*	Applies velocity bounce-back boundary condition on south wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_S(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);


/*
*	Applies velocity bounce-back boundary condition on west wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_W(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);


/*
*	Applies velocity bounce-back boundary condition on east wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_E(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);


/*
*	Applies velocity bounce-back boundary condition on front wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_F(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);


/*
*	Applies velocity bounce-back boundary condition on back wall node, given pressure
*	\param f[(N_X, N_Y, N_Z, Q)]: grid of populations
*	\param x: node's x value
*	\param y: node's y value
*	\param z: node's z value
*	\param ux_w: wall's x velocity
*	\param uy_w: wall's y velocity
*	\param uz_w: wall's z velocity
*/
__device__
void gpu_bc_vel_bounce_back_B(dfloat* f, const short unsigned int x, const short unsigned int y,
	const short unsigned int z,  const dfloat ux_w, const dfloat uy_w, const dfloat uz_w);

#endif // !BC_VEL_BOUNCE_BACK_D3Q19_CUH
