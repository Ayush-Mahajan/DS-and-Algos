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
		string s, s1;
		int sum=1, f=0;
		cin >> s;
		if(s.size()==1){
			cout << "NO" << endl;
				continue;
		}
		unsigned int len = s.size();
		s1.pb(s[0]);
		for(unsigned int i=1 ; i<len ; i++){
			if(s[i-1]==s[i])
				sum++;
			else {
				string st = to_string(sum);
				s1.append(st);
				s1.pb(s[i]);
				sum = 1;
				
				//if(s1.size()+(len-i)>len){
					//cout << "NO" << endl;
				f=1;
					//break;
				//}
			}
		}
		//cout << f << endl;
		if(f==0 && sum<=2){
			cout << "NO" << endl;
			continue;
		}else if(f==0 && sum>2){
			cout << "YES" << endl;
			continue;
		}
		if(f==1){
			
			string st = to_string(sum);
			s1.append(st);	
			//cout << s1 << " " << s1.size() << endl;
			if(s1.size()>=len){
				cout << "NO" << endl;
			}else {
				if(sum<=2 && s1.size()<1)
					cout << "NO" << endl;
				else
					cout << "YES" << endl;
			}
		}
	}
	return 0;
}

/*
9
bbbbbbbbbbaa
c
aaaaaaaaaabcdefgh
aa
aba
aaaabccdd
abcdeee
abcdeeeeeee
aabb
*/

//cout << sum << " " s.size() << endl;
		//if(s[len-1]!=s[len-2])
		//{
			//s1.pb(s[len-1]);
			//s1.pb('1');
		//}else {
			//s1.pb(s[len-1]);
			//string st = to_string(sum);
			//s1.append(st);
		//}
		//cout << s1 << endl;
		//cout << s1.size() << " " << len << endl;
