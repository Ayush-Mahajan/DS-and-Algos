#include<cstdio>
#include<set>
#include<vector>
#include<algorithm>
#include<queue>
#include<map>
#include<cstdlib>
#include<time.h>
#include<string>
#include<stack>
#include<cmath>
#include<iostream>
#include<cstring>
#include<complex>
#include<tr1/unordered_set>
#include<tr1/unordered_map>
using namespace std;
using namespace tr1;

#define ld long double
#define ll long long
#define pii  pair<int, int>
#define vi vector<int >
#define vl vector<ll >
#define pb push_back
#define mp make_pair
#define RESET(a, b) memset(a, b, sizeof(a))

//#define x first
//#define y second
//dp[];

int main(){
	unsigned int T;
	cin >> T;
	while(T--){
		ll a, b, cnt=0;
		vl v;
		cin >> a >> b;
		if(b%a==0){
			cout << "0" << endl;
			continue; 
		}
		//cout << "hello" << endl;
		for(ll i=2 ; i<(b/a) ; i++){
			if(b == (i*a)+1){
				//cout << "1" << endl;
				cnt++;
				v.pb(i);
				break;
			}
			if(b == (i*(a+1))){
				//cout << "1" << endl;
				cnt++;
				v.pb(i);
				break;
			}
			//ll i2 = sqrt(i);
			int f=0;
			//cout << i << endl;
			for(ll j=2 ; j<=i/2 ; j++){
				if(i%j==0){
					//cout << i << " " << j << endl;
					if(b == (i*a)+j){
						//cout << "1" << endl;
						cnt++;
						v.pb(i);
						f=1;
						break;
					}
				}
			}
			if(f==1)
				break;
		}
		if(cnt > 0){
			//cout << "inside" << endl;
			cout << cnt << endl;
			for (auto i = v.begin(); i != v.end(); ++i) 
				cout << *i << " "; 
			cout << endl;
			//cout << "going out" << endl;
		}
	}
	return 0;
}
