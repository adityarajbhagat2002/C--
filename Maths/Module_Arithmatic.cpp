// /* formulas for module
// (a+b)%m  =a % m + b %m
// a % m -  b % m  = (a-b) %m
// a % m *  b % m  = (a*b) %m

// Fast Exponentation
// */

// #include <bits/stdc++.h>

// int modularExponentiation(int x, int n, int m) {
// 	int res=1;

// 	while(n>0){
// 		if(n&1){
// 			res = (1LL*(res) *(x)%m)%m;
// 		}

// 		x=(1LL*(x)%m * (x)%m)%m;
// 		n=n>>1;
// 	}
// 	return res;
// }

#include<bits/stdc++.h>
using namespace std;


int main(){
    int arr[10]={2,3,4,5};
    char ch[10]="abcde";


    int *ptr = &arr[0];
    cout<<ptr<<endl;
cout<<"--------------------------"<<endl;

    char *c = &ch[0];
    cout<<*c<<endl;
    return 0;

}






