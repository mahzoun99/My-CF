#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int t;
	double a, b, r;
	cin>>t;
	for(int i = 0; i < t; i++){
		cin>>a>>b;
		r = ceil(fabs(a - b)/10);
		cout<<(long long)r<<endl;
	}
	return 0;
}
