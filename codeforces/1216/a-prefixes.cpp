#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace::std;

int main(){
    int n, i, cnta = 0 , cntb = 0;
    char c;
    string s;
    vector <int> a, b;
    cin >> n;
    getline(cin, s);
    for(i=0 ; i<n ; i++){
        if(s[i] == 'a'){
            cnta++;
            a.push_back(i);
        }
        if(s[i] == 'b'){
            cntb++;
            b.push_back(i);
        }
    }
}