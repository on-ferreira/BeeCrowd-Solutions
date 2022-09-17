#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, soma;
  
  cin>>n;
  vector<int> v(n);

  for(int i = 0; i < n; i++){
      cin >> v[i];
    }
  cin>>soma;

  for(int i = 0; i< n; i++)
      if(binary_search(v.begin(),v.end(), (soma-v[i]) )){
        cout<<v[i]<<" "<<soma-v[i]<<"\n";
        break;
      }
  return 0;
}
