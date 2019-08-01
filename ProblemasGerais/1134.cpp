#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int valores;
    int alcool = 0, gasolina = 0, diesel = 0;
    while (valores != 4)
    {
        cin >> valores;
        
        if(valores == 1){
            alcool++;
        }if(valores == 2){
            gasolina++;
        }if(valores == 3){
            diesel++;
        }else{
            continue;
        }
    }

    cout <<"MUITO OBRIGADO"<<"\n";
    cout <<"Alcool: "<< alcool<<"\n";
    cout <<"Gasolina: "<< gasolina<<"\n";
    cout <<"Diesel: "<< diesel<<"\n";
    return 0;
    
}