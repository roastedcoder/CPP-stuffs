
/*

    1. data hiding is about data member in classes, we keep data members as private(generally)
       and this is considered as data hiding.
    
    2. it is about correctness of the data and preventing accidental mainpulation.

*/

#include <bits/stdc++.h>
using namespace std;

class HidenSeek {
    int val;
    public:
    // int x; // without data hiding

    HidenSeek(int a) {
        val = a;
    }

    void setVal(int a) {
        if(a >= 0 && a <= 10) { // preventing accidental mainpulation
            val = a;
            cout<<"Set"<<endl;
        }
        else cout<<"Can't set"<<endl;
    }
};

int main() {
    HidenSeek h(0);
    // h.x = 100; // without data hiding
    // cout<<h.x<<endl; // without data hiding

    h.setVal(200);
    h.setVal(10);

}