// =================================================================================================
// Name             : Main Driver
// Author           : Noah Allan Ertz
// Created          : 09/08/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Runs two drivers
//                    Output: Cycle driver output, Bicycle driver output
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "cycle_driver.h"
#include "bicycle_driver.h"

#include <iostream>

int main() {
    // Cycle Driver
    std::cout << "Cycle Driver:" << std::endl;                     // O(1)
    cycleDriver();                                                 // O(1)

    std::cout << std::endl << std::endl << std::endl << std::endl; // O(1)

    // Bicycle Driver
    std::cout << "Bicycle Driver:" << std::endl;                   // O(1)
    bicycleDriver();                                               // O(1)
} // O(1) * 5 = O(1)
