#ifndef AIR_H
#define AIR_H
#include "../gas_particle.h"

class Air final :
    public GasParticle
{
public:
    Air();


    void Move(SimMatrix& matrix, int x, int y) override;

};

#endif // AIR_H