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

vector<long> a;

long long dp[1000010] = {0};
long long SUPW(vector<long> &v, long n){
	dp[0] = v[0];
	dp[1] = v[1];
	dp[2] = v[2];
	long cnt1 = 0;
	for(long i=3 ; i<=n ; i++){
			dp[i] = min({dp[i-2], dp[i-1], dp[i-3]}) + v[i];
		cnt1++;
	}
	cout << "cnt1 = " << cnt1 << endl;
	return dp[n-1];
}

int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    long t, x, i, l , m=0;
	cin >> t;
	
	for(i=0 ; i<t ; i++){
		cin >> x;
		a.pb(x);
	}
	cout << "starting..." << endl;
	long cnt = 0;
	long long d = SUPW(a,t);
	cout << d << endl;
	for(l=0 ; l<t-2; ){
		if(a[l]< a[l+1] && a[l]< a[l+2]){
			m+=a[l];
			++l;
			cnt+=2;
		}else if(a[l+1]<= a[l] && a[l+1]< a[l+2]){
			m+=a[l+1];
			l+=2;
			cnt +=4;
		}else if(a[l+2]<=a[l] && a[l+2]<=a[l+1]){
			m+=a[l+2];
			l+=3;
			cnt+=6;
		}
	}
	cout << m << " " << cnt << "|" << d <<endl;
	//cout << d;
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
