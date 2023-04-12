#include <bits/stdc++.h>

using namespace std;


int main(){
	int n, m, a, b, res;
	cin>>n>>m>>a>>b;
	if(b < (a * m)){
		int rem = n % m;
		res = (n / m) * b;
		if((rem * a) < b)
			res += (rem * a);
		else
			res += b;
	} else {
		res = a * n;
	}
  	cout<<res<<endl;
  	
	return 0;
}

