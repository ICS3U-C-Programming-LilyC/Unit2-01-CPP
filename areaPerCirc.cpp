// Copyright (c) 2021 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Sept. 22, 2023
// This program calculates and displays the area
// and perimeter of a circle with radius 7.2 cm.
#include <cmath>
#include <iostream>

int main() {
    std::cout << "For a circle that has a radius\n";
    std::cout << "of 7.2cm:\n";
    std::cout << "\n";
    std::cout << "Area = " << M_PI * pow(7.2, 2) << " cm^2\n";
    std::cout << "Perimeter = " << 2 * M_PI * 7.2 << " cm\n";
}
