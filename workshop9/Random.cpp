//
//  Random.cpp
//  workshop9
//
//  Created by Max Wilkinson on 27/11/2023.
//

#include "Random.h"

Random::Random(){
    //cout << "Random constructor called..." << endl;
}

int Random::RandomNumber(int firstNum, int lastNum){
    //used mt19937 insead of rand() because all objects were the same, there was no mix (mt19937 = random num gen)
    //gen is an object of mt19937 class
    mt19937 gen(_seed());
    uniform_int_distribution<int> range(firstNum, lastNum); //defines the range in which the rand num gen uses

    return range(gen);//returns random number
}

Random::~Random(){
    //cout << "Random deconstructor called..." << endl;
}
