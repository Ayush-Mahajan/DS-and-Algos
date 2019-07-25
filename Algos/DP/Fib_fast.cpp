#include <iostream>
#include <map>

using namespace::std;

#define long long long
const long M = 1000000007;
map<long, long> F;

long f(long n){
    if(F.count(n)) return F[n];

    long k = n/2;
    if(n%2==0) {
        return F[n] = (f(k)*f(k)+ f(k-1)*f(k-1))%M;
    }
    else{
        return F[n] = (f(k)*f(k+1) + f(k-1)*f(k))%M;
    }
}

int main(){

}