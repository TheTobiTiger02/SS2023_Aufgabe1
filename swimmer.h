#ifndef SWIMMER_H
#define SWIMMER_H
#include "athlete.h"
#include "trainer.h"

class Swimmer : public Athlete
{
public:
    Swimmer(std::string name, int startId, double time, Trainer* trainer);

private:
    double time;
    Trainer* trainer;
};

#endif // SWIMMER_H
