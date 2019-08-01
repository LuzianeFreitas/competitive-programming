#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int valor, cont;
    cin >> valor;
    for (int i = 1; i <= valor; i++)
    {
        cout << i << " " << (i*i) << " " << (i*i*i) << "\n";
    }
    

    return 0;
    
}