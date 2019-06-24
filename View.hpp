//
//  View.h
//  Dishwasher
//
//  Created by Piotr Bomba on 16/06/2019.
//  Copyright © 2019 Piotr Bomba. All rights reserved.
//

#include "Program.hpp"
#include "Controler.hpp"
//#include "Dishwasher.hpp"

#ifndef View_h
#define View_h
class View {
private:
public:
    View(){};
    ~View(){};
    Program* selectProgram(std::list<Program*> p){return nullptr;};
    void start(){};
    void showProgram(Program* p){};
    void showControler(Controler* c){};
 //   void showDishwasher(Dishwasher* d);
    int confirm(){return -1;};
    
};

#endif
