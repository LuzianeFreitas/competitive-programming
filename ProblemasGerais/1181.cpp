#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double m[12][12], soma, val;
    int linha;
    string o;

    cin >> linha;
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
        if (i == linha)
        {
            for (int j = 0; j < 12; j++)
            {
                soma += m[i][j];
            }
            
        }
        
    }
    
    

    if(o == "S")
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",(soma/12.0));
    
    

    return 0;
}