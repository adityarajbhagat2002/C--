#include <bits/stdc++.h>

using namespace std;


class  aditya{
    public :
    int a;
    int b ;

    int add(int a  ,int b ,int c);

    aditya(int a ,int b, int c);

};

aditya :: aditya(int a, int b, int c){
    this->a=a;
    this->b=b;
}



int aditya :: add(int a ,int b,int c){
        return a+b+c;
}

int main(){
    aditya *obj1 =(aditya*)malloc(sizeof(aditya));
    obj1->a =5;
    obj1->b=10;
    cout<<obj1->add()<<endl;
    return 0;
}


