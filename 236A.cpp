#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  string word;
  cin>> word;
  int lng=word.size();
  int counter=0;
  bool ch[26];
  for(int i=0; i<26; i++)
    ch[i]=0;
  
  for(int i=0; i<lng;i++)
    {
      ch[word[i]-'a']=1;
    }
  
  for(int i=0; i<26; i++)
    {
      if(ch[i]==1)
	counter++;
    }
  if(counter%2==0)
    cout<<"CHAT WITH HER!";
  else
    cout<<"IGNORE HIM!";
  
  
  return 0;
}
