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
    int t, i, j, x,m=0, sum=0;
	cin >> t;
	vector<long> a;
	while(t--){
		cin >> x;
		a.pb(x);
	}
	
	sort(a.begin(), a.end());
	
	for(i=0, j=a.size()-1; i<=j ;){
		if(sum!=0){
			if(sum+a[i]<4){
				sum+=a[i];
				i++;
			}
			else if(sum+a[i]==4){
				sum = 0;
				m++;
				i++;
				j--;
				//cout << i << " " << m << endl;
			} else if(sum+a[i]>4){
				
				sum = 0;
				m++;
				j--;
			}
		}
		else if(a[j]==4){
			m++;
			j--;
			//cout << "1" << endl;
		}
		else if(a[i]+a[j]==4){
			m++;
			i++;
			j--;
			//cout << 
		}
		else if(a[i]+a[j]>4){
			m++;
			j--;
		}
		else if(i==j){
			m++;
			j--;
		}else if(a[i]+a[j]<4){
			if(i+1==j){
				m++;
				i++;
				j--;
			}else {
			sum=a[i]+a[j];
			i++;
		}
		}
	}
	cout << m << endl;
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
