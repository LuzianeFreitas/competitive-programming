#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

ll sequenciaDeFibonacci(ll numeros);
ll calls;
ll guardaFibonacci[61];
int main(){
    ll n;
    ll numeros,resultadoFibonacci;
    

    cin >> n;
    ll vetor[n];
    memset(guardaFibonacci,-1,sizeof guardaFibonacci);

    for(int i = 0; i < n; i++){
        cin >> numeros;
        resultadoFibonacci = sequenciaDeFibonacci(numeros);
        vetor[i] = resultadoFibonacci;
        cout << "Fib("<<numeros<<") = "<<resultadoFibonacci<<endl;
        //printf("Fib(%llu) = %llu\n",numeros,resultadoFibonacci);
        //printf("fib(%d) = %d calls = %d\n",numeros,calls-1,resultadoFibonacci);
        calls = 0;
    }

    return 0;
}

ll sequenciaDeFibonacci(ll numeros){
    calls++;
    ll resultado;
    if(numeros == 0){
        return 0;
    }else if(numeros == 1){
        return 1;
    }
    if(guardaFibonacci[numeros]!= -1){
        return guardaFibonacci[numeros];
    }
    
    resultado =(sequenciaDeFibonacci(numeros-1) + sequenciaDeFibonacci(numeros-2));
    guardaFibonacci[numeros] = resultado;

    return resultado;

}