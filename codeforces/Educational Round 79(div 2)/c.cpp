#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long int
#define pb push_back

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		ll n, m, i, x,sum=0;
		vector<ll> v, v1;
		cin >> n >> m;
		for(i=0 ; i<n ; i++){
			cin >> x;
			v.pb(x);
		}
		for(i=0 ; i<m ; i++){
			cin >> x;
			v1.pb(x);
		}
		auto it = v.begin();
		auto max = v.begin();
		for(i=0 ; i<v1.size() ; i++){
			it = find(v.begin(), v.end(), v1[i]);
			if(it>max)
				max = it;
			if(it == v.begin()){
				sum+=1;
				v.erase(v.begin());
				continue;
			}
			else if(it<max){
				sum+=1;
				v.erase(it);
				continue;
			}
			else{
				x = distance(v.begin(), it);
				sum += (2*x) + 1;
			}
		}
		
		cout << sum << endl;
	}
	return 0;
}
