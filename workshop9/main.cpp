//
//  main.cpp
//  workshop9
//
//  Created by Max Wilkinson on 22/11/2023.
//

#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
#include "Cow.h"
#include "Sheep.h"
#include "Frisian.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Cow cow;
    Sheep sheep;
    Frisian frisian;
    
    vector<Animal*> container;
    container.push_back(&cow);
    container.push_back(&sheep);
    container.push_back(&frisian);
    
    
    for (int a = 0; a < container.size(); a++)
    {
    container[a]->speak();
    }
    return 0;
}
