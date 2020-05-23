#include<iostream>
#include<vector>

using namespace::std;

int main(){
    int n, i, x, cnt=0, pos=-1;
    vector<int> v;
    cin >> n;
    for(i=0 ; i<n ; i++){
        cin >> x;
        v.push_back(x);
    }
    v.push_back(-1);
    v.push_back(-1);
    // cout << endl;
    for(i=0 ; i<n ; i++){
        // cout << i << " " << cnt << endl;
        if(v[i]==1){
            cnt++;
            pos = i;
            if(v[i+1]==0){
                if(v[i+2]==1){
                    cnt++;
                    i+=1;
                }
                else if(v[i+2]==0){
                    cnt++;
                    i+=2;
                }
            }
        }
    }
    if(pos>-1&&pos<n-2)
        cnt--;
    cout << cnt << endl;
    return 0;
}