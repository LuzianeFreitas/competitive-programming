#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    string n,m;
    
    while(cin >> n){
        cin.ignore();
        getline(cin, m);
        int cont = 0;
        for(int i = 0; i < n.size();i++){
            for(int j = 0; j < m.size();j++){
                if(n[i] == m[j]){
                    cont++;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}