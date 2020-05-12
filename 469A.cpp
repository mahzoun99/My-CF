#include <bits/stdc++.h>
using namespace std;

bool TrueBool(bool* check,int n){
  for(int i=0; i<n; i++){
    if(check[i]==false)
      return false;
  }
    return true;
}

int main()
{
  int n;
  cin>>n;
  bool check[n] = {false};
  int xn,yn,lev;
  cin>>xn;
  for(int i=0; i<xn; i++){
    cin>>lev;
    check[lev-1]=true;
  }
  cin>>yn;
  for(int i=0; i<yn; i++){
    cin>>lev;
    check[lev-1]=true;
  }
  TrueBool(check,n) ? cout<<"I become the guy." : cout<<"Oh, my keyboard!";
  return 0;
}
