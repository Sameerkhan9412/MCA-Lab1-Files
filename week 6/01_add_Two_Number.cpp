#include<iostream>
using namespace std;
void sum(int &a,int &b){
    cout<<"The sum of two number is"<<(a+b);
}
int main(){
    int num1,num2;
    cout<<"Enter first number:"<<endl;
    cin>>num1;
    cout<<"Enter second number:"<<endl;
    cin>>num2;
    sum(num1,num2);
    return 0;
}
