//
//  Animal.h
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#ifndef Animal_h
#define Animal_h

#include <stdio.h>

class Animal//interface class (only pure virtual methods)
{
public:
//virutal to allow derived classes to override the function with its own implimentation
    
//base class method acts as a placeholder
virtual void speak(void) = 0;//pure virtual function (no content/body)
};

#endif /* Animal_h */


