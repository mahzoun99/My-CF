
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n,m,temp;
  cin>>m>>n;
  int a[n]={0};
  for(int i=0; i<n; i++)
    cin>>a[i];

  sort(a,a+n);
  
  /* for(int i=0; i<n; i++){
     for(int j=i; j<n; j++){
       if(a[i]<=a[j]){
	 temp=a[i];
	 a[i]=a[j];
	 a[j]=temp;
       }
     }
     }*/
  
  int min = a[m-1]-a[0] ,i;
  for(i=0; i<n; i++){
    //cout<<min<<"  "<<a[i]<<endl;
    if(min>a[m-1+i]-a[i] && (m-1+i)<n)
      min=a[m-1+i]-a[i];
  }
  
  cout<<min<<endl;
  return 0;
}
