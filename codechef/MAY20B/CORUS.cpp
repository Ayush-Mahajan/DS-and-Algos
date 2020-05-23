#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
	long T;
	cin >> T;
	while(T--){
		long N, Q;
		cin >> N >> Q;
		char ch[N];
		map<char, int> m;
		for(int i=0 ; i<N ; i++){
			cin >> ch[i];
			m[ch[i]]++;
		}
		long long C, sum = 0;
		while(Q--){
			cin >> C;
			for(auto it=m.begin(); it!=m.end(); it++){
				long long x = it->second;
				if(C< x){
					sum += x-C;
				}
			}
			cout << sum << endl;
			sum = 0;
		}
	}
	return 0;
}
