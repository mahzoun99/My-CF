#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int Xs=0,Ys=0,Zs=0;
  int x[n],y[n],z[n];
  for(int i=0; i<n; i++){
    cin>>x[i]>>y[i]>>z[i];
    Xs+=x[i];
    Ys+=y[i];
    Zs+=z[i];
  }
  if(Xs==0 and Ys==0 and Zs==0)
    cout<<"YES";
  else
    cout<<"NO";
  
  return 0;
}
