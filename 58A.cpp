#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string word;
  cin>> word;
  bool chk[5]={0,0,0,0,0};
  int lng, counter=0;
  lng=word.size();
  //for(int i=0; i<5; i++){
  //  chk[i]=0; }
  
  for(int i=0; i<lng; i++)
    {
      if(word[i]=='h')
	chk[0]=1;
      if(word[i]=='e' && chk[0]==1)
	chk[1]=1;
       if(word[i]=='l' && chk[2]==1)
	chk[3]=1;
      if(word[i]=='l' && chk[1]==1)
	chk[2]=1;
      if(word[i]=='o' && chk[3]==1)
	chk[4]=1;
    }
  
  // for(int i=0; i<5; i++){
  //  cout<<chk[i]<<endl;}
  
  if(chk[4]==1)
    cout<<"YES";
  else
    cout<<"NO";
  
  return 0;
}
