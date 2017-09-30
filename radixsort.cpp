#include <bits/stdc++.h>

using namespace std;

void countsort(int arr[],int n,int place){
    int i,freq[10] = {0};
    int output[n];
    for(i=0;i<n;i++){
        freq[(arr[i]/place)%10]++;
    }
    for(i=1;i<n;i++){
        freq[i] += freq[i-1];
    }
    for(i=n-1;i>=0;i--){
        output[freq[(arr[i]/place)%10]-1] = arr[i];
        freq[(arr[i]/place)%10]--;
    }
    for(i=0;i<n;i++){
        arr[i] = output[i];
    }
}

void radixsort(int arr[],int n,int maxx){
    int mul = 1;
    while(maxx){
        countsort(arr,n,mul);
        mul*=10;
        maxx/=10;
    }
}

int main(){
    int arr[ ] ={10,21,17,34,44,11,654,123};
    int n = sizeof(arr)/sizeof(int);
    int maxx = 0;
    for(int i=0;i<n;i++){
        maxx = max(maxx,arr[i]);
    }
    radixsort(arr,n,maxx);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}
