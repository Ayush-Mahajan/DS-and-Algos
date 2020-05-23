#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int N;
		cin >> N;
		int a[N];
		for(int i=0 ; i<N ; i++){
			cin >> a[i];
			
		}
		vector<int> l;
		int cnt = 1, x;
		for(int i=0 ; i<N-1 ; i++){
			x = a[i+1]-a[i];
			if(x<3){
				cnt ++;
			} else {
				l.push_back(cnt);
				cnt = 1;
			}
		}
		l.push_back(cnt);
		sort(l.begin(), l.end());
		auto it = l.begin();
		auto it2 = l.end();
		//for(; it!=l.end(); it++){
			//cout << *it << " ";
		//}
		cout << *it << " " << *(--it2) << endl;
	}
}
