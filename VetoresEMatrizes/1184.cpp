#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12], soma, val;
    string o;

    cin >> o;
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> val;
            m[i][j] = val;
        }
        
    }
    int cont = 1;
    for (int i = 1; i < 12; i++)
    {
        for (int j = 0; j < cont; j++)
        {
            soma += m[i][j];
        }
        cont++;
    }
    

    if(o == "S")
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",(soma/66.0));
    
    

    return 0;
}