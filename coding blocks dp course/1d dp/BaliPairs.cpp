#include<iostream>
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
#include<cstring>
#include<complex>
#include<tr1/unordered_set>
#include<tr1/unordered_map>
using namespace std;
using namespace tr1;

#define ld long double
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define valset(a, b) memset(a, b, sizeof(a))
#define clr(x) memset(x, 0, sizeof(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<char, int>	pci;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vll;
typedef vector<pii>		vpii;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vll>		vvll;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//#define x first
//#define y second
//dp[];



int main() {
    ios_base::sync_with_stdio(0);
    ll t, i, x, y,cntee = 0, cnteo=0, cntoo=0;
	cin >> t;
	vpll a;
	for(i=0 ; i<t ; i++){
		cin >> x >> y;
		a.pb(mp(x,y));
		if(x%2==0 && y%2==0) cntee++;
		if((x%2==1 && y%2==0)|| (x%2==0 && y%2==1))cnteo++;
		if(x%2==1 && y%2==1) cntoo++;
	}
	
	if(cnteo==0){
		if(cntoo%2==1){
			cout <<  mpow(2, t);
		} else {
			cout << 0;
		}
	} else if(cnteo!=0){
		cout <<  mpow(2, t-1);
	}
    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}



//void ipgraph(int n, int m){
	//int i, u, v;
	//while(m--){
		//cin>>u>>v;
		//g[u-1].pb(v-1);
		//g[v-1].pb(u-1);
	//}
//}
