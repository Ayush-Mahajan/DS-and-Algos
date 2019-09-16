#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace::std;

void vectorDemo(){
    vector<int> v = {11, 2, 3, 14};

    cout << v[1] << v[3] << endl;

    sort(v.begin(), v.end());

    bool present = binary_search(v.begin(), v.end(), 3);

    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(100);
    v.push_back(123);

    //2,3,11,14, 100, 100, 100, 100, 123

    vector<int>::iterator it = lower_bound(v.begin(), v.end(), 100); //>= anser 1st 100
    vector<int>::iterator it2 = upper_bound(v.begin(), v.end(), 100); // > ans 123
}

void setDemo(){
    set<int> s;

}

int main(){

    

    return 0;
}