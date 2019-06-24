//
//  Dishwasher.h
//  Dishwasher
//
//  Created by Piotr Bomba on 16/06/2019.
//  Copyright © 2019 Piotr Bomba. All rights reserved.
//



#ifndef Dishwasher_h
#define Dishwasher_h
#ifndef ConsoleView_h
#include "ConsoleView.hpp"
#endif
class Dishwasher
{
private:
    Controler* controler;
    ConsoleView* view;


public:
    bool working;
    void selectProgram();

    int confirm();
    void run(ConsoleView* v);
    bool progress() ;
    void refresh();
    Dishwasher(){};
    ~Dishwasher(){};
    
};

void Dishwasher::run(ConsoleView* v) {
    
        this->working = false;
        this->view = v;
        this->controler = new Controler();
        while(true) {
            this->view->showControler(this->controler);
            this->selectProgram();
            this->view->showProgram(this->controler->currentProgram);
            int c = this->confirm();
            if(c > 0)
                while(this->progress()) { }
            else if(c < 0) {
                break;
            }
            this->working = false;
            this->refresh();
        }
        
        
    
}

bool Dishwasher::progress() {
    
        this->working = true;
        //simulate running time
        std::cout << "bruum" << std::endl;
        usleep(1000L);
        std::cout << "bruum" << std::endl;
        usleep(1000L);
        std::cout << "plusk!" << std::endl;
        usleep(1000L);
        std::cout << "WROOM!" << std::endl;
        usleep(1000L);

        return false;
    
}

int Dishwasher::confirm() {
    int c = this->view->confirm();
    return c;
    return false;
}

void Dishwasher::refresh()
{
    this->controler->currentProgram = nullptr;
}

void Dishwasher::selectProgram() {
    Program* selected;
    selected = this->view->selectProgram(controler->programs);
    this->controler->setProgram(selected);
}


#endif

