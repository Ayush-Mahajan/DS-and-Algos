#include<iostream>
#include<vector>
#include<algorithm>

#define ll long long int
#define pb push_back

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		ll a, b, c, s1, s2, s3;
		cin >> a >> b >> c;
		s1 = a+b;
		s2 = b+c;
		s3 = c+a;
		if((s1>=c-1 && s2 >=a-1) && s3>=b-1)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
