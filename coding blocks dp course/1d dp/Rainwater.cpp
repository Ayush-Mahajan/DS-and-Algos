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
#define all(x) x.begin(), x.end()
#define valset(a, b) memset(a, b, sizeof(a))
#define clr(x) memset(x, 0, sizeof(x))
#define fo(i,n) for(i=0; i<n ; i++)
#define fo1(i,n) for(i=1; i<=n ; i++)
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
const int N = 3e6, M = N;
//#define x first
//#define y second
ll dpr[N]={0}, dpl[N]={0};

vll a;

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    ll t, i, x;
	cin >> t;
	a.pb(-10);
	fo1(i,t){
		cin >> x;
		a.pb(x);
		dpl[i] = max(dpl[i-1], a[i]);
	}
	for(i=t ; i>0 ; i--){
		dpr[i] = max(dpr[i+1], a[i]);
		//cout << "dpr["<<i <<"] = " << dpr[i]<< endl; 
	}
	ll sum = 0;
	fo1(i,t){
		sum+=min(dpl[i], dpr[i])-a[i];
			//sum+=x;
		//cout << x << endl;
	}
	//cout << "sum ";
	cout << sum << endl;
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
