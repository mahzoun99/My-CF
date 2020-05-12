//yea i wanna submit the same code again :/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n,che=0,cho=0,ie,io;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
    if(a[i]%2==0){
      che++;
      ie=i+1;
    }
    if(a[i]%2==1){
      cho++;
      io=i+1;
    }
  }
  che==1? cout<<ie : cout<<io;
  return 0;
}
