// Copyright (c) 2021 Ferdous Sediqi All rights reserved.
// Created by: Ferdous Sediqi
// Created on: May. 14, 2022
// This program asks the user for the height
// and radius of a cylinder. It then calculates
// and displays the surface area of the  cylinder using a function
// called CylinderArea.


#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using std::string;

// declare a function called CylindernderArea with 2 parameters
float CylinderArea(float CylinderRadius, float CylinderHeight) {
  // variables for calculating surface area
  float TotalArea;
  float fourmula_1;
  float fourmula_2;
  fourmula_1 = 2 * M_PI * CylinderRadius * CylinderHeight;
  fourmula_2 = 2 * M_PI * CylinderRadius * CylinderRadius;
  TotalArea = fourmula_1 + fourmula_2;
  return TotalArea;
  
}

int main() {
// variable for user input
string InputHeightString;
string InputRadiusString;
float InputHeightFloat;
float InputRadiusFloat;
// set loop counter
int counter = 0;
string PlayAgain = "y";
float CallingFunction;

// using while loop to restart the program
while (PlayAgain == "y") {
    // Greet user and get the inputs for height and radius
    std::cout
    <<"Welcome!! in this program we ask user for the height and radius"
    << std::endl;
    std::cout
    <<"of the Cylinder and calculate the surface area of the Cylinder"
    << std::endl;
    std::cout <<""<< std::endl;
    // ask for Radius and Height of Cylinder
    std::cout << "Enter the height (cm): ";
    std::cin >> InputHeightString;
    std::cout << "Enter the radius (cm): ";
    std::cin >> InputRadiusString;
      
    try {
      
      // convert user input from string to float
      InputHeightFloat = std::stof(InputHeightString);
      InputRadiusFloat = std::stof(InputRadiusString);
      counter++;

      // check if user input is greater than 0
      if (InputHeightFloat <= 0 || InputRadiusFloat <= 0) {
        std::cout <<"Invalid inputs. Inputs numbers cannot be 0 or less"
<< std::endl;

      } else {
         // calling the function with 2 arguments
         CallingFunction = CylinderArea(InputRadiusFloat, InputHeightFloat);
         std::cout << std::fixed << std::setprecision(2) <<
  "The surface area of the cylinder is " << CallingFunction <<" cm²" << std::endl;

      }
  }
    // Display invalid input
    catch (std::invalid_argument) {
      std::cout <<"Invalid input. Input was not a number" << std::endl;
  }
    // ask user if they want to restart the program
    std::cout << "Restart the program?(y/n or any key to End) ";
    std::cin >> PlayAgain;
    std::cout << "" << std::endl;
}
  std::cout << "Thanks for playing."<< std::endl;
  std::cout << "Have A Good Day"<< std::endl;
}
