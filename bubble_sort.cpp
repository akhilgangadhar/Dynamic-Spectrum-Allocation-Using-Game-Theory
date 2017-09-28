#include <bits/stdc++.h>

using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(int);
    int temp;
    for(int i=0;i<n-1;i++){
      // Last i elements are already in place 
        for(int j=0;j<n-i-1;j++){
           if(arr[j+1] < arr[j]){
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

