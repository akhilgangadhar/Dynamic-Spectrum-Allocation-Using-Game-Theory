#include <bits/stdc++.h>

using namespace std;

void counting_sort(int A[],int sortedA[],int N){
    int K = 0;
    for(int i=0;i<N;i++){
        K = max(A[i],K);
    }
    int Aux[K+1];
    memset(Aux,0,sizeof(Aux));
    for(int i=0;i<N;i++){
        Aux[A[i]]++;
    }
    int j = 0;
    for(int i=0;i<=K;i++){
        int tmp = Aux[i];
        while(tmp--){
            sortedA[j] = i;
            j++;
        }
    }
}

int main(){
    int A[] = {5,2,9,5,2,3,5};
    int n = sizeof(A)/sizeof(A[0]);
    int sortedA[n];
    counting_sort(A,sortedA,n);
    for(int i=0;i<n;i++){
        cout<<sortedA[i]<<" ";
    }
return 0;
}

