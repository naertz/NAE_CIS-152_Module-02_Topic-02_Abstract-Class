// =================================================================================================
// Name             : Bicycle Driver
// Author           : Noah Allan Ertz
// Created          : 09/08/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints Bicycle objects, their manipulations, and their functions.
//                    Output: Bicycle objects' information, manipulations, and functions.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "bicycle_driver.h"

#include "bicycle.h"

#include <iostream>

static void createObject();                                         // O(1)
static void printCreateDefaultObject();                             // O(1)

static void createObject(int numberOfFlats);                        // O(1)
static void printCreateMainObject(int numberOfFlats);               // O(1)

static void mutateObjectFlats(int initialFlats, int newFlats);      // O(1)
static void printMutateObjectFlats(int initialFlats, int newFlats); // O(1)

static void rideObject(int initialFlats);                           // O(1)
static void printRideObject(int initialFlats);                      // O(1)

static void stopObject(int initialFlats);                           // O(1)
static void printStopObject(int initialFlats);                      // O(1)

void bicycleDriver() {
    printCreateDefaultObject();                       // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printCreateMainObject(-1);                        // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(0);                         // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(1);                         // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2);                         // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(3);                         // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printMutateObjectFlats(1, -1);                    // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(1, 0);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(0, 1);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(1, 2);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(1, 3);                     // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printRideObject(0);                               // O(1)
    std::cout << std::endl;                           // O(1)

    printStopObject(0);                               // O(1)
} // O(1) * 25 = O(1)

static void createObject() {
    // Create object with default constructor.
    Bicycle defaultBicycle = Bicycle();                                                                    // O(1)

    // Print object string representation.
    std::cout << "Default Bicycle str(): " << defaultBicycle.str() << std::endl;                           // O(1)

    // Print object accessors.
    std::cout << "Default Bicycle getNumberOfTires(): " << defaultBicycle.getNumberOfTires() << std::endl; // O(1)
    std::cout << "Default Bicycle getNumberOfFlats(): " << defaultBicycle.getNumberOfFlats() << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateDefaultObject() {
    // Heading
    std::cout << "Default Constructor:" << std::endl; // O(1)
    // Event
    createObject();                                   // O(1)
    // Newline
    std::cout << std::endl;                           // O(1)
} // O(1) * 3 = O(1)

static void createObject(int numberOfFlats) {
    // Create object with main constructor.
    Bicycle mainBicycle = Bicycle(numberOfFlats);                                                    // O(1)

    // Print object string representation.
    std::cout << "Main Bicycle str(): " << mainBicycle.str() << std::endl;                           // O(1)

    // Print object accessors.
    std::cout << "Main Bicycle getNumberOfTires(): " << mainBicycle.getNumberOfTires() << std::endl; // O(1)
    std::cout << "Main Bicycle getNumberOfFlats(): " << mainBicycle.getNumberOfFlats() << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateMainObject(int numberOfFlats) {
    // Heading
    std::cout << "Main Constructor (" << numberOfFlats << " Flat(s)):" << std::endl;  // O(1)
    // Event
    createObject(numberOfFlats);                                                      // O(1)
    // Newline
    std::cout << std::endl;                                                           // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectFlats(int initialFlats, int newFlats) {
    // Create object with main constructor.
    Bicycle newBicycle = Bicycle(initialFlats);                                                     // O(1)

    // Print object string representation.
    std::cout << "New Bicycle str(): " << newBicycle.str() << std::endl;                            // O(1)

    // Print mutator message for setting Number Of Flats to newFlats.
    std::cout << "Setting New Bicycle Number Of Flats to " << newFlats << " Flat(s)." << std::endl; // O(1)

    // Set Number Of Flats to newFlats.
    newBicycle.setNumberOfFlats(newFlats);                                                          // O(1)

    // Print object string representation.
    std::cout << "New Bicycle str(): " << newBicycle.str() << std::endl;                            // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectFlats(int initialFlats, int newFlats) {
    // Heading
    std::cout << "Bicycle(" << initialFlats << " Flat(s)) set to " << newFlats << " Flat(s):" << std::endl; // O(1)
    // Event
    mutateObjectFlats(initialFlats, newFlats);                                                              // O(1)
    // Newline
    std::cout << std::endl;                                                                                 // O(1)
} // O(1) * 3 = O(1)

static void rideObject(int initialFlats) {
    // Create object with main constructor.
    Bicycle newBicycle = Bicycle(initialFlats);                            // O(1)

    // Print function message for riding object.
    std::cout << "New Bicycle ride(): " << newBicycle.ride() << std::endl; // O(1)
} // O(1) * 2 = O(1)

static void printRideObject(int initialFlats) {
    // Heading
    std::cout << "Bicycle(" << initialFlats << " Flat(s)) called to Ride:" << std::endl; // O(1)
    // Event
    rideObject(initialFlats);                                                            // O(1)
    // Newline
    std::cout << std::endl;                                                              // O(1)
} // O(1) * 3 = O(1)

static void stopObject(int initialFlats) {
    // Create object with main constructor.
    Bicycle newBicycle = Bicycle(initialFlats);                            // O(1)

    // Print function message for stopping object.
    std::cout << "New Bicycle stop(): " << newBicycle.stop() << std::endl; // O(1)
} // O(1) * 2 = O(1)

static void printStopObject(int initialFlats) {
    // Heading
    std::cout << "Bicycle(" << initialFlats << " Flat(s)) called to Stop:" << std::endl; // O(1)
    // Event
    stopObject(initialFlats);                                                            // O(1)
    // Newline
    std::cout << std::endl;                                                              // O(1)
} // O(1) * 3 = O(1)
