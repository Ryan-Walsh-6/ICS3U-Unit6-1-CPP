// Copyright (c) 2021 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on January 12 2021
// this program calculates the average of 10 random numbers

#include <iostream>
#include <string>
#include <iomanip>
#include <random>


int main() {
// this program calculates the average of 10 random numbers
    float average;
    float sum;
    int random_number;
    int my_numbers[10];
    std::random_device rseed;
    std::mt19937 rgen(rseed());  //  mersenne_twister
    std::uniform_int_distribution<int> idist(1, 100);  //  [1, 100]


    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        random_number = idist(rgen);
        my_numbers[loop_counter] = random_number;
    }
    for (int loop_counter = 0; loop_counter < 10; loop_counter++) {
        std::cout << "The random number is " << my_numbers[loop_counter]
        << std::endl;
        sum += my_numbers[loop_counter];
    }
    average = sum / 10;
    std::cout << "" << std::endl;
    std::cout << std::setprecision(1) << std::fixed << "The average is "
    << average << std::endl;
}
