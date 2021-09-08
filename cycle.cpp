// =========================
// Name    : Cycle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#include "cycle.h"

#include <sstream>

// Constructor(s) ==================================
// Default
Cycle::Cycle() {
    this->numberOfTires = 2;
    this->numberOfFlats = 0;
}

// Number Of Tires
Cycle::Cycle(int numberOfTires) {
    if (numberOfTires < 0) {
        this->numberOfTires = 0;
    } else {
        this->numberOfTires = numberOfTires;
    }

    this->numberOfFlats = 0;
}

// Main
Cycle::Cycle(int numberOfTires, int numberOfFlats) {
    if (numberOfTires < 0) {
        this->numberOfTires = 0;
    } else {
        this->numberOfTires = numberOfTires;
    }

    if (numberOfFlats > numberOfTires) {
        if (numberOfTires < 0) {
            this->numberOfFlats = 0;
        } else {
            this->numberOfFlats = numberOfTires;
        }
    } else {
        if (numberOfFlats < 0) {
            this->numberOfFlats = 0;
        } else {
            this->numberOfFlats = numberOfFlats;
        }
    }
}
// =================================================

// Mutator(s) =======================================
// Number Of Tires
void Cycle::setNumberOfTires(int numberOfTires) {
    if (numberOfTires < 0) {
        this->numberOfTires = 0;
        this->numberOfFlats = 0;
    } else if (numberOfTires < this->numberOfFlats) {
        this->numberOfTires = numberOfTires;
        this->numberOfFlats = numberOfTires;
    } else {
        this->numberOfTires = numberOfTires;
    }
}

// Number Of Flats
void Cycle::setNumberOfFlats(int numberOfFlats) {
    if (numberOfFlats < 0) {
        this->numberOfFlats = 0;
    } else if (numberOfFlats > this->numberOfTires) {
        this->numberOfFlats = this->numberOfTires;
    } else {
        this->numberOfFlats = numberOfFlats;
    }
}
// ==================================================

// Accessor(s) ======================
// Number Of Tires
int Cycle::getNumberOfTires() const {
    return numberOfTires;
}

// Number Of Flats
int Cycle::getNumberOfFlats() const {
    return numberOfFlats;
}
// ==================================

// Function(s) =============================================================================================================
// Virtual Cycle String Representation
std::string Cycle::str() const {
    std::ostringstream oSS;

    oSS << "Cycle [numberOfTires=" << this->numberOfTires << ", numberOfFlats=" << this->numberOfFlats << "]" << std::flush;

    std::string objectStringRepresentation = oSS.str();

    return objectStringRepresentation;
}

// Virtual Ride Printer
std::string Cycle::ride() const {
    std::ostringstream oSS;

    oSS << "Riding cycle" << std::flush;

    std::string rideMessage = oSS.str();

    return rideMessage;
}

// Virtual Stop Printer
std::string Cycle::stop() const {
    std::ostringstream oSS;

    oSS << "Stopping cycle" << std::flush;

    std::string stopMessage = oSS.str();

    return stopMessage;
}
// =========================================================================================================================
