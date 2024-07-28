#ifndef GAS_PARTICLE_H
#define GAS_PARTICLE_H

#include "particles/particle.h"

class GasParticle :
	public Particle {
protected:
	GasParticle(Material element, const std::array<GLubyte, 4>& color);
};

#endif // GAS_PARTICLE_H
