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

class Cow : public Animal
{
public:
    virtual void speak(void);
};

#endif /* Cow_h */
