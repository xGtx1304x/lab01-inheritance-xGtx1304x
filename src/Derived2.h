//
// Created by Andres on 15/3/2022.
//

#ifndef LAB01_INHERITANCE_XGTX1304X_DERIVED2_H
#define LAB01_INHERITANCE_XGTX1304X_DERIVED2_H
#include "Derived1.h"

class Derived2 final : public Derived1 {
public:
    Derived2() = default;
    ~Derived2() final = default;
    void doSomething() final;
};


#endif //LAB01_INHERITANCE_XGTX1304X_DERIVED2_H
