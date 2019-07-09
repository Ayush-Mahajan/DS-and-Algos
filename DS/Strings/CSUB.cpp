#include <iostream>
#include <cstdio>

using namespace::std;

int main(){

    long long T, N, i, j, k;
    cin >> T;
    for(i=0 ; i<T ; i++)
    {
        cin >> N;
        char a[N];
        long long cnt=0;
        cin >> a;

        for(j=0; j<N ; j++)
        {
            if(a[j]=='1')
            {
                cnt++;
            }   
        }
        cnt = (cnt*(cnt+1))/2;
        cout << cnt << endl; 
    }
    return 0;
}