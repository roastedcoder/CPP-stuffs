
/*

    1. All the function of same name of a base class are hidden in derived class.
    
    2. we use scope resolution operator inside derived class to counter function hiding
        using Base::fun;
*/

#include <bits/stdc++.h>
using namespace std;

class Base {
    public:
    void fun(int i) {
        cout<<"Base"<<endl;
    }
};

class Derived: public Base {
    public:

    // using Base::fun;

    void fun(char c) {
        cout<<"Derived"<<endl;
    }
};

int main() {
    Derived d;
    d.fun(1);
    d.fun('c');
    d.Base::fun(100);

    // d.fun("fun"); // compile-error

}

/*
    OP:
    Derived
    Derived
    Base

    OP: using (using Base::fun;)
    Base
    Derived
    Base

*/