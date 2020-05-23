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
const int N = 10e5, M = N;
//#define x first
//#define y second
//dp[];
vi g[N];


int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    long  t, pos =0, prev = 0, curr = 5, r=5, two = 1;
	cin >> t;
	
	while(prev+curr <t){
		two *=2;
		prev += curr;
		curr = r*(two);
		//cout << curr << endl;
	}
	
	pos = curr/5;
	//cout << pos << " " << prev << " " << curr <<  endl;
	if(prev + pos >= t)
		cout << "Sheldon" << endl;
	else if(prev + pos*2 >=t)
		cout <<  "Leonard" << endl;
	else if(prev + pos*3 >=t)
		cout << "Penny" << endl;
	else if(prev + pos*4 >=t)
		cout << "Rajesh" << endl;
	else if(prev + pos*5 >=t)
		cout << "Howard" << endl;
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
