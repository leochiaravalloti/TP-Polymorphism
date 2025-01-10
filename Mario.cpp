#include "Mario.h"
#include "character.h"

#include <string>
#include <iostream>

//Constructor
Mario::Mario(): Character(){}

//Destructor
Mario::~Mario() = default;

//WhatAmI
std::string Mario::WhatAmI() const{
	return "Mario";
}