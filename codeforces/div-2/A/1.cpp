#include<iostream>
#include<math.h>
#include<cmath>

using namespace::std;

int main()
{
    double m =0, n=0, a=0;
    unsigned long long x=0 ,y=0;
    cin >> m >> n >> a;
    if(m>a){
        x = ceil(m/a);
    }
    else{
        x = 1;
    }
    if(n>a)
        y = ceil(n/a);
    else
        y = 1;

    cout << x*y;
    return 0;
}