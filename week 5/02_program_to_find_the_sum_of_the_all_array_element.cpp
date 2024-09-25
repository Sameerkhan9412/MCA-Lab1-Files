#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" Element:";
        cin>>arr[i-1];
    }
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<"Printing array element sum:"<<sum<<endl;
    return 0;
}
