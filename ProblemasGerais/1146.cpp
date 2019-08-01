#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor;

    while(1){
        cin >> valor;

        if (valor == 0)
            break;

        for (int i = 1; i <= valor; i++){
            cout << i;
            if(i < valor){
                cout << " ";
            }
            if(i == valor){
                cout << "\n";
            }
        }
        
        
        

    }
    

    return 0;
    
}