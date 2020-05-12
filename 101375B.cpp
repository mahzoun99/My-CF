
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int x,y,R,W;
  cin>>x>>y;
  R=(x*x)+(y*y);
  cin>>x>>y;
  W=(x*x)+(y*y);
  if(R<W)
    cout<<"Russo";
  else if(R>W)
    cout<<"Wil";
  else
    cout<<"Empate";
  return 0;
}
