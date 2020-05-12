#include <iostream>
#include <string>

using namespace std;
int main()
{
  int n;
  cin>>n;
  
  bool chk=0;
  
  bool nums[1000];
  for(int i=0; i<1000; i++)
    nums[i]=0;
  
  int bn=n;
  while(bn>0){
    if(bn%10==4 || bn%10==7)
	chk=1;
    else{
      chk=0;break;
    }
    bn/=10;
  }

  //cout<<chk<<endl;
  
  for(int i=0; i<n; i++)
    {
      int bbn=i+1;
      while( bbn>0 )
	{
	  if( bbn % 10 == 4 || bbn % 10 == 7 )
	    nums[i]=1;
	  else
	    {
	      nums[i]=0;
	      break;
	    }
	  
	  bbn/=10;
	}
       if(nums[i]==1)
	 {
	   if(n%(i+1)==0)
	     {
	       chk=1;
	       break;
	     }
	 }
    }
  // cout<<chk<<endl;
  /* for(int i=0; i<1000; i++)
     {
       //cout<<i+1<<" : "<<nums[i]<<endl;
       if(nums[i]==1)
	 {
	   if(n%(i+1)==0)
	     {
	       chk=1;
	       break;
	     }
	 }
     }
  */
   if(chk==1)
     cout<<"YES";
   else
     cout<<"NO";
      
  return 0;
}
