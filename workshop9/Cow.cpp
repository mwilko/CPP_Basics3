//
//  Cow.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include "Cow.h"

#include <iostream>
using namespace std;
#include <iostream>

Cow::Cow(){
    //cout << "Cow constructor called..." << endl;
}

void Cow::speak(void) {
cout << "Cow says: \t\tmoo!" << endl;
}

Cow::~Cow(){
    //cout << "Cow deconstructor called..." << endl;
}
