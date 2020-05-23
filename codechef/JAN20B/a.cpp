//Breaking Bricks

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
#include<iostream>
#include<cstring>
#include<complex>
#include<tr1/unordered_set>
#include<tr1/unordered_map>
using namespace std;
using namespace tr1;

#define ld long double
#define ll long long
#define pii  pair<int, int>
#define vi vector<int >
#define pb push_back
#define mp make_pair
#define RESET(a, b) memset(a, b, sizeof(a))

//#define x first
//#define y second
//dp[];


int main(){
	unsigned int T;
	cin >> T;
	while(T--){
		int s, w1, w2, w3, sum1, sum2, mi, ma,sum=0;
		cin >> s >> w1 >> w2 >> w3;
		sum = w1+w2+w3;
		if(s>=sum){
			cout << "1" << endl;
			continue;
		}
		mi = min({w1,w2,w3});
		if(s==mi){
			cout << "3" << endl;
			continue;
		}
		ma = max({w1,w2,w3});
		//if(s==ma){
			//cout << "2" << endl;
			//continue;
		//}
		
		sum1 = w1+w2;
		sum2 = w2+w3;
		
		if(sum1>s){
			//cout << "entering 1" << endl;
			if(s<sum2)
				cout << "3" << endl;
			else
				cout << "2" << endl;
				
			continue;
		}
		if(sum2>s){
			//cout << "entering 2" << endl;
			if(s<sum1)
				cout << "3" << endl;
			else
				cout << "2" << endl;
				
			continue;
		}
		if(sum1<=s || sum2<=s)
			cout << "2" << endl;
		
	}
	return 0;
}
