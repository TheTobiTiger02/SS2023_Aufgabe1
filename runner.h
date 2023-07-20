#ifndef RUNNER_H
#define RUNNER_H
#include "athlete.h"
#include "trainer.h"

class Runner : public Athlete
{
public:
    Runner(std::string name, int startId, double time, Trainer* trainer);

private:
    double time;
    Trainer* trainer;
};

#endif // RUNNER_H
