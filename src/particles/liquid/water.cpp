#include "water.h"

Water::Water() :
	LiquidParticle(Material::kWater, {0, 0, 255, 1})
{}

Water* Water::Clone() const {
	return new Water(*this);
}
