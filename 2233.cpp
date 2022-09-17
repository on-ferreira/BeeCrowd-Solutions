#include <iostream>
#include <math.h>
using namespace std;
#define lli long long int

int main() {
  lli R,G,B, Gtot, Btot;
  lli total = 1; //Sempre vai ter uma vermelha
  cin >> hex >> R >> G >> B;

  Gtot = pow(R/G,2);
  Btot = pow(G/B,2)*Gtot;

  if(Gtot!=0){
    total += Gtot;
    if(Btot != 0)
      total+= Btot;
  }

  
  cout << hex << total << "\n";

  
}
