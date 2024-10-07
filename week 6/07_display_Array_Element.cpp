#include<iostream>
using namespace std;
void printArrayElement(int arr[],int size){
    int ptr=arr[0];
    int i=0;
    cout<<"Printing arrray element"<<endl;
    while(i<size){
        cout<<ptr<<" ";
        ptr++;
        i++;
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printArrayElement(arr,10);
    return 0;
}
