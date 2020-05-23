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
using namespace std;

#define ld long double
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define valset(a, b) memset(a, b, sizeof(a))
#define fo(i,n) for(i=0; i<n ; i++)
#define Fo(i,x,n) for(i=x; i<=n ; i++)
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
const int N = 10e6, M = N;
//#define x first
//#define y second
ll dp[N]={0};
vi g[N];

//bool comp(pair<ll,int> a, pair<ll,int> b){
	//if( a.second > b.second)
		//return false;
	//else
		//return true;
//}
int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    ll  t, x, q, m =1000, i=0, j=0;
    vll a;
    set<ll> s;
	cin >> t;
	fo(i,t){
		cin >> x;
		a.pb(x);
	}
	sort(a.begin(),a.end());
	
	cin >> q;
	while(q--){
		cin >> x;
		
		cout << distance(a.begin(), upper_bound(a.begin(), a.end(),x)) << endl;
		//if(x>=m)
			//cout << t << endl;
		//else
			//cout << dp[x] << endl;
	}
	
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
