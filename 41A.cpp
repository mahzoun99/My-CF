
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s,t;
  bool chck=1;
  cin>>s>>t;
  int ls=s.size();
  int lt=t.size();
  if(ls!=lt){
    cout<<"NO"<<endl;
    return 0;
  }
  for(int i=0; i<ls && ls==lt; i++){
    if(s[i]!=t[lt-1-i]){
      chck=0;
      break;
    }
  }
  chck? cout<<"YES"<<endl : cout<<"NO"<<endl ;
  return 0;
}
