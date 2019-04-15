#include<iostream>

using namespace std;

void Quick_sort(int arr[],int izq, int der){
    int i=izq, j=der;
    int pivote=arr[(izq+der)/2];
    while(i<j){
        while(arr[i]<pivote){
            i++;
        }
        while(arr[j]>pivote){
            j--;
        }
        if(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    if(izq<j){
        Quick_sort(arr,izq,j);
    }
    if(i<der){
        Quick_sort(arr,i,der);
    }
}

int main(){
    int n=7;
    int arr[7]={5,3,7,6,2,1,4};
    cout<<"Array original: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Quick_sort(arr,0,n-1);
    cout<<"Nuevo array: ";
    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
