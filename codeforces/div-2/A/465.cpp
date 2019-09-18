//A. inc ARG. Sergey is testing a next-generation processor. Instead of bytes the processor works
#include<iostream>
#include<string>

using namespace::std;

int main(){
    int n, i, y, cnt=0;
    unsigned long long x;
    string s;
    cin >> n;
    cin >> s;
    for(i=0 ; i<n ; i++){
        if(s[i]=='0'){
            cnt++;
            break;
        }
        else{
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}