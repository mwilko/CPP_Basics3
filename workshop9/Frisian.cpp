//
//  Frisian.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include "Frisian.h"

using namespace std;
#include <iostream>

Frisian::Frisian(){
    cout << "Frisian constructor called..." << endl;
}

void Frisian::speak(void) {
    cout << "Frisian Cow says: \tmoo (in black and white)!" << endl;
}

Frisian::~Frisian(){
    cout << "Frisian deconstructor called..." << endl;
}
