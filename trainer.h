#ifndef TRAINER_H
#define TRAINER_H
#include <iostream>
#include <vector>
#include "athlete.h"

class Trainer
{
public:
    Trainer(std::string name, int license, std::vector<Athlete*> athletes);

    int getLicense() const;
    void setLicense(int newLicense);

    std::string getName() const;

private:
    std::string name;
    int license;
    std::vector<Athlete*> athletes;
};

#endif // TRAINER_H
