#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n;
  cin>>n;
  int N=n;
  int lng=0, count=1;
  int a[n];
  for(int i=0; i<n; i++)
    cin>>a[i];
  while(N>0){
    //cout<<N<<endl;
    for(int i=n-N; i<n-1; i++)
      {
	if( a[i+1]<a[i] )
	  break;
	else
	  count++;
      }
    N-=count;
    if(lng<count)
      lng=count;
    count=1;
	
      }
  cout<<lng;
      
  return 0;
}
