// BMICalculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "BMI Calculator\n";
    float weight, height, bmi;
    std::cout << "Enter Your Weight in Kg's:";
    std::cin >> weight;
    std::cout << "Enter Your Height in Meter's:";
    std::cin >> height;
    bmi = weight / (height * height);
    float Underweight = 18.4;
    float OverWeight = 25;
    if (bmi <= Underweight) {
        std::cout << "You are Categorized as Underweight" << std::endl;
        std::cout << "Your BMI is " << bmi << " It Shourld be Greater Than " << Underweight << " And Less than " << OverWeight << " To Conisder as Normal" << std::endl;
    }
    else if (bmi >= OverWeight) {
        std::cout << "You are Categorized as Overweight" << std::endl;
        std::cout << "Your BMI is " << bmi << " It Shourld be Greater Than " << Underweight << " And Less than " << OverWeight << " To Conisder as Normal" << std::endl;
    }
    else {
        std::cout << "You are Categorized as Normal" << std::endl;
        std::cout << "Your BMI is " << bmi << std::endl;
    }
    
}


