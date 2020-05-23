#include <iostream>
#include <algorithm>

using namespace::std;

unsigned getNthUglyNum(unsigned n){
    unsigned u[n];
    unsigned i2=0, i3=0, i5=0;
    unsigned next_mult_of_2 = 2;
    unsigned next_mult_of_3 = 3;
    unsigned next_mult_of_5 = 5;
    unsigned next_ugly_num = 5;

    u[0] = 1;
    for(int i=1; i<n ; i++){
        next_ugly_num = min(next_mult_of_2, min(next_mult_of_3, next_mult_of_5));

        u[i] = next_ugly_num;
        if(next_ugly_num == next_mult_of_2){
            i2+= 1;
            next_mult_of_2 = u[i2]*2;
        }

        if(next_ugly_num == next_mult_of_3){
            i3+= 1;
            next_mult_of_3 = u[i3]*3;
        }

        if(next_ugly_num == next_mult_of_5){
            i5+= 1;
            next_mult_of_5 = u[i5]*5;
        }
    }
    return next_ugly_num;
}

int main(){
    int n=150;
    cout << "getNthUglyNum(n)";
    return 0;
}