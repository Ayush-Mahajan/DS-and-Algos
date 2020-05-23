//This is the method 2 of geeks for geeks
#include <iostream>

using namespace::std;

int fib(int n){
    int f[n+2];
    int i;

    f[0] = 0;
    f[i] = 1;
    for(i=2 ; i<n ; i++){
        f[i] = f[i-1] + f[i-2];
    }

    return f[n];
}

int main(){
    int n=20;
    cout << "fib(n)";
    return 0;
}