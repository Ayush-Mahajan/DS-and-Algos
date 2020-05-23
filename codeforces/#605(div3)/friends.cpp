#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>

#define ll long long int
#define pb push_back


using namespace::std;

int main(){
    long long q, x;
    cin >> q;
    while(q--){
        vector<int> v;
        int sum;
        for(int i=0 ; i<3 ; i++){
            cin >> x;
            v.push_back(x);
        }
        int n=3;
        sort(v.begin(), v.end());
        if(v[0]==v[1] && v[0]==v[2]){
            cout << "0" << endl;
            continue;
        }
        if(v[0]==v[1] || v[1]==v[2]){
            if(v[0]+1>=v[2]){
                cout << "0" << endl;
                continue;
            }
            v[0]++;
            v[2]--;
            sum = 2*abs(v[0]-v[2]);
            cout << sum << endl;
            continue;
        }

        v[0]++;
        v[2]--;
        // cout << v[0] << " " << v[2] << endl;
        sum = abs(v[0]-v[1]) + abs(v[1]-v[2]) + abs(v[2]-v[0]);
        cout << sum << endl;
    }
    return 0;
}