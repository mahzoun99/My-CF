
#include <iostream>
//#include <string>

using namespace std;

int main()
{
  int T,sum,A,B;
  unsigned long long a,b;
  cin>>T;
  for(int i=0; i<T; i++)
    {
      sum=0;
      cin>>a>>b;
      sum+=a+b;
      if(sum%2==0){A=B=sum/2;}
      else{ A=sum/2; B=sum/2+1;}
      if(a==A && b==B)
	cout<<"Ok"<<endl;
      else if(a==B && b==A)
	cout<<"Ok"<<endl;
      else
	cout<<A<<" "<<B<<endl;
    }
  return 0;
}
