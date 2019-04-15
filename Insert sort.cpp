#include<iostream>

using namespace std;

void Insert_sort(int arr[],int n){
    int key;
    for(int i=1;i<n;i++){
        int j;
        key=arr[i];
        j=i-1;
        while((arr[j]>key)&&(j>=0)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Ingrese un numero: ";
        cin>>arr[i];
    }
    Insert_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
