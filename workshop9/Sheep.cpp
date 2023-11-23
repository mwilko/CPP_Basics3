//
//  Sheep.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include "Sheep.h"

using namespace std;
#include <iostream>

Sheep::Sheep(){
    cout << "Sheep constructor called..." << endl;
}

void Sheep::speak(void) {
cout << "Sheep says: \t\tbaa!" << endl;
}

Sheep::~Sheep(){
    cout << "Sheep deconstructor called..." << endl;
}
