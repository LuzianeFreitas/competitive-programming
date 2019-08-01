#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int X,Y,aux;
    cin >> X >> Y;

    if (X>Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }else{
        X = X;
        Y = Y;
    }

    for (int i = X+1; i < Y; i++)
    {
        if ((i%5) == 2)
        {
            cout << i << "\n";
        }else if((i%5) == 3){
            cout << i << "\n";
        }
                
    }

    return 0;
    
}