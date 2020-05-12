#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
  long long n,m,i;
  cin>>n>>m;
  long long a[m];
  long long Cstep = 0, Tstep = 0;
  for(i=0; i<m; i++){
    cin>>a[i];
    if(a[i]-1>Cstep) Cstep = a[i]-1;
    else if(a[i]-1<Cstep){
      Cstep = a[i]-1;
      Tstep++;
    }
    //cout<<"this line: "<<Cstep<<"\t"<<Tstep<<endl;
   
  }
  cout<< (Tstep*n)+Cstep <<endl;
  return 0;
}
