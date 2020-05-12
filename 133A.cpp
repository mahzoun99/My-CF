#include <iostream>
#include <string>
using namespace std;
int main(){
  string str1;
  cin>>str1;
  int a=0;
  bool bll=1;
  int size=str1.size();
  for(int i=0;i<size;i++){
    if(str1[i]=='H' || str1[i]=='Q' || str1[i]=='9'){
      cout<<"YES";
      bll=0;
      break;
    }
  }
  if(bll==1)
    cout<<"NO";
}
