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
ll dp[N] = {0}, a[N] = {0};
vi g[N];
//vi a;
map<long, long> m;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    ll t, i, x, maximum=0;
	cin >> t;
	//fill(a.begin(), a.end(), 0);
	
	fo(i,t){
		
		cin >> x;
		if(x>maximum)
			maximum=x;
		a[x]++;
	}
	dp[1] = a[1];
	dp[2] = a[2]*2;
	//cout << "max = " << maximum << endl;
	fo1(i, maximum+1){
		dp[i] = max(dp[i-1], dp[i-2]+(a[i]*i));
		//cout << i << endl;
		//cout << dp[i] << endl;
	}
	cout << dp[maximum];
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
