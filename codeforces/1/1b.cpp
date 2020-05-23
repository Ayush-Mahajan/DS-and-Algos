#include<iostream>
#include<string>
using namespace::std;

// string data;

// void toExcel(string s){
// 	for(int i=1 ; s[i]!='C';i++){

// 	}
// }

// void toNumeric(string s){
	
// }

// int main(){
//     int n, flag = 0;
// 	cin >> n;
// 	for(int k=1;k<=n;k++){
// 		cin >> data; 
// 		for(int i = 0; i<data.length() - 1; i++)
// 			if(data[i] >= '0' && data[i] <= '9' && data[i+1] >= 'A' && data[i+1] <= 'Z'){
// 				flag = 1;
// 			}
// 		if(flag == 1){
// 			toExcel(data);
// 		} else {
// 			toNumeric(data);
// 		} 
// 	}
	
//     return 0;
// }


// #include<cstdio>
// void g(int t){
// 	if(t){
// 		g((t-1)/26);
// 		putchar(65+(t-1)%26);
// 		}
// }
// int main(){
// 	int n,x,y;char s[64],*p;
// 	for(scanf("%d ",&n);n--;){
// 		gets(s);
// 		if(sscanf(s,"%*c%d%*c%d",&x,&y)==2){
// 			g(y);printf("%d\n",x);
// 		}
// 		else{
// 			for(x=0,p=s;*p>64;++p){
// 				x=x*26+*p-64;
// 			}
// 			printf("R%sC%d\n",p,x);
// 		}
// 	}
// 	return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
int n;
int r = 0, c = 0;
string data,ans;
 
void toExcel(){
	int i; 
	r=0;
	c=0;
	for(i = 1; data[i] != 'C'; i++){
		r = r * 10 + data[i] - '0';
	}
	for(i++; data[i] != '\0'; i++)
		c = c * 10 + data[i] - '0'; 
	i=0;
	while(c > 0){
		if(c % 26 == 0){//坑点， 当c%26==0的时候要向高位减去1 
			ans[i] = 'Z';
			c = c / 26 -1;
		}
			
		else{ 
			ans[i] = 'A' + c % 26 -1; 
			c /= 26;
		} 
		i++;
	}
	for(i--; i>=0;i--)
		cout << ans[i];
	cout << r << endl;
	return ; 
} 
 
void toRXCY(){
	int i;
	r=0;
	c=0;
	for(i = 0; data[i] >= 'A' and data[i] <= 'Z'; i++)
		c = c * 26 + (data[i] - 'A' + 1); 
	for(i; data[i] >= '0' and data[i] <= '9'; i++)
		r = r * 10 + data[i] - '0';
	cout << 'R' << r << 'C' << c << endl;
	return ;
	
}
int main(){
	cin >> n;
	for(int k=1;k<=n;k++){
	cin >> data; 
	int flag = 0;
	for(int i = 0; i<data.length() - 1; i++)
		if(data[i] >= '0' and data[i] <= '9' and data[i+1] >= 'A' and data[i+1] <= 'Z')
			flag = 1;
	if(flag)
		toExcel();
	else
		toRXCY(); 
	}
    return 0;
}