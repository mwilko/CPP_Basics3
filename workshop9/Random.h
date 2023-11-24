//
//  Random.h
//  workshop9
//
//  Created by Max Wilkinson on 23/11/2023.
//

#ifndef Random_h
#define Random_h

#include <stdio.h>
#include <random>
using namespace std;

class Random {
private:
    random_device _seed; //random_device is a seed, it ensures that the random number generation is different everytime its used
public:
    Random();
    int RandomNumber(int firstNum, int lastNum);//function to make random number
    ~Random();
};

#endif /* RandNumGen_h */
