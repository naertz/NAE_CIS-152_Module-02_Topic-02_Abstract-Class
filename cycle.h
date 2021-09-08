// =========================
// Name    : Cycle
// Author  : Noah Allan Ertz
// Created : 09/08/2021
// =========================

#ifndef CYCLE_H
#define CYCLE_H

#include <string>

class Cycle {
    public:
        Cycle();                                     // Default Constructor
        Cycle(int numberOfTires);                    // Number Of Tires Constructor
        Cycle(int numberOfTires, int numberOfFlats); // Main Constructor
        void setNumberOfTires(int numberOfTires);    // Number Of Tires Mutator
        void setNumberOfFlats(int numberOfFlats);    // Number Of Flats Mutator
        int getNumberOfTires() const;                // Number of Tires Accessor
        int getNumberOfFlats() const;                // Number of Flats Accessor
        virtual std::string str() const;             // Pure Virtual Cycle String Representation
        virtual std::string ride() const;            // Pure Virtual Ride Printer
        virtual std::string stop() const;            // Pure Virtual Stop Printer
    private:
        int numberOfTires;                           // Number Of Tires
        int numberOfFlats;                           // Number Of Flats
};

#endif // CYCLE_H
