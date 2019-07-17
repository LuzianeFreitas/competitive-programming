#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int vetorX[10];
    int x;

    

    for(int i = 0 ; i < 10; ++i){
        cin >> x;
        if( x <= 0){
            vetorX[i] = 1;
            printf("X[%d] = %d\n",i,vetorX[i]);
        }else{
            vetorX[i] = x;
            printf("X[%d] = %d\n",i,vetorX[i]);
        } 
    }
    return 0;
}