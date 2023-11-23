//
//  Sheep.h
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#ifndef Sheep_h
#define Sheep_h

#include <stdio.h>
#include "Animal.h"


class Sheep : public Animal//Sheep class inherits from Animal class
{
public:
    Sheep();//constructor
    //not virtual as doesnt need to be overriden since there is no class which inherits it
    void speak(void);
    ~Sheep();//deconstructor
};


#endif /* Sheep_h */
