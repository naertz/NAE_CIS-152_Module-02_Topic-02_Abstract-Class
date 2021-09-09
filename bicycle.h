// =========================
// Name    : Bicycle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#ifndef BICYCLE_H
#define BICYCLE_H

#include "cycle.h"

class Bicycle : private Cycle
{
    public:
        Bicycle();                                // Default Constructor Delegated To Base Number Of Tires Constructor
        Bicycle(int numberOfFlats);               // Main Constructor Delegated To Base Main Constructor
        void setNumberOfFlats(int numberOfFlats); // Overridden Number Of Flats Mutator
        int getNumberOfTires() const;             // Overridden Number Of Tires Accessor
        int getNumberOfFlats() const;             // Overridden Number Of Flats Accessor
        std::string str() const;                  // Virtual Cycle String Representation
        std::string ride() const;                 // Virtual Ride Printer
        std::string stop() const;                 // Virtual Stop Printer
};

#endif // BICYCLE_H
