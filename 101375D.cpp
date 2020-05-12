#include <iostream>
//#include <string>

using namespace std;

int main()
{
  long long sum=0,S=0;
  long int n;
  cin>>n;
  int h[n];
  for(int i=0; i<n; i++){
    cin>>h[i];
    sum+=h[i];
  }
  for(int i=0; i<n-1;i++)
    {
      sum-=h[i];
      S+=h[i]*sum;
    }
  cout<<S<<endl;
  
  return 0;
}
