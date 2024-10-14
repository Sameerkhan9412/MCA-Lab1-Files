#include<iostream>
using namespace std;
void increment(int &n,int inc){
    int i=0;
    while(i<inc){
        n++;
        i++;
    }
}
void decrement(int &n,int dec){
    int i=0;
    while(i<dec){
        n--;
        i++;
    }
}
int main(){
    int num,inc=0,dec=0;
    cout<<"Enter Number:";
    cin>>num;
    cout<<"How much increment and decrement";
    cin>>inc>>dec;
    increment(num,inc);
    cout<<"After increment:"<<num;
    decrement(num,dec);
    cout<<"After decrement:"<<num;
    return 0;
}
