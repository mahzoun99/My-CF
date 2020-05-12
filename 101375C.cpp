
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
  int Q,X,Y,R;
  cin>>Q;
  vector<int> x,y,r;
  char ch;
  
  for(int i=0; i<Q; i++)
    {
      cin>>ch;
      cin>>X>>Y>>R;
      if(ch=='A')
	{
	  bool flag=0;
	  long int dd,dr1;
	  x.push_back(X);
	  y.push_back(Y);
	  r.push_back(R);
	  for(int j=0; j<x.size()-1; j++)
	    {
	      if(x[j]==0 and y[j]==0 and r[j]==0)
		continue;
	      else{
	      dd = (x[j]-X)*(x[j]-X) + (y[j]-Y)*(y[j]-Y);
	      dr1 = (r[j]+R)*(r[j]+R);
	      //dr2= (r[j]-R)*(r[j]-R);
	      //cout<<"* "<<dd<<" "<<dr1<<endl;
	      if(dd<dr1)
		flag=1;
	      }
	    }
	  if(flag==1){
	    x.pop_back();
	    y.pop_back();
	    r.pop_back();
	    cout<<"No"<<endl;
	  }
	  else
	    cout<<"Ok"<<endl;
	}
      else
	{
	  bool flag=0;
	  for(int j=0; j<x.size(); j++)
	    {
	      if(x[j]==X and y[j]==Y and r[j]==R)
		{
		  x[j]=y[j]=r[j]=0;
		  flag=1;
		  break;
		}
	    }
	  if(flag==1)
	    cout<<"Ok"<<endl;
	  else
	    cout<<"No"<<endl;
	}
     
    }
  return 0;
}
