#include "character.h"
#include "Mario.h"
#include "Yoshi.h"

#include <iostream>

void grandPrix() ;

int main(){
    // 1.2.3. Test for Character, Yoshi and Mario Classes, 
    Yoshi Pilot_Y;
    Pilot_Y.in_crest(); // 6. Test for Crest
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
    std::cout << "Acceleration!" << std::endl ;
    Pilot_M.Accelerate();
    std::cout << "Courrent speed: " << Pilot_M.Speed() << std::endl;

    // 5. Test for Yoshi Acceleration() override 
    grandPrix();

    return EXIT_SUCCESS;
 }

void grandPrix(){
    Mario Runner1;
    Yoshi Runner2;
    
    Runner2.in_crest(); 

    std::cout << ">>>>>>>>>>>>><<<<<<<<<<<<<<" << std::endl;
    std::cout << ">>GRAND PRIX STARTING IN<<<" << std::endl;
    std::cout << ">>>>>>>>>>>> 3 <<<<<<<<<<<<" << std::endl;
    std::cout << ">>>>>>>>>>>> 2 <<<<<<<<<<<<" << std::endl;
    std::cout << ">>>>>>>>>>>> 1 <<<<<<<<<<<<" << std::endl;
    std::cout << ">>>>>>>>>>> GO! <<<<<<<<<<<" << std::endl;

    int distance_1 = 0;
    int distance_2 = 0;
    const int checkered_flag = 50;
    int time = 0;
    
    do{
        Runner1.Accelerate();
        distance_1 += Runner1.Speed(); // Simplification: MRU
        Runner2.Accelerate();
        distance_2 += Runner2.Speed();
        time=time+1;

        std::cout << ">>>>>>>>>>>>><<<<<<<<<<<<<<" << std::endl;
        std::cout << "Distances covered at time " << time <<std::endl;
        std::cout << Runner1.WhatAmI() << ": " << distance_1 <<" meters."<<std::endl;
        std::cout << Runner2.WhatAmI() << ": " << distance_2 <<" meters."<<std::endl;

    }while(distance_1<checkered_flag && distance_2<checkered_flag);

    if (distance_1 >= checkered_flag && distance_2 >= checkered_flag) {
        std::cout << ">>>>>>>>> IT'S A TIE! <<<<<<<<<" << std::endl;
    } else if (distance_1 >= checkered_flag) {
        std::cout << ">>>>>>>>>> MARIO WINS <<<<<<<<<" << std::endl;
    } else {
        std::cout << ">>>>>>>>> YOSHI WINS <<<<<<<<<<" << std::endl;
    }
}
