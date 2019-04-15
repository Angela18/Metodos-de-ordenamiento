#include<iostream>

using namespace std;

int getMax(int arr[],int n){
    int mx=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
        }
    }
    return mx;
}

void Count_sort(int arr[],int n, int exp){
    int S[n];
    int E[10]={0};

    for(int i=0;i<n;i++){
        E[(arr[i]/exp)%10]++;
    }
    for(int i=1;i<10;i++){
        E[i]+=E[i-1];
    }
    for(int i=n-1;i>=0;i--){
        S[E[(arr[i]/exp)%10]-1]=arr[i];
        E[(arr[i]/exp)%10]--;
    }
    for(int i=0;i<n;i++){
        arr[i]=S[i];
    }
}

void Radix_sort(int arr[],int n){
    int max=getMax(arr,n);
    for(int exp=1;max/exp>0;exp*=10){
        Count_sort(arr,n,exp);
    }
}

int main(){
    int n=8;
    int arr[8]={25,57,48,37,12,92,86,33};
    cout<<"Array original: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    Radix_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
