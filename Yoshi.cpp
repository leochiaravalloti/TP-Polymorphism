#include "Yoshi.h"
#include "character.h"

#include <string>
#include <iostream>

//Constructor
Yoshi::Yoshi(): Character(){}

//Destructor
Yoshi::~Yoshi() = default;

//WhatAmI
std::string Yoshi::WhatAmI() const{
	return "Yoshi";
}
//
void Yoshi::Accelerate(){
    if( speed_ < (max_speed-2)){
        speed_ = speed_ + 3;
        std::cout << "Successful Acceleration: The speed has been increased to "
        << speed_ << std::endl;
    }
    else{
        speed_ = max_speed;
        std::cout << "Maximum Speed Reached: Further acceleration is not possible. "
        << speed_ << std::endl;
    }
}
