#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int n;
  cin>>n;
  int counter=0;
  int num[n], C1=0, C2=0, C3=0;
  for(int i=0; i<n; i++)
    {
      cin>>num[i];
      if(num[i]==4){
	num[i]=0;
	counter++;
      }
      if(num[i]==3)
	C3++;
      if(num[i]==1)
	C1++;
      if(num[i]==2)
	C2++;
    }
  if(C1-C3>=0){
    counter+=C3;
    C1-=C3;
  }
  else{
    counter+=C3;
    C1=0;
  }
  
  counter+= C2/2;
  
  if(C2%2==1)
      C1+=2;
  
  if(C1%4==0)
    counter+=C1/4;
  else
    counter+= C1/4 +1;

  cout<<counter;
  
  return 0;
}
