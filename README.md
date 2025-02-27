# TP-Polymorphism
## Object Oriented Programing Course, 4BIM INSA Lyon
Challenge Polymorphism: hands-on
======================

### 1) Implement a class ``Character`` containing the following:
* Data member: ``float speed_``
* Static data member: ``float max_speed_`` initialized to 10.
* Default constructor: initializes ``speed_`` to 0.
* Member function: ``void Accelerate()`` increments ``speed_`` by 1 (up to ``max_speed_``)
* Member function: ``void Break()`` decrements ``speed_`` by 1 (down to 0.)
* Member function: (inlined accessor): ``auto speed() const``

Don't forget the destructor and the tests  ;)

### 2) Add a pure virtual function member
Add the following declaration to your class Character:
``virtual std::string WhatAmI() const = 0;``

Explain what happens at compile-time

### 3) Extend class Character:
Implement classes ``Mario`` and ``Yoshi`` that specialize class ``Character`` and override ``WhatAmI()``:
* ``Mario::WhatAmI()`` will return string "Mario"
* ``Yoshi::WhatAmI()`` will return string "Yoshi"

### 4) Override function Accelerate()
It is well known that a fit lizard accelerates faster than a fat plumber does.

Override ``Yoshi::Accelerate()`` accordingly

### 5) Let the race begin
Populate an stl container of your choice with at least one Yoshi and one Mario and check that Yoshis do indeed accelerate faster (you will use both iterators and range-based for loops)

### 6) Number of crests
Each Yoshi can have a different number of crests.

Add a new data member to store this information. This member will be allocated *manually*.

``Yoshi::WhatAmI()`` will return a string of the form "X crested Yoshi" where X is the number of crests of the object

Check that you have no memory leaks