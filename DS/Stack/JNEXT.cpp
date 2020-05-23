#include<iostream>

using namespace::std;

int main()
{
    int T, i;
    cin >> T;
    for(i=0 ; i<T ; i++){
        int n, k;
        cin >> n;
        int s[n], a[n], h1=0, h2=0, j=0, min=10, pos=0;
        for(j=0 ; j<n ; j++){
            cin >> s[j];
            h1++;
        }
        for(j=n-2 ; j>0 ; j++){
            if(s[j]>s[j+1]){
                a[h2]==s[j+1];
                h1--;
                h2++;
            }
            else
            {
                a[h2]==s[j+1];
                h1--;
                h2++;
                a[h2]==s[j];
                h1--;
                h2++;
            }
        }
        for(j=0 ; j<=h2 ; j++){
            for(k=0 ; k<h2; k++){
                if(a[j]<min){
                    min = a[j];
                    pos = j;
                } 
            }
            a[j] = 11;
            s[h1] = min; 
            h1++;   
        }
        
    }
    return 0;
}