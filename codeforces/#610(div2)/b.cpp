#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
#define pb push_back

using namespace std;

int main(){
    ll t;
    cin >> t;
    while(t--){
        ll n, p, x, sum=0, cnt=0;
        vector<int> v;
        cin >> n >> p;
        while(n--){
            cin >> x;
            sum+=x;
            v.pb(x);
        }
        if(p>=sum){
            cout << v.size() << endl;
            continue;
        }
        
        ll j = v.size()-1;
        sort(v.begin(), v.end());
        if(p<v[0]){
            cout << "0" << endl;
            continue;
        }
        if(v.size()<=2 && p>=v[j]){
            cout << v.size() << endl;
            continue;
        }
        while(p>0){
            if(p>v[j]){
                if(v.size()>=2){
                    p = p-v[0];
                    cnt++;
                    v.erase(v.begin());
                } else {
                    cout << v.size() << endl;
                    continue;
                }
            } else if(p >= v[0] && v.size()>2){

            }
        }
    }
}