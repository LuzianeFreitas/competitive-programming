#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int N; 
    cin >> N;
    string pokemon[N];
    
    for(int i = 0; i < N; i++)cin >> pokemon[i];

    for(int i = 0; i < N; i++){
        for (int j = i+1; j < N;)
        {
            if (pokemon[i] == pokemon[j])
            {
                for (int k = j; k < N-1; k++)pokemon[k] = pokemon[k+1];
                
                --N;
            }else
            {
                ++j;
            }            
        }        
    }
 
    cout << "Falta(m) "<< (151-N) << " pomekon(s)." << "\n";

    return 0;
}