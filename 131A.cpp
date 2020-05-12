#include <iostream>
#include <string>
using namespace std;
int main()
{
  string word;
  cin >> word;
  bool bll = 0;
  int size = word.size();
  int a[size];
  for(int u=0; u<size; u++){
    a[u]=word[u];
  }
  for(int i = 1; i < size; i++) {
    if(a[i] <= 90 && a[i] >= 65)
      bll=0;
    else {
      bll = 1;
      // cout << word << endl;
      break;
    }
  }
  if(bll==0){
    if( a[0]>=97 &&  a[0]<=122){
      a[0]-=32;
      for(int j=1; j<size; j++){
	a[j]+=32;
      }
    }
    else{
       for(int k=0; k<size; k++){
	 a[k]+=32;
       }
    }
  }
  for(int jj=0; jj<size; jj++){
    cout<< (char)a[jj];
  }
  cout << endl;
}
