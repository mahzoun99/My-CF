#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
  long n;
  cin >> n;
  long long arr[n];
  long long arr2;
  vector<long long> v;
  
  for (long i = 0; i < n; i++)
    cin >> arr[i];
  for (long i = 0; i < n; i++){
    cin >> arr2;
    v.push_back(arr[i] -= arr2);
  }
  sort(v.begin(), v.end());

  long long result = 0;

  for(long i = 0; i < n; i++){
    if(v.at(i) <= 0){
      long ub = long( upper_bound(v.begin(), v.end(), -v.at(i)) - v.begin());
      //cout << "*** " << ub << endl;
      result += ( n - (ub) );
    }
    else{
      //cout << "+++ " << i << endl;
      result += n - (i+1);
    }
  }

  cout << result << endl;
  
} 

