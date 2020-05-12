#include<iostream>
#include<string>
using namespace std;


int main()
{
  int tc;
  cin>>tc;
  for(int i = 0; i < tc; i++){
    
    string s;
    int lcount = 1;
    int res = 1;
    cin>>s;
    
    for(int i = 0; i < s.length(); i++){
      if(s[i] == 'L'){
	lcount++;
	if(lcount > res)
	  res = lcount;
      }
      else
	lcount = 1;
    }

    cout<<res<<endl;
    
  }
  
  return 0;
}
