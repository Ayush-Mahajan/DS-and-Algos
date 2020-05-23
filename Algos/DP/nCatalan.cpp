#include<iostream>

using namespace::std;

unsigned long int catalan[100] = {0};


unsigned long int catalanDP(unsigned int n){

    if(n<=1)
        return 1;
    else if(catalan[n]!=0)
        return catalan[n];
    else{
        unsigned long int res = 0;
        for(int i=0 ; i<n ; i++){
            res+= catalanDP(i)*catalanDP(n-i-1);
        }
        return catalan[n];
    }
}

int main(){
    catalan[0] = 1;
    catalan[1] = 1;

    for(int i=0 ; i<10 ; i++){
        cout << catalanDP(i) << " ";
    }
    cout << endl;
    return 0;
}