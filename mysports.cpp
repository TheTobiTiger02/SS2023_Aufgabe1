#include "mysports.h"

MySports::MySports()
{

}

void MySports::printMainMenu() {
    int input = -1;

    while(input != 0){
        std::cout << "--- mySports ---" << std::endl
                  << "(1)   Athlet" << std::endl
                  << "(2)   Trainer" << std::endl
                  << "(0)   Programm verlassen" << std::endl;
        std::cin >> input;

        switch(input){
        case 0:
            return;
        case 1:
            printAthleteMenu();
            break;
        case 2:
            printTrainerMenu();
            break;
        }
    }
}

void MySports::printAthleteMenu() {
    char input{};

    while(input != 'x'){
        std::cout << "--- mySports - Athleten ---" << std::endl
                  << "(a)   Athlet anlegen" << std::endl
                  << "(b)   Athlet zuordnen" << std::endl
                  << "(c)   Athlet (einzeln) anzeigen" << std::endl
                  << "(d)   Athleten (alle) anzeigen" << std::endl
                  << "(x)   Zurück zum Hauptmenü" << std::endl;

        std::cin >> input;
        switch(input){
        case 'x':
            return;
        case 'a':
            break;
        case 'b':
            break;
        case 'c':
            break;
        case 'd':
            break;
        }

    }
}

void MySports::printTrainerMenu(){
    char input{};

    while(input != 'x'){
        std::cout << "--- mySports - Trainer ---" << std::endl
                  << "(a)   Trainer anlegen" << std::endl
                  << "(b)   Trainer zuordnen" << std::endl
                  << "(c)   Trainer (einzeln) anzeigen" << std::endl
                  << "(d)   Trainer (alle) anzeigen" << std::endl
                  << "(x)   Zurück zum Hauptmenü" << std::endl;

                             std::cin >> input;
        switch(input){
        case 'x':
            return;
        case 'a':
            break;
        case 'b':
            break;
        case 'c':
            break;
        case 'd':
            break;
        }

    }
}

Athlete* MySports::findAthlete(int startId){
    for(auto a : athleteList){
        if(a->getStartId() == startId){
            return a;
        }
    }
    return nullptr;
}

Trainer* MySports::findTrainer(int license){
    for(auto t : trainerList){
        if(t->getLicense() == license){
            return t;
        }
    }
    return nullptr;
}
