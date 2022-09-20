#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c;
    
    while(cin >> n >> c)
    {
        vector<int> dias;
        int dia,maior=0;
        
        dias.push_back(0);
        
        for(int i=0;i<n;i++)
        {
            cin >> dia;
            dias.push_back(dias[i]+dia);
        }
        
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
                int lucro = dias[i] - dias[j] - (i-j)*c;
                maior = max(maior,lucro);
            }
        }
        
        cout << maior << endl;
        
    }
    return 0;
