#include<iostream>
using namespace std;
int SumOfArrayElement(int arr[],int size){
    int *ptr=arr;
    int i=0;
    int sum=0;
    while(i<size){
       sum=sum+(*ptr);
        ptr++;
        i++;
    }
    return sum;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=SumOfArrayElement(arr,10);
    cout<<sum;
    return 0;
}
