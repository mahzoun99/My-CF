#include <iostream>
#include <string>
using namespace std;
int main()
{
  int n,k;
  cin >> n >> k;
  int sc[n];
  int j=0;
  int counter=0;
  for(int i=0; i<n; i++){
    cin>>sc[i];}
  //cout<<sc[0]<<endl;
  // int che=0;
  if(sc[0]>0){
    while(j<n && sc[j]>0 && sc[j]>=sc[k-1])
      {
      counter++;
      //cout<<"* "<<sc[j]<<endl;
      j++;
      }
    cout << counter << endl;
  }
  else
    cout << 0 << endl;
}
