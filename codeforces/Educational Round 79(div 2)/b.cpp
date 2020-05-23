#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long int
#define pb push_back

using namespace std;

int main(){
	int T;
	//cout << "b.cpp" << endl;
	cin >> T;
	while(T--){
		ll n, s, i, x,sum=0, max=0, pos=-1;
		vector<ll> v, v1;
		cin >> n >> s;
		for(i=0 ; i<n ; i++){
			cin >> x;
			v.pb(x);
			sum+=x;
			v1.pb(sum);
		}
		if(s>=sum){
			cout << "0" << endl;
			continue;
		}
		if(s<v[0] && n==1){
			cout << "0" << endl;
			continue;
		}
		for(i=0 ; i<n ;i++){
			if(v[i]>max){
				if(v1[i]-v[i] <=s){
					max = v[i];
					if(max==0)
						pos = 0;
					else
						pos = i+1;
				}
			}
		}
		cout << pos << endl;
	}
	return 0;
}
