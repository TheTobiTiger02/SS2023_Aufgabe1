#include "swimmer.h"

Swimmer::Swimmer(std::string name, int startId, double time, Trainer* trainer) : Athlete(name, startId), time(time), trainer(trainer)
{

}
