//
//  main.cpp
//  PRG-2-11-Distance-per-Tank-of-Gas
//
//  Created by Keith Smith on 10/6/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town,
//  and 28.9 miles per gallon when driven on the highway. Write a program that calculates
//  and displays the distance the car can travel on one tank of gas when driven in town
//  and when driven on the highway.
//  HINT: The following formula can be used to calculate the distance:
//  Distance = Number of Gallons x Average Miles per Gallon

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    // Define constants
    const float FLT_MPG_TOWN = 23.5f;
    const float FLT_MPG_HIGHWAY = 28.9f;
    
    const int INT_TANK_SIZE = 20;
    
    // Define variables
    float fltMilesTown;
    float fltMilesHighway;
    
    // Configure decimal output for single point of precision
    cout << setprecision(1) << fixed << showpoint;
    
    // Calculate total miles for town and highway
    fltMilesTown = static_cast<float>(INT_TANK_SIZE) * FLT_MPG_TOWN;
    fltMilesHighway = static_cast<float>(INT_TANK_SIZE) * FLT_MPG_HIGHWAY;
    
    // Output results to console
    cout << setw(25) << "Town miles total: " << fltMilesTown << " miles" << endl;
    cout << setw(25) << "Highway miles total: " << fltMilesHighway << " miles" << endl;
    
    return 0;
}
