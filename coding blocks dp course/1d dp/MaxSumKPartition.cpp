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
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define RESET(a, b) memset(a, b, sizeof(a))

//#define x first

//#define y second
long long dp[2000000];


const int N = 2e6 + 100;

int a[N];

int main(){
	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cout.tie(NULL);
	long long T, K, X;
	cin >> T >> K;
	//vll a;
	for(long long i=0 ; i<T ; i++){
		cin >> X;
		a[i] = X;
	}
	
	
	int prev_best_sum = 0,
		prev_best_ind = -1e9,
		prev_sec_sum = 0;
		
	for(int i=0 ; i< (T+K-1)/K; i++){
		int cur_best_sum = prev_best_sum,
			cur_best_ind = prev_best_ind,
			cur_sec_sum = prev_sec_sum;
		for(int j = i * K; (j < (i+1)*K && j<T); j++){
			//int sum = prev_sec_sum + a[j];
			int sum = 0;
			if(j - prev_best_ind !=K){
				sum = prev_best_sum + a[j];
			}
			if (sum > cur_best_sum){
                    cur_sec_sum = cur_best_sum,
                    cur_best_sum = sum,
                    cur_best_ind = j;
			}
            else if (sum > cur_sec_sum)
                    cur_sec_sum = sum;
            
		}
		prev_best_sum = cur_best_sum,
		prev_best_ind = cur_best_ind,
		prev_sec_sum = cur_sec_sum;
	}
	cout << prev_best_sum << endl;
	
	return 0;
}
