#include<iostream>
#include<set>

using namespace::std;

int main(){
    int n, a, b, i, f=0;
    set<int>x;
    cin >> n;
    cin >> a;
    for(i=0 ; i<a ; i++){
        cin >> b;
        x.insert(b);
    }
    cin >> a;
    for(i=0 ; i<a ; i++){
        cin >> b;
        x.insert(b);
    }
    for(i=1 ; i<=n ; i++){
        if(x.find(i)==x.end()){
            f=1;
            break;
        }
    }
    if(f==0){
        cout << "I become the guy." << endl;
    }
    else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}