#include<cstdio>
#include<set>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<time.h>
#include<string>
#include<stack>
#include<cmath>
#include<iostream>
#include<complex>
using namespace std;

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

int main(){
	unsigned int T;
	cin >> T;
	int dp[T+1] = {0};
	vl v, v1, v2;
	set<ll> s;
	int x;
	for(ll i=0 ; i<T; i++){
		cin >> x;
		//cout << i << " ";
		if(x!=0){
			dp[x] = 1;
			v2.pb(i+1);
		}
		v.pb(x);
	}
	for(ll i=1 ; i<=T ; i++){
		if(dp[i]==0)
			s.insert(i);
	} 
	//for(auto it=s.begin(); it!=s.end(); it++){
		//cout << *it << " ";
	//}
    //cout << endl; 
	v1.assign(s.begin(), s.end()); 
    //cout << v[0] << endl;
	ll len = v1.size();
	if(len%2==0){
		for(ll i=0, j=0 ; i< T ; i++){
			if(v[i]==0){
				if(j%2==0)
					cout << v1[j+1] << " ";
				else 
					cout << v1[j-1] << " ";
				j++;
			} else 
				cout << v[i] << " ";
		}
	} else {
		for(ll i=0, j=0 ; i< T ; i++){
			if(v[i]==0){
				if(j==len-1)
					cout << v1[0] << " ";
				else
					cout << v1[j+1] << " ";
				j++;
			} else
				cout << v[i] << " ";
		} 
	}
	cout << endl;
	v.clear();
	v1.clear();
	s.clear();
	return 0;
}
