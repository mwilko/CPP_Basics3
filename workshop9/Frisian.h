//
//  Frisian.h
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#ifndef Frisian_h
#define Frisian_h

#include <stdio.h>
#include "Cow.h"
class Frisian : public Cow//Frisian class inherits from Cow class / Cow class inherits from Animal class
{
public:
    //not virtual as doesnt need to be overriden since there is no class which inherits it
    void speak(void);
};

#endif /* Frisian_h */
