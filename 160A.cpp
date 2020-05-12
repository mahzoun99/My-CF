
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int n,temp,sum=0,S=0;
  cin>>n;
  int a[n]={};
  for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
  }
  
  for(int i=0; i<n; i++){
     for(int j=i; j<n; j++){
       if(a[i]<=a[j]){
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
       }
     }
  }

  int i;
  for(i=0; i<n; i++){
    //cout<<" "<<a[i];
    S+=a[i];
    if( S > sum/2)
      break;
  }
  
  cout<</*endl<<S<<" "<<sum/2<<" "<<*/i+1<<endl;
  
  return 0;
}
