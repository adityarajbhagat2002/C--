/*Greatest Common Divisor Euclid's GDC algorithm
the formula would be gcd(a,b) = gcd(a-b, b) or
                              =gcf(a % b,b) 
use this formula untill one of the parameters becomes zero

Relation of lcm and gcd is lcm(a*b) * gcd(a*b) = a*b


*/

#include<bits/stdc++.h>
using namespace std;

int gcd(int a , int b){
    if(a==0)return b;
    if(b==0)return a;

    while(a!=b){
        if(a>b)a=a-b;
        else b=b-a;
    }
    return a;


}


int main(){
    int a ,b;

    cout<< "Enter two numbers"<<endl;
    cin>> a>> b;
    int ans =gcd(a,b);

    cout<<"The GCD of " << a << " & " << b << " is : " << ans <<endl;

}

int main (){
    int n;
    
    cout<<"Enter a number"<<endl;
    cin>>n;
}