#include <iostream>
#include <string>

using namespace std;

int main()
{
  int GY;
  int GY1;
  cin>>GY;
  int chk=0;
  int dah=10,ragham[4];
  while(chk!=6)
    {
      GY++;
      GY1=GY;
      chk=0;
      for(int i=0; i<4; i++)
	{
	  ragham[i]= GY1%dah;
	  GY1/=10;
	  // cout<<"r : "<<ragham[i]<<endl;
	  if(GY1==0)
	    break;
	}
       if(ragham[0]!=ragham[1])
	 chk++;
       if(ragham[0]!=ragham[2])
	 chk++;
       if(ragham[0]!=ragham[3])
	 chk++;
       if(ragham[1]!=ragham[2])
	 chk++;
       if(ragham[1]!=ragham[3])
	 chk++;
       if(ragham[2]!=ragham[3])
	 chk++;

       // cout<<chk<<endl;
    }
  cout<<GY;
      
  return 0;
}
