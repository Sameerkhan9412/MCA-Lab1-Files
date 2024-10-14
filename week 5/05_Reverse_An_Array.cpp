#include<iostream>
using namespace std;
void reverseAnArray(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[],int n){
    int i=0;
    while(i<n){
        cout<<arr[i]<<" ";
        i++;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter size of array";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter "<<i<<" Element:";
        cin>>arr[i-1];
    }
    cout<<"Array Before Reverse:";
    printArray(arr,n);
    reverseAnArray(arr,n);
    cout<<"Array After Reverse:";
    printArray(arr,n);	
    return 0;
}
