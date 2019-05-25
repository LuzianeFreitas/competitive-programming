#include <bits/stdc++.h>
using namespace std;
int sequenciaDeFibonacci(int numeros);
int calls;
int main(){
    int n;
    int numeros,resultadoFibonacci;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> numeros;
        resultadoFibonacci = sequenciaDeFibonacci(numeros);
        printf("fib(%d) = %d calls = %d\n",numeros,calls-1,resultadoFibonacci);
        calls = 0;
    }

    return 0;
}

int sequenciaDeFibonacci(int numeros){
    calls++;
    if(numeros == 0){
        return 0;
    }else if(numeros == 1){
        return 1;
    }else{
        return (sequenciaDeFibonacci(numeros-1) + sequenciaDeFibonacci(numeros-2));
    }

}