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
#define fo(i,x,n) for(i=x; i<n ; i++)
#define fo1(i,x,n) for(i=x; i<=n ; i++)
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
const int N = 10e6;
//#define x first
//#define y second


ll PrintTile(ll n){
	
	if(n<=2)
		return n;
	// if(dp[n]!=0)
	// 	return dp[n];
	ll i, z, x = 2, y = 1;
	fo1(i, 3, n){ 
		 z= (x+y)%mod;
		// dp[n] = (PrintTile(n-1) + PrintTile(n-2))%mod;
		y = x;
		x = z;
	}
	return z;
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    ll t;
	cin >> t;

	cout << PrintTile(t);
    return 0;
}



//void ipgraph(int n, int m){
	//int i, u, v;
	//while(m--){
		//cin>>u>>v;
		//g[u-1].pb(v-1);
		//g[v-1].pb(u-1);
	//}
//}
