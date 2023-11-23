//
//  Cow.h
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#ifndef Cow_h
#define Cow_h

#include <stdio.h>
#include "Animal.h"

class Cow : public Animal//Cow class inherits from Animal class
{
public:
    Cow();//constructor
    //virtual so the method can be overriden if the Frisian object is used
    virtual void speak(void);//displays cout for Cow 
    ~Cow();//deconstructor
};

#endif /* Cow_h */
