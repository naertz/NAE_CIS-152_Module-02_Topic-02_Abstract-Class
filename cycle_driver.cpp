// =================================================================================================
// Name             : Cycle Driver
// Author           : Noah Allan Ertz
// Created          : 09/08/2021
// Course           : CIS 152 - Data Structures
// Version          : 1.0
// OS               : Windows 10
// IDE              : Qt 5.12.5
// Copyright        : This is my own original work based on specifications issued by our instructor.
// Description      : Prints Cycle objects, their manipulations, and their functions.
//                    Output: Cycle objects' information, manipulations, and functions.
// Academic Honesty : I attest that this is my original work. I have not used unauthorized source
//                    code, either modified or unmodified. I have not given other fellow students
//                    access to my program.
// =================================================================================================

#include "cycle_driver.h"

#include "cycle.h"

#include <iostream>

static void createObject();                                                           // O(1)
static void printCreateDefaultObject();                                               // O(1)

static void createObject(int numberOfTires);                                          // O(1)
static void printCreateNumberOfTiresObject(int numberOfTires);                        // O(1)

static void createObject(int numberOfTires, int numberOfFlats);                       // O(1)
static void printCreateMainObject(int numberOfTires, int numberOfFlats);              // O(1)

static void mutateObjectTires(int initialTires, int initialFlats, int newTires);      // O(1)
static void printMutateObjectTires(int initialTires, int initialFlats, int newTires); // O(1)

static void mutateObjectFlats(int initialTires, int initialFlats, int newFlats);      // O(1)
static void printMutateObjectFlats(int initialTires, int initialFlats, int newFlats); // O(1)

static void rideObject(int initialTires, int initialFlats);                           // O(1)
static void printRideObject(int initialTires, int initialFlats);                      // O(1)

static void stopObject(int initialTires, int initialFlats);                           // O(1)
static void printStopObject(int initialTires, int initialFlats);                      // O(1)

void cycleDriver() {
    printCreateDefaultObject();                       // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printCreateNumberOfTiresObject(-2);               // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateNumberOfTiresObject(0);                // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateNumberOfTiresObject(3);                // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printCreateMainObject(-2, -3);                    // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(-2, -2);                    // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(-2, -1);                    // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(-2, 0);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(-2, 1);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(0, -1);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(0, 0);                      // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(0, 1);                      // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2, -1);                     // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2, 0);                      // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2, 1);                      // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2, 2);                      // O(1)
    std::cout << std::endl;                           // O(1)

    printCreateMainObject(2, 3);                      // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printMutateObjectTires(4, 2, -1);                 // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectTires(4, 2, 0);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectTires(4, 2, 1);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectTires(4, 2, 2);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectTires(4, 2, 3);                  // O(1)
    std::cout << std::endl << std::endl;              // O(1)

    printMutateObjectFlats(4, 2, -1);                 // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(4, 2, 0);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(4, 2, 1);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(4, 2, 3);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(4, 2, 4);                  // O(1)
    std::cout << std::endl;                           // O(1)

    printMutateObjectFlats(4, 2, 5);                  // O(1)
    std::cout << std::endl << std::endl << std::endl; // O(1)

    printRideObject(4, 2);                            // O(1)
    std::cout << std::endl;                           // O(1)

    printStopObject(4, 2);                            // O(1)
} // O(1) * 59 = O(1)

static void createObject() {
    // Create object with default constructor.
    Cycle defaultCycle = Cycle();                                                                      // O(1)

    // Print object string representation.
    std::cout << "Default Cycle str(): " << defaultCycle.str() << std::endl;                           // O(1)

    // Print object accessors.
    std::cout << "Default Cycle getNumberOfTires(): " << defaultCycle.getNumberOfTires() << std::endl; // O(1)
    std::cout << "Default Cycle getNumberOfFlats(): " << defaultCycle.getNumberOfFlats() << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateDefaultObject() {
    // Heading
    std::cout << "Default Constructor:" << std::endl; // O(1)
    // Event
    createObject();                                   // O(1)
    // Newline
    std::cout << std::endl;                           // O(1)
} // O(1) * 3 = O(1)

static void createObject(int numberOfTires) {
    // Create object with Number Of Tires constructor.
    Cycle numberOfTiresCycle = Cycle(numberOfTires);                                                                 // O(1)

    // Print object string representation.
    std::cout << "Number Of Tires Cycle str(): " << numberOfTiresCycle.str() << std::endl;                           // O(1)

    // Print object accessors.
    std::cout << "Number Of Tires Cycle getNumberOfTires(): " << numberOfTiresCycle.getNumberOfTires() << std::endl; // O(1)
    std::cout << "Number Of Tires Cycle getNumberOfFlats(): " << numberOfTiresCycle.getNumberOfFlats() << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateNumberOfTiresObject(int numberOfTires) {
    // Heading
    std::cout << "Number Of Tires Constructor (" << numberOfTires << " Tire(s)):" << std::endl; // O(1)
    // Event
    createObject(numberOfTires);                                                                // O(1)
    // Newline
    std::cout << std::endl;                                                                     // O(1)
} // O(1) * 3 = O(1)

static void createObject(int numberOfTires, int numberOfFlats) {
    // Create object with main constructor.
    Cycle mainCycle = Cycle(numberOfTires, numberOfFlats);                                       // O(1)

    // Print object string representation.
    std::cout << "Main Cycle str(): " << mainCycle.str() << std::endl;                           // O(1)

    // Print object accessors.
    std::cout << "Main Cycle getNumberOfTires(): " << mainCycle.getNumberOfTires() << std::endl; // O(1)
    std::cout << "Main Cycle getNumberOfFlats(): " << mainCycle.getNumberOfFlats() << std::endl; // O(1)
} // O(1) * 4 = O(1)

static void printCreateMainObject(int numberOfTires, int numberOfFlats) {
    // Heading
    std::cout << "Main Constructor (" << numberOfTires << " Tire(s), " << numberOfFlats << " Flat(s)):" << std::endl;  // O(1)
    // Event
    createObject(numberOfTires, numberOfFlats);                                                                        // O(1)
    // Newline
    std::cout << std::endl;                                                                                            // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectTires(int initialTires, int initialFlats, int newTires) {
    // Create object with main constructor.
    Cycle newCycle = Cycle(initialTires, initialFlats);                                           // O(1)

    // Print object string representation.
    std::cout << "New Cycle str(): " << newCycle.str() << std::endl;                              // O(1)

    // Print mutator message for setting Number Of Tires to newTires.
    std::cout << "Setting New Cycle Number Of Tires to " << newTires << " Tire(s)." << std::endl; // O(1)

    // Set Number Of Tires to newTires.
    newCycle.setNumberOfTires(newTires);                                                          // O(1)

    // Print object string representation.
    std::cout << "New Cycle str(): " << newCycle.str() << std::endl;                              // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectTires(int initialTires, int initialFlats, int newTires) {
    // Heading
    std::cout << "Cycle(" << initialTires << " Tire(s), " << initialFlats << " Flat(s)) set to " << newTires << " Tire(s):" << std::endl; // O(1)
    // Event
    mutateObjectTires(initialTires, initialFlats, newTires);                                                                              // O(1)
    // Newline
    std::cout << std::endl;                                                                                                               // O(1)
} // O(1) * 3 = O(1)

static void mutateObjectFlats(int initialTires, int initialFlats, int newFlats) {
    // Create object with main constructor.
    Cycle newCycle = Cycle(initialTires, initialFlats);                                           // O(1)

    // Print object string representation.
    std::cout << "New Cycle str(): " << newCycle.str() << std::endl;                              // O(1)

    // Print mutator message for setting Number Of Flats to newFlats.
    std::cout << "Setting New Cycle Number Of Flats to " << newFlats << " Flat(s)." << std::endl; // O(1)

    // Set Number Of Flats to newFlats.
    newCycle.setNumberOfFlats(newFlats);                                                          // O(1)

    // Print object string representation.
    std::cout << "New Cycle str(): " << newCycle.str() << std::endl;                              // O(1)
} // O(1) * 5 = O(1)

static void printMutateObjectFlats(int initialTires, int initialFlats, int newFlats) {
    // Heading
    std::cout << "Cycle(" << initialTires << " Tire(s), " << initialFlats << " Flat(s)) set to " << newFlats << " Flat(s):" << std::endl; // O(1)
    // Event
    mutateObjectFlats(initialTires, initialFlats, newFlats);                                                                              // O(1)
    // Newline
    std::cout << std::endl;                                                                                                               // O(1)
} // O(1) * 3 = O(1)

static void rideObject(int initialTires, int initialFlats) {
    // Create object with main constructor.
    Cycle newCycle = Cycle(initialTires, initialFlats);                // O(1)

    // Print function message for riding object.
    std::cout << "New Cycle ride(): " << newCycle.ride() << std::endl; // O(1)
} // O(1) * 2 = O(1)

static void printRideObject(int initialTires, int initialFlats) {
    // Heading
    std::cout << "Cycle(" << initialTires << " Tire(s), " << initialFlats << " Flat(s)) called to Ride:" << std::endl; // O(1)
    // Event
    rideObject(initialTires, initialFlats);                                                                            // O(1)
    // Newline
    std::cout << std::endl;                                                                                            // O(1)
} // O(1) * 3 = O(1)

static void stopObject(int initialTires, int initialFlats) {
    // Create object with main constructor.
    Cycle newCycle = Cycle(initialTires, initialFlats);                // O(1)

    // Print function message for stopping object.
    std::cout << "New Cycle stop(): " << newCycle.stop() << std::endl; // O(1)
} // O(1) * 2 = O(1)

static void printStopObject(int initialTires, int initialFlats) {
    // Heading
    std::cout << "Cycle(" << initialTires << " Tire(s), " << initialFlats << " Flat(s)) called to Stop:" << std::endl; // O(1)
    // Event
    stopObject(initialTires, initialFlats);                                                                            // O(1)
    // Newline
    std::cout << std::endl;                                                                                            // O(1)
} // O(1) * 3 = O(1)
