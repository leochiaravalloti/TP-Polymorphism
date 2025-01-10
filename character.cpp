#include "character.h"

float Character::max_speed = 10;
//Default constructor
Character::Character(){
    speed_ = 0;
}
//Destructor
Character::~Character() = default;
//Accelerate() method
void Character::Accelerate(){
    if( speed_ < max_speed){
        speed_ = speed_ + 1;
        std::cout << "Successful Acceleration: The speed has been increased to "
        << speed_ << std::endl;
    }else{
        std::cout << "Maximum Speed Reached: Further acceleration is not possible. "
        << speed_ << std::endl;
    }
}
//Break() method
void Character::Break(){
    if( speed_ != 0){
        speed_ = speed_ - 1;
        std::cout << "Successful Deceleration: The speed has been reduced to "
        << speed_ << std::endl;
    }else{
        std::cout << "The user is already stopped, is not posible to use the brakes. "
        << speed_ << std::endl;
    }
}
