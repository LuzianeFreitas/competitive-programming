#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int vetor[1000];
    int x; //valores para o vetor

    cin >> x;

    int temp = 0;
    for(int i = 0; i < 1000; i++)
    {
        if(temp == x)
        {
            temp = 0;
            cout << "N[" <<i<<"] = "<<temp<<endl;
            temp++;
        }
        else
        {
            cout << "N[" <<i<<"] = "<<temp<<endl;
            temp++;
        }
    }
    return 0;
}