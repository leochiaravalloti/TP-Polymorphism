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