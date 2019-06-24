//
//  main.cpp
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


#include "ConsoleView.hpp"
#include "Dishwasher.hpp"
#include "Program.hpp"
#include "Controler.hpp"


int main(int argc, char const *argv[])
{
    ConsoleView* v;
    Dishwasher* d;
    v = new ConsoleView();
    d = new Dishwasher();
    d->run(v);
    
    return 0;
}
