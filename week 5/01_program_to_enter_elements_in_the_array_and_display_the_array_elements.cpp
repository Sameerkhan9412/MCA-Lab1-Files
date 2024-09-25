#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" Element:";
        cin>>arr[i-1];
    }
    cout<<"Printing array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    return 0;
}
