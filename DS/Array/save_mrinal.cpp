// Mrinal is a coder from BVCOE. He always takes his laptop with him wherever he goes. One day (while on a trek trip )
// a monster challenged him to solve one easy task else he was going to kill him.the task is as follows- Given a series of
// n numbers a1, a2, ..., an and a number of magic-queries. A magic-query is a pair (i, j) (1 ≤ i ≤ j ≤ n). For each magic-query
// (i, j), you have to return the number of distinct elements in the subsequence ai, ai+1, ..., aj.

// Input

// Line 1: n (1 ≤ n ≤ 30000). Line 2: n numbers a1, a2, ..., an (1 ≤ ai ≤ 10^6). Line 3: q (1 ≤ q ≤ 200000), the number of 
// magic-queries. In the next q lines, each line contains 2 numbers i, j representing a magic-query (1 ≤ i ≤ j ≤ n).

// Output

// For each magic-query (i, j), print the number of distinct elements in the subsequence ai, ai+1, ..., aj in a single line. 
// Example

// using set containter from stl

#include<iostream>
#include<set>
using namespace::std;
    
int main(){
    unsigned int T, i, j, k, m, n, cnt=0, z;
    cin >> T;
    unsigned int a[T];
    for(i=0; i<T; i++){
        cin >> a[i];
    }
    cin >> T;
    for(k=0 ; k<T ; k++){
        cin >> m >> n;
        set<int> s;
        for(i=m-1 ; i<n ; i++)
        {
            s.insert(a[i]);
        }
        cout << s.size() << endl;
    }
}