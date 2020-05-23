//Breaking Bricks

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
		ll N, A, B, C, D, E, S, SUM=0;
		cin >> N >> A;
		SUM +=A;
		S=9;
		C = 1;
		for(ll i=0 ; i<N-1 ; i++){
			S = (S*10) + 9;
			C *= 10;
		}
			
		cout << S;
		cin >> B;
		SUM +=B;
		for()

	}
	return 0;
}
