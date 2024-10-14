#include<iostream>
using namespace std;
int findMax(int arr[],int len){
    int firstMax=INT_MIN;
    int secondMax=firstMax;
    for(int i=0;i<len;i++){
        if(arr[i]>firstMax){
        	secondMax=firstMax;
            firstMax=arr[i];
        }
    }
    return secondMax;
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int secondMax=findMax(arr,n);
    cout<<"The second Max Element is"<<secondMax;
    return 0;
}
