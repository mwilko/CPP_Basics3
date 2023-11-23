//
//  Animal.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include "Animal.h"
#include <iostream>
using namespace std;
#include <iostream>

Animal::Animal(){
    cout << "Animal constructor called..." << endl;
}

void Animal::speak(void){
};

Animal::~Animal(){
    cout << "Animal deconstructor called..." << endl;
}
