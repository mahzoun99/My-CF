
#include <iostream>
//#include <string>

using namespace std;

int main()
{
  long n,sa=0,sb=0,sc=0,sd=0;
  cin>>n;
  unsigned int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
    if(i%4==0)
      sa+=a[i];
    else if(i%4==1)
      sb+=a[i];
    else if(i%4==2)
      sc+=a[i];
    else
      sd+=a[i];
  }
  if(sa>=sb and sa>=sc and sa>=sd)
    cout<<"A"<<endl;
  else if( sb>=sc and sb>=sd)
    cout<<"B"<<endl;
  else if(sc>=sd)
    cout<<"C"<<endl;
  else
    cout<<"D"<<endl;
  
  return 0;
}
