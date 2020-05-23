#include<iostream>
#define ll long long int

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        ll a,b,c,r, max, min, dif, out;
        cin >> a >> b >> c >> r;
        if(a<=b){
            max = b;
            min = a;
        } else {
            max = a;
            min = b;
        }
        dif = max-min;
        if(c>=min && c<=max){
            out = dif-(2*r);
            if(out>=0)
                cout << out << endl;
            else
                cout << "0" << endl;
            continue;
        } else if(c<min){
            if((c+r)<=min)
                cout << dif << endl;
            else if((c+r)>=max)
                cout << "0" << endl;
            else 
                cout << (dif-((c+r)-min)) << endl;
            continue; 
        } else {
            if((c-r)>=max)
                cout << dif << endl;
            else if((c-r)<=min)
                cout << "0" << endl;
            else 
                cout << (dif-(max-(c-r))) << endl;
        }
    }
}