#include <bits/stdc++.h>
using namespace std;

struct Dragon{
  int s;
  int b;
};

int main()
{
  int s , n ;
  cin >> s >> n;
  Dragon dr[n];
  
  for(int i=0; i<n; i++)
    cin >> dr[i].s >> dr[i].b ;
  for(int i=0; i<n-1; i++){
    for(int j=i+1; j<n; j++){
      if(dr[i].s > dr[j].s)
	swap(dr[i],dr[j]);
    }
  }
  int i=0;
  for(; i<n; i++){
    if ( s > dr[i].s ){
      s+=dr[i].b;
    }
    else
      break;
  }
  i==n ? cout<<"YES" : cout<<"NO";
  return 0;
}
