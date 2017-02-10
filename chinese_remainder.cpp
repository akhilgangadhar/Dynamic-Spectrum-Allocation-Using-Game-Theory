/*naive method of chinese remainder */

#include <iostream>

using namespace std;

int findMinX(int num[],int rem[],int k){
    int x = 1;
    int j;
    while(true){
        for( j=0;j<k;j++){
            if(x % num[j] != rem[j]){
                break;
            }
        }

        if(j == k){
            return x;
        }
        x++;
    }
}

int main(){
    int num[] = {3, 4, 5};
    int rem[] = {2, 3, 1};
    int k = sizeof(num)/sizeof(num[0]);
    cout << "x is " << findMinX(num, rem, k);
return 0;
}
