#include <iostream>
using namespace std;
int partition(int arr[],int lb, int up){
    int pivot=arr [up];
    int i=lb-1;
    for(int j=lb; j<up; j++){
     if(arr[j]<pivot){   
            i++;
            swap(arr[i],arr[j]);
         }
    }
    swap(arr[i+1],arr [up]);
    return (i+1);
}
void quicksort(int arr[],int lb,int up){
    if(lb < up){
        int x=partition(arr,lb, up);
        quicksort(arr,lb,x-1);
        quicksort(arr,x+1 ,up);
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}