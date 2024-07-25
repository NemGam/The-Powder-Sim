#ifndef IMMOVABLE_SOLID_PARTICLE_H
#define IMMOVABLE_SOLID_PARTICLE_H

#include "particles/solid/solid_particle.h"

class ImmovableSolidParticle :
    public SolidParticle
{
public:
    void Move(SimMatrix& matrix, int x, int y) final;

protected:
    ImmovableSolidParticle(ElementType element, const std::array<GLubyte, 4>& color);
};

#endif // IMMOVABLE_SOLID_PARTICLE_H