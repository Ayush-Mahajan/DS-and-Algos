// Students have become secret admirers of SEGP. They find the course exciting and the professors amusing. After a superb 
// Mid Semester examination its now time for the results. The TAs have released the marks of students in the form of an array, 
// where arr[i] represents the marks of the ith student.

// Since you are a curious kid, you want to find all the marks that are not smaller than those on its right side in the array.

// Input Format
// The first line of input will contain a single integer n denoting the number of students.
// The next line will contain n space separated integers representing the marks of students.

// Output Format
// Output all the integers separated in the array from left to right that are not smaller than those on its right side.

// Constraints
// 1 <= n <= 1000000
// 0 <= arr[i] <= 10000


#include <iostream>
#include <vector>
 
using namespace::std;
 
int main(){
    int T, i, max=0;
    vector<int> v;
    cin >> T;
    int a[T];
    for(i=0 ; i<T ; i++){
        cin >> a[i];
    }
    for(i=T-1 ; i>=0 ; i--){
        if(a[i]>=max){
            max = a[i];
            v.push_back(a[i]);
        }
    }
    
    for(i=v.size()-1; i>=0 ; i--){
        cout << v[i] << " ";
    }
}