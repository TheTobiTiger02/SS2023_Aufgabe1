#ifndef MYSPORTS_H
#define MYSPORTS_H
#include <iostream>
#include <vector>
#include "athlete.h"
#include "trainer.h"

class MySports
{
public:
    MySports();
    void printMainMenu();
    void printAthleteMenu();
    void printTrainerMenu();
    Athlete* findAthlete(int startId);
    Trainer* findTrainer(int license);
    void addAthlete();
    void assignTrainer();
    void printAthlete(int startId);
    void printAllAthletes();

private:
    std::vector<Athlete*> athleteList;
    std::vector<Trainer*> trainerList;
};

#endif // MYSPORTS_H
