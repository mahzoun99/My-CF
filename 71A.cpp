#include <iostream>
#include <string>
using namespace std;
int main()
{
  int num;
  cin >> num;
  string word[100];
  for(int i=0; i<num; i++){
    cin >> word[i];
  }
  for(int i=0; i<num; i++){
    int lng = word[i].size();
    if( lng > 10 )
      cout<< word[i][0] << lng-2 << word[i][lng-1] << endl;
    else
      cout << word[i] << endl;
  }
  return 0;
}
