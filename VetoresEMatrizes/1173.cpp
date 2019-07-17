#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetorX[10];
    int x;

    cin >> x;
    vetorX[0] = x;
    printf("N[%d] = %d\n",0,vetorX[0]);
    for(int i = 1 ; i < 10; ++i){
        x= x*2;
        vetorX[i] = x;
        printf("N[%d] = %d\n",i,vetorX[i]);
    }
    return 0;
}