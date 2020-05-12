#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s;
  int count=0;
  cin>>s;
  for(int i=0; i<s.size(); i++)
    {
      if(s[i]=='4' || s[i]=='7')
	count++;
    }
  //Mahdoodiate Q 10e18 :D
  if(count==4 or count==7)
    cout<<"YES";
  else
    cout<<"NO";

  return 0;
}
