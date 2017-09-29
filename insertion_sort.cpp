#include <bits/stdc++.h>

using namespace std;

void swap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(int);
    int i,key,j;
    for(i=1;i<n;i++){
        key = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

