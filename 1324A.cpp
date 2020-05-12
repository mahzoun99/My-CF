#include<iostream>

using namespace std;

int main()
{
  int tc;
  cin>>tc;
  for(int i = 0; i < tc; i++){
    int col;
    cin>>col;
    int num0;
    cin>>num0;
    
    bool res = true;
    for(int j = 0; j < col-1; j++){
      int num;
      cin>>num;
      if(num%2 != num0%2)
	res = false;
      num0=num;
    }

    if(res)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;

  }
  
  return 0;
}
