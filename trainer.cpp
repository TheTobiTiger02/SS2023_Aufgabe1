#include "trainer.h"


Trainer::Trainer(std::string name, int license, std::vector<Athlete*> athletes) : name(name), license(license), athletes(athletes)
{

}

int Trainer::getLicense() const
{
    return license;
}

void Trainer::setLicense(int newLicense)
{
    license = newLicense;
}

std::string Trainer::getName() const
{
    return name;
}
