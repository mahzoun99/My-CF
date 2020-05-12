//yea i wanna submit the same code again :/
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n, count100=0, count200=0;
  cin>>n;
  int grm[n];
  for(int i=0; i<n; i++)
    {
      cin>>grm[i];
      if (grm[i]==100)
	count100++;
      if(grm[i]==200)
	count200++;
    }
  if(count200%2==1 && count100%2==1)
    cout<<"NO";
  if(count200%2==0 && count100%2==1)
    cout<<"NO";
  if(count200%2==1 and count100%2==0 and count100>0)
    cout<<"YES";
  if(count200%2==0 and count100%2==0)
    cout<<"YES";
  if(count100==0 && count200%2==1)
    cout<<"NO";
  
  return 0;
}
