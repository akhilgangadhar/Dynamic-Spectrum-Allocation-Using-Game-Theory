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
        for(int j=i+1;j<n;j++){
           if(arr[j] < arr[i]){
                swap(&arr[j],&arr[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
