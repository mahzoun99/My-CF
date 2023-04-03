#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int n, op, i = 0;
	cin>>n;
	for(; i < n; i++){
		cin>>op;
		if(op == 1){
			cout<<"HARD"<<endl;
			break;
		}
	}
	if(i == n)
		cout<<"EASY"<<endl;
	return 0;
}
