/*
    void
    1. It is used to denote "Nothing".
    2. we use void when a function doesn't take any parameter or do not return anything
    3. we can not create void variable
    4. sizeof(void) is 1 in case of gcc while in other compilers it is invalid to check


    void*
    1. 
*/

#include <bits/stdc++.h>
using namespace std;

void fun0() {
    cout<<"Hello World!"<<endl;
    // return ;
}

void fun1(void) {
    cout<<"Hello World!"<<endl;
}

int main() {
    fun0();
    fun1();
    // void x;
    cout<<sizeof(void);
}