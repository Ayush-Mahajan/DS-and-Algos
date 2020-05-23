#include<iostream>

using namespace::std;

int main(){
    int T;
    cin >> T;
    while(T--){
        long long n,c;
        cin >> n >> c;
        long long a[n], i, tot=0;
        for(i=0 ; i<n ; i++){
            cin >> a[i];
            tot+=a[i];
        }
        if(tot<=c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
    return 0;
}
