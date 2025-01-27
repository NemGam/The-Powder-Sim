#include "vertex.h"

namespace powder_sim
{
	Vertex::Vertex(std::array<float, 2> position, std::array<float, 2> texture_coords) :
		position(position), texture_coordinates(texture_coords)
	{}
}