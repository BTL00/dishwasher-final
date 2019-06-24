//
//  ConsoleView.h
//  Dishwasher
//
//  Created by Piotr Bomba on 16/06/2019.
//  Copyright © 2019 Piotr Bomba. All rights reserved.
//


#include <list>
#include <iostream>
#include <string>
#include <unistd.h>
#include <sstream>
#include <stdio.h>
#include <fstream>



#include "Program.hpp"
#include "Controler.hpp"
//#include "Dishwasher.hpp"
#include "View.h"

#ifndef ConsoleView_h
#define ConsoleView_h

class ConsoleView: public View {
public:
    ConsoleView() {
        std::cout << "    Super Dishwasher v5000" << std::endl;
        std::cout << "===============================" << std::endl;
        std::cout << "===============================" << std::endl;

    };
    void showProgram(Program* p) {
        std::cout << "Program: "<< p->name << std::endl;
        std::cout << "\tProgram: "<< p->length << std::endl;
        std::cout << "\tTemperature: "<< p->temperature << std::endl;
        std::cout << "\tEnergy: "<< p->energy << std::endl;
    }
    void showControler(Controler* c){
        std::cout << "===============================" << std::endl;
        std::list<Program*>::iterator iter;
        std::cout << "Loaded programs:" << std::endl;
        iter = c->programs.begin();
        int i = 1;
        while(iter !=  c->programs.end())
        {
            std::cout << i++ << ". ";
            this->showProgram((*iter));
            iter++;
        }
        std::cout<<std::endl;
    }
    
    Program* selectProgram(std::list<Program*> p) {
        int program_number;
        std::cout << "Choose program number" << std::endl;
        std::cin >> program_number;
        std::cout << "Selected program: " << program_number << std::endl;
        return *std::next(p.begin(), program_number-1);;
    }

    
    int confirm(){
        int n = 0;
        std::cout << "Type 1 to confirm, -1 to turn off dishwasher:" << std::endl;
        std::cin >> n;
        std::cout << std::endl;

        return n;
    }
    ~ConsoleView();
};


#endif
