#include <iostream>

// Character class. Father class, Mario and Yoshi will inheret Character class caracteristics.

class Character {
    public:
        //Default constructor,
        Character();

        //Destructor
        ~Character();

        //Methods or member functions
        void Accelerate();
        void Break();

        inline auto Speed() const {
            return speed_;
        };// The inline keyword suggests that the compiler substitute the code within the function definition in place of each call to that function.

        //Virtal pure member fucntion
        virtual std::string WhatAmI() const = 0;
        // What happens at compiling time:
    protected:
        float speed_;
        static float max_speed;
};

//#endif
