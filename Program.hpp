//
//  Program.h
//  Dishwasher
//
//  Created by Piotr Bomba on 16/06/2019.
//  Copyright © 2019 Piotr Bomba. All rights reserved.
//



#ifndef Program_h
#define Program_h
class Program
{
    
public:
    std::string name;
    int length;
    int temperature;
    int energy;
    
    Program(std::string a, int b, int c, int d, int e) {
        name = a;
        length = b;
        temperature = c;
        energy = e;
    };
    ~Program();
    
};



#endif
