#ifndef ATHLETE_H
#define ATHLETE_H
#include <iostream>

class Athlete
{
public:
    Athlete(std::string name, int startid);

    int getStartId() const;

    std::string getName() const;
    void setName(const std::string &newName);

private:
    std::string name;
    const int startId;
};

#endif // ATHLETE_H
