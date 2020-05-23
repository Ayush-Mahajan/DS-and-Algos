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
#define fo(i,n) for(i=0; i<n ; i++)
#define fo1(i,n) for(i=1; i<=n ; i++)
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
const int N = 10e5+7, M = N;
//#define x first
//#define y second
long long dp[N];

long long cellMitosis(long d, long inc, long dec, long i){
	if(i<=1){
		return 0;
	}
	if(dp[i]!=-1){
		return dp[i];
	}
	long long x, y;
	if(i%2==0){
		x = (cellMitosis(d, inc, dec, i/2) + d);
		y = (cellMitosis(d, inc, dec, i-1) + inc);
		//cout << i << " " << x << " " << y << endl;
		return dp[i] = min(x, y);
	} else {
		x = (cellMitosis(d, inc, dec, i-1) + inc);
		y = (cellMitosis(d, inc, dec, (i+1)/2) + d+ dec);
		//cout  << i << " "  << x << " " << y << endl;
		return dp[i] = min(x,y);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	valset(dp, -1);
    long long t,  p, q, r;
	cin >> t;
	cin >> p >> q >> r;
	cout << cellMitosis(p,q,r,t) << endl;
	//cout << dp[1] << " " << dp[2] << " " << dp[3] << " " << dp[5] << " " << endl;
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
