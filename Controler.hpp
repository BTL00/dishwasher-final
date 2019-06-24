//
//  Controler.h
//  Dishwasher
//
//  Created by Piotr Bomba on 16/06/2019.
//  Copyright © 2019 Piotr Bomba. All rights reserved.
//


#ifndef Controler_h
#define Controler_h

class Controler
{
private:
public:
    Program* currentProgram;
    std::list<Program*> programs;
    
    Controler() {
        this->loadPrograms();
    };
    ~Controler();
    void setProgram(Program * a);
    void loadPrograms() ;
    
};

void Controler::loadPrograms() {
    {
        int b,c,d,e;
        std::string a;
        std::string path = "./programs/";
        std::string filepath;
        for(int i = 0; i<1024; i++) {
            filepath = path;
            filepath += std::to_string(i);
            filepath += ".txt";
            std::ifstream infile(filepath);
            if(infile.is_open()) {
                std::cout <<"Loaded program:"<< filepath << std::endl;
                while (infile >> a >> b >> c >> d >> e)
                {
                    Program* p = new Program(a, b, c, d, e);
                    programs.push_back(p);
                }
            }
        }
        
        
        
    }
}

void Controler::setProgram(Program* a) {
    
        this->currentProgram = a;
    
}

#endif
