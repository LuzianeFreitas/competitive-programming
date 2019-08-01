#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12], soma, val;
    int coluna;
    string o;

    cin >> coluna;
    cin >> o;
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> val;
            m[i][j] = val;
        }
        
    }
    
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            if (j == coluna)
                soma += m[i][j];
        }  
    }
    
    

    if(o == "S")
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",(soma/12.0));
    
    

    return 0;
}