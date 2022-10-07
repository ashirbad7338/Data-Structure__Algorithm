#include <iostream>
using namespace std;
void selectsort(int arr[],int n){       //The time complexity is O(n^2)
    for(int i=0; i<n-1; i++){
        int min_ind=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min_ind]){
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
}
void insertsort(int arr[],int n){       //The worst case time complexity is O(n^2)
                                        //The best case time complexity is O(n)
                                        //Stable sort
}
    for(int i=1; i<n; i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }                                         
int main(){
    int arr[]={34,21,65,87,12};
    int n=sizeof(arr)/sizeof(int);
    selectsort(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    insertsort(arr,n);
      for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


}