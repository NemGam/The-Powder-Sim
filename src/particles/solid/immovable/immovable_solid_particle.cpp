#include "immovable_solid_particle.h"

void ImmovableSolidParticle::Move(SimMatrix& matrix, int x, int y) {}

ImmovableSolidParticle::ImmovableSolidParticle(ElementType element, const std::array<GLubyte, 4>& color) :
	SolidParticle(element, color)
{}