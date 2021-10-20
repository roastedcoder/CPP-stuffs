
/*

    1. 
    
    2. 
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

}

/*
    OP:
    Derived
    Derived
    Base

*/