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
		int N;
		cin >> N;
		vi a,b;
		for(int i=0 ; i<N ; i++){
			int x;
			cin >> x;
			a.pb(x);
			
		}
		for(int i=0 ; i<N ; i++){
			int x;
			cin >> x;
			b.pb(x);
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for(int i=0 ; i<N ; i++){
			cout << a[i]<< " ";
		}
		cout << endl;
		for(int i=0 ; i<N ; i++){
			cout << b[i]<< " ";
		}
		cout << endl;
	}
	return 0;
}
