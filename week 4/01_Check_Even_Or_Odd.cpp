#include<iostream>
using namespace std;
//Write a C++ program to check whether a number is even or odd using ternary operator.
int main(){
    int num;
    cout<<"Enter number to check even or odd:";
    cin>>num;
    num%2==0?cout<<"Number is Even":cout<<"Number is Odd";
    return 0;
}