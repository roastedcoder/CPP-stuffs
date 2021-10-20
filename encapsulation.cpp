
// 1. Encapsulation is a object oriented programming concept which talks about
//    binding together data and the functions that manipulates those data

// 2. Class is an example of encapsulation
// Here we have encapsulated x and functions together
// we can only access x using those functions
// if we make x public then that is not an example of encapsulation

#include <bits/stdc++.h>
using namespace std;

class Capsule{
    int x;

public:
    void setValue(int x) {
        this->x = x;
    }
    int getValue() {
        return this->x;
    }
};

int main() {
    Capsule myCap;
    myCap.setValue(5);
    cout<<myCap.getValue()<<endl;
}