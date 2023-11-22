//
//  main.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include <iostream>
#include <string>
#include <vector>

//including header files
#include "Animal.h"
#include "Cow.h"
#include "Sheep.h"
#include "Frisian.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    
    //creating objects of derived classes
    Cow cow;
    Sheep sheep;
    Frisian frisian;
    
    //container holding references of the instances of all classes
    vector<Animal*> container;//Animal type to allow for polymorhpic behaviour
    container.push_back(&cow);
    container.push_back(&sheep);
    container.push_back(&frisian);
    
    //for loop which iterates through the vector one by one
    for (int a = 0; a < container.size(); a++)
    {
    container[a]->speak();//displays corresponding cout message for each item
    }
    return 0;
}
