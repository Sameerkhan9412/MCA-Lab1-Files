#include<iostream>
using namespace std;

void MergedArray(int arr1[],int n1,int arr2[],int n2,int mergedArr[]){
	int i=0,j=0,k=0;
	while(j<n1 && k<n2){
		if(arr1[j]<=arr2[k]){
			mergedArr[i]=arr1[j];
			j++;
			i++;
		}
		else{
			mergedArr[i]=arr2[k];
			k++;
			i++;
		}
	}
	while(j<n1){
		mergedArr[i]=arr1[j];
		j++;
		i++;
	}
	while(k<n2){
		mergedArr[i]=arr2[k];
		k++;
		i++;
	}
//	cout<<"Print mrgd array"<<endl;
//	for(i=0;i<(n1+n2);i++){
//		cout<<mergedArr[i]<<" ";
//	}
}

void PrintArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n1,n2;
	cout<<"Enter size of first array:";
	cin>>n1;
	int arr1[n1];
	cout<<"Enter size of second array";
	cin>>n2;
	int arr2[n2];
	int mergedArr[n1+n2];
	cout<<"Enter "<<n1<<" Element for first array:";
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	
	cout<<"Enter "<<n2<<" Element for second array:";
	for(int i=0;i<n2;i++){
		cin>>arr2[i];
	}
	
	MergedArray(arr1,n1,arr2,n2,mergedArr);
	
	cout<<"Printing Array:";
	PrintArray(mergedArr,n1+n2);
	
	
}
