#ifndef SIMULATION_H
#define SIMULATION_H

#include "brush.h"
#include "sim_matrix.h"
#include "rendering/window.h"

namespace powder_sim
{
	class Simulation {
	public:
		Simulation(const Window* window, int width, int height);


		void Start();
		void Update(float dt);
		SimMatrix& GetMatrix();
		

	private:
		void UpdatePart(int x, int y, int width, int height);


		SimMatrix matrix_;
		Brush brush_;
		int width_;
		int height_;
	};
}

#endif // SIMULATION_H
