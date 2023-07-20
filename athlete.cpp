#include "athlete.h"


Athlete::Athlete(std::string name, int startId) : name(name), startId(startId)
{

}

int Athlete::getStartId() const
{
    return startId;
}

std::string Athlete::getName() const
{
    return name;
}

void Athlete::setName(const std::string &newName)
{
    name = newName;
}
