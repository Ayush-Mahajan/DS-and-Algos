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
		ll n, k, l=0, x=0;
		cin >> n >> k;
		if(n<(k/2))
			cout << "0" << endl;
		else if(n>=(k/2) && n<(k))
			cout << k/2 << endl;
		else if(n==k)
			cout << n << endl;
		else {
			x = n/k;
			l = n-(x*k);
			if(l<(k/2))
				cout << x*k << endl;
			else if(l>=(k/2))
				cout << (x*k)+(k/2) << endl;
		}
	}
	return 0;
}

// 1923376 +  76
