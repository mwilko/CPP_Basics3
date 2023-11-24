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
#include "Random.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    //container holding references of the instances of all classes
    vector<Animal*> container;//Animal type to allow for polymorhpic behaviour
    Random rnd;//Random object made for the random number
    int choice = 0;
    
    cout << "enter number of objects: ";
    cin >> choice;

    for (int i = 0; i < choice; ++i) //for loop which iterates based on the object amount given by user
    {
        //random number is picked from given range
        int animal = rnd.RandomNumber(1, 3);
        if (animal == 1) {
            container.push_back(new Sheep());
        } else if (animal == 2) {
            container.push_back(new Cow());
        } else if (animal == 3){
            container.push_back(new Frisian());
        } else{
            cout << "Error: Random Number Generator Issue" << endl;
        }
        
    }
    
    //for loop which iterates through the vector one by one
    for (int a = 0; a < container.size(); a++)
    {
    container[a]->speak();//displays corresponding cout message for each item
    }
    return 0;
}
