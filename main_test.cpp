#include "character.h"
#include "Mario.h"
#include "Yoshi.h"

#include <iostream>

int main(){
    /*

    // 1. Testing Character Class.
    Character Pilot;
    std::cout << "Pilot Speed is: " << Pilot.Speed() << std::endl;
    std::cout << "Acceleration." << std::endl ;
    Pilot.Accelerate();
    std::cout << "Break." << std::endl;
    Pilot.Break();
    Pilot.Break();
    std::cout << "Courrent speed: " << Pilot.Speed() << std::endl;
    std::cout << "Acceleration x10." << std::endl ;
    for( int i = 0; i <= 10 ; i++){
        Pilot.Accelerate();
    };
    std::cout << "Courrent speed: " << Pilot.Speed() << std::endl;

    // 2. Testing Virtual Pure member function
    std::cout << "Pilot is: " << Pilot.WhatAmI() << std::endl;
    // After Pure Virtual function was implemented Character class converted into an abstract class
    // withch cannot create an object but trought a derived class.

    */
    
    // 3. Test for Yoshi and Mario Classes 
    Yoshi Pilot_Y;
    std::cout << "Courrent pilot is: " << Pilot_Y.WhatAmI() << std::endl;
    std::cout << "Yoshi Speed is: " << Pilot_Y.Speed() << std::endl;
    std::cout << "Acceleration." << std::endl ;
    Pilot_Y.Accelerate();
    std::cout << "Break." << std::endl;
    Pilot_Y.Break();
    Pilot_Y.Break();
    std::cout << "Courrent speed: " << Pilot_Y.Speed() << std::endl;
    Mario Pilot_M;
    std::cout << "Courrent pilot is: " << Pilot_M.WhatAmI() << std::endl;
    std::cout << "Mario Speed is: " << Pilot_M.Speed() << std::endl;
    std::cout << "Acceleration x10." << std::endl ;
    for( int i = 0; i <= 10 ; i++){
        Pilot_M.Accelerate();
    };
    std::cout << "Courrent speed: " << Pilot_M.Speed() << std::endl;


    return EXIT_SUCCESS;
 }
