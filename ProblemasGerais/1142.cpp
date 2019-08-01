#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor, cont;
    cin >> valor;
    cont = 4*valor;
    
    for (int j = 1; j <= cont-1 ; j+=4)
    {  
        for (int i = j; i <= j+2; i++)
        {
            cout << i << " ";
        }
        cout << "PUM\n";
        
    }

    return 0;
    
}