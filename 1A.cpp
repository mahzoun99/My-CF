//in the name of god!
#include<iostream>
using namespace std;
int main(){
  long long a,m,n,k,j;
  double x,y;
  cin>>m>>n>>a;
  x=(double)m/a;
  y=(double)n/a;
  if(x==m/a)
    k=x;
  else{
    x+=1;
    k=x;}
  if(y==n/a)
    j=y;
  else{
    y+=1;
    j=y;}
  cout<<k*j<<endl;
  return 0;
}
