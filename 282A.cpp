#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int n;
  int num=0;
  string str[150];
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>str[i];
    if(str[i][1]=='+')
      num+=1;
    if(str[i][1]=='-')
      num-=1;
  }
  cout<<num;
  return 0;
}
