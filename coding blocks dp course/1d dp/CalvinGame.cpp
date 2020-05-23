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
typedef vector<pll>		vpl;
typedef vector<vi>		vvi;
typedef vector<vll>		vvll;
int mpow(int base, int exp); 
void ipgraph(int m);
void dfs(int u, int par);
const int mod = 1000000007;
const int N = 3e5, M = N;
//#define x first
//#define y second
vll a;
ll dpf[N] = {0}, dpb[N] = {0};	

//fwd(int k, int i){
		//if(i,=k){
			//return 0;
		//}
		
		//dp[i] = a[i]+ max(fwd(i-1), fwd(i-2));
		//return dp[i];
//}


int main() {
    ios_base::sync_with_stdio(0);
	cin.tie(NULL);
    long t, i, k, x;
	cin >> t >> k;
	k--;
	for(i=0 ; i<t ; i++){
		cin >> x;
		a.pb(x);
	}
	
	for(i=k+1 ; i<t ; ++i){
		//cout << " i-1 = " << dpf[i-1] << " i-2 = " << dpf[i-2] << endl;
		dpf[i] = a[i]+ max(dpf[i-1],dpf[i-2]);
		//cout << " dpf[i] = "<< dpf[i] << endl;
	}
		
	dpb[0] = a[0];
	dpb[1] = a[1] + a[0];
	//cout << "backwards" << endl;
	for(i=2 ; i<t; ++i){
		//cout << " i-1 = " << dpb[i-1] << " i-2 = " << dpb[i-2] << endl;
		dpb[i] = a[i] + max(dpb[i-1], dpb[i-2]);
		//cout << " dpf[i] = "<< dpb[i] << endl;
	}
	ll ans = -1e9;
	for(i=k ; i<t ; ++i){
		ans = max(ans, (dpf[i]+dpb[i]-a[i]));
		//cout << "i = " << i << " ans = " << ans  << endl;
	}
	cout << ans << endl;
	
	 
	//for(i=k ; i<t-1 ;){
		////cout<<"i = "  << i << endl;
		//if(a[i+1]<0){
			//if(a[i+2]<0){
				//break;
			//}
			//if(i+2<t){
				//sum += a[i+2];
				////cout << sum <<  " " << a[i+2] <<  endl;
				//i+=2;
			//}
		//} else {
			//sum+=a[i+1];
			////cout << sum << " " << a[i+1] << endl;
			//i++;
		//}
	//}
	//if(i==t) i--;
	//for( ; i>0 ;){
		////cout <<"i = " << i << endl;
		//if(a[i-1]<0){
			//if(a[i-2]<0){
				//break;
			//}
			//if(i-2>0){
				//sum += a[i-2];
				////cout << sum <<  " " << a[i-2] << endl;
				//i-=2;
			//}
		//} else {
			//sum+=a[i-1];
			////cout << sum << " " << a[i-1] <<  endl;
			//i--;
		//}
	//}	
	//cout << sum << endl;
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
