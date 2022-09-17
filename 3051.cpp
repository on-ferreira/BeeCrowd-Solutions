#include <stdio.h>
 
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll long long

using namespace std;


int main() {
  int N,K,in, VplusK;
  ll sumPartial = 0, Resp = 0;
  cin >> N >> K;

//   vector<ll> VetOrigem(N);  // A primeira ideia era de armazenar o vetor digitado, mas percebi depois que isso é inútil, só preciso do vetor das somas
  vector<ll> VetSoma;
  VetSoma.push_back(0);
  
  for(int i; i<N; i++){
    cin >> in;
    sumPartial += in;
    VetSoma.push_back(sumPartial);
  }

  // Agora que o vetor das somas está pronto, vou usar o Upper & Lower como explicado na sala para encontrar a resposta
  for(int i; i<VetSoma.size(); i++){
    VplusK = VetSoma[i]+K; // Valor Atual + K 
    Resp += upper_bound(VetSoma.begin()+i+1,VetSoma.end(),VplusK) - lower_bound(VetSoma.begin()+i+1,VetSoma.end(),VplusK);
  }

  cout << Resp << "\n";

  return 0;
}
