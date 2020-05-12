
#include <iostream>
//#include <vector>
//#include <cmath>
#include <string>

using namespace std;

bool schck(string str,int lng)
{
  for(int i=0; i<lng-5; i++)
    {
      if(str[i]=='S'){
	 if(str[i+1]=='u'){
	    if(str[i+2]=='s'){
	       if(str[i+3]=='s'){
		 if(str[i+4]=='u'){
    if( i>0 and (str[i+5]==' ' || str[i+5]=='.' || str[i+5]=='!') and str[i-1]==' ')
      return 1;
    else if( i==0 and  (str[i+5]==' ' || str[i+5]=='.' || str[i+5]=='!') )
      return 1;
		 }}}}}}
  return 0;
}


int main()
{
  string str;
  getline(cin,str);
  int lng=str.size();
  if(str[lng-1]=='?')
    cout<<"7";
  else if(schck(str,lng))
    cout<<"AI SUSSU!";
  else
    cout<<"O cara é bom!";

  return 0;
}
