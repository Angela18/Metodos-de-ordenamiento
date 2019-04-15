#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=2; i<=n;i++){
        for(int j=0; j<=n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int n=5;
    int arr[n]={55,48,86,16,82};
    cout<<"Array original: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bubble_sort(arr,n);
    cout<<"Array ordenado: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
