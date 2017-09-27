#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    return gcd(b,a%b);
}

void build(int tree[],int A[],int node,int s,int e){
    if(s == e){
        tree[node] = A[s];
    }else{
        int mid = (s+e)/2;
        build(tree,A,2*node,s,mid);
        build(tree,A,2*node+1,mid+1,e);
        tree[node] = tree[2*node] + tree[2*node+1];
    }
}

/*void update(int tree[],int A[],int node,int s,int e){
    if(s == e){
        A
    }
}*/

int query(int tree[],int A[],int node,int s,int e,int l,int r){
    if(r < s or e < l){
        return 0;
    }
    if(l <= s && r >= e){
        return tree[node];
    }
    int m = (s+e)/2;
    int p1 = query(tree,A,2*node,s,m,l,r);
    int p2 = query(tree,A,2*node+1,m+1,e,l,r);
    return (p1+p2);
}

int main(){
int A[] = {1,3,5,7,9,11,13};
int n = sizeof(A)/sizeof(int);
int tree[2*n];
build(tree,A,1,0,n-1);
int q,x,y;
cin>>q;
for(int i=0;i<q;i++){
    cin>>x>>y;
    cout<<query(tree,A,1,0,n-1,x,y);
}
return 0;
}
