#include "character.h"
#include <string>

class Mario : public Character {
    public:
	    Mario();//Constructor
	    ~Mario();  //Destructor
        //Pure virtual member
	    virtual std::string WhatAmI() const override;  //WhatAmI override
};