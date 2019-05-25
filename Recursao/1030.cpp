#include <bits/stdc++.h>
using namespace std;

int FlaviousJosephus(int n, int k);
int main(){
    int NC, n, k;

    cin >> NC;
    
    for(int i = 0; i < NC; i++){
        cin >> n;
        cin >> k;
        printf("Case %d: %d\n",i+1,FlaviousJosephus(n,k));
    }
    return 0;
}
int FlaviousJosephus(int n, int k) {
    int r = 0;
    for (int i = 2; i <= n; i++){
        r = (r + k) % i;
    }
    return r+1;  
}