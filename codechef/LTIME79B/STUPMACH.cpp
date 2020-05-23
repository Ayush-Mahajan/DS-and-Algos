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
	//cout << "Enter T - ";
	cin >> T;
	while(T--){
		vl v, v1;
		ll i, x, N, pos=-1, level=0, sum=0, min=1000000009;
		//cout << "Enter N - ";
		cin >> N;
		//cout << "Enter String - ";
		for(i=0 ; i<N ; i++){
			cin >> x;
			if(x < min){
				min = x;
				pos = i;
			}
			v.pb(x);
			v1.pb(x);
		}
		//cout << endl << "done" << endl;
		sum+= (min*N);
		level += min;
		//cout << " adding " << min*N << endl;
		v.resize(pos);
		//v.shrink_to_fit();
		N=pos;
		for(i=0; v.size()>0 ; i++){
			auto it = min_element(v.begin(), v.end());
			pos = distance(v.begin(), it);
			min = v.at(pos);
			sum+= ((min-level)*N);
			level = min;
			//cout << " adding " << min*N << endl;
			v.resize(pos);
			//v.shrink_to_fit();
			N=pos;
			//cout << v.size() << endl;
		}
		cout << sum << endl;
	}
	return 0;
}
