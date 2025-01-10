#include "character.h"
#include <string>

class Yoshi : public Character {
    public:
	    Yoshi();//Constructor
	    ~Yoshi();  //Destructor

        //Pure virtual member
	    virtual std::string WhatAmI() const override;  //WhatAmI override

        //Acceleration override
        void Accelerate() override;
};