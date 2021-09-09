// =========================
// Name    : Bicycle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#include "bicycle.h"

#include <sstream>

// Constructor(s) ===============================================
// Default To Base Number Of Tires
Bicycle::Bicycle() : Cycle(2) { }

// Main To Base Main
Bicycle::Bicycle(int numberOfFlats) : Cycle(2, numberOfFlats) { }
// ==============================================================

// Mutator(s) =====================================
// Overridden Number Of Flats
void Bicycle::setNumberOfFlats(int numberOfFlats) {
    Cycle::setNumberOfFlats(numberOfFlats);
}
// ================================================

// Accessor(s) ========================
// Overridden Number Of Tires
int Bicycle::getNumberOfTires() const {
    return Cycle::getNumberOfTires();
}

// Overridden Number Of Flats
int Bicycle::getNumberOfFlats() const {
    return Cycle::getNumberOfFlats();
}
// ====================================

// Function(s) ===========================================================================================================================
// Virtual Class String Representation
std::string Bicycle::str() const {
    std::ostringstream oSS;

    oSS << "Bicycle [numberOfTires=" << Cycle::getNumberOfTires() << ", numberOfFlats=" << Cycle::getNumberOfFlats() << "]" << std::flush;

    std::string objectStringRepresentation = oSS.str();

    return objectStringRepresentation;
}

// Virtual Ride Printer
std::string Bicycle::ride() const {
    std::ostringstream oSS;

    oSS << "Riding bicycle" << std::flush;

    std::string rideMessage = oSS.str();

    return rideMessage;
}

// Virtual Stop Printer
std::string Bicycle::stop() const {
    std::ostringstream oSS;

    oSS << "Stopping bicycle" << std::flush;

    std::string stopMessage = oSS.str();

    return stopMessage;
}
// =======================================================================================================================================
