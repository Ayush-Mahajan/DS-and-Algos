#include <iostream>
#include <vector>
#include <algorithm>

using namespace::std;

int main(){

    vector<int> v = {11, 2, 3, 14};

    cout << v[1] << v[3] << endl;

    sort(v.being(), v.end());

    bool present = binary_search(v.begin(), v.end(), 3);

    return 0;
}