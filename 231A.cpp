#include <iostream>
#include <string>
#include <cctype>
#include <cstdio>

using namespace std;
int main()
{
  int counter=0;
  int n,A,B,C;
  cin >> n;
  for(int i=0; i<n; i++){
    cin>>A>>B>>C;
    if(A+B+C>=2)
      counter++;
  }
  cout<<counter;
  return 0;
}
