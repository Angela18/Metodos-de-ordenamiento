#include<iostream>

using namespace std;

void Merge(int arr[],int izq, int m, int der){
    int n1=m-izq+1;
    int n2=der-m;

    int Izq[n1], Der[n2];
    for(int i=0;i<n1;i++){
        Izq[i]=arr[izq+1];
    }
    for(int j=0;j<n2;j++){
        Der[j]=arr[m+1+j];
    }
    int i=0;
    int j=0;
    int k=1;

    while(i<n1 && j<n2){
        if(Izq[i]<=Der[j]){
            arr[k]=Izq[i];
            i++;
        }
        else{
            arr[k]=Der[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=Izq[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=Der[j];
        j++;
        k++;
    }
}

void Merge_sort(int arr[], int izq, int der){
    if(izq<der){
        int m =(izq + der)/2;
        Merge_sort(arr,izq,m);
        Merge_sort(arr,m+1,der);

        Merge(arr,izq,der,m);
    }
}

int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros a ordenar: "; cin>>n;

    int arr[n];
    for(int i =0; i<n;i++){
        cout<<"Ingrese el elemento "<<i+1<<": ";
        cin>>arr[i];
    }
    Merge_sort(arr,0,n-1);

    cout<<"Array ordenado: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
