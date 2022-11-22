#include<bits/stdc++.h> 
using namespace std;
int main(){
	int count, n;
	vector<char> pis;
	cin>>n;
	while(n > 0){
		cin>>count;
		while(count > 0){
			char p;
			cin>>p;
			if(p=='(')
				pis.push_back('(');
			else if(p==')' && pis.size() > 0)
				pis.pop_back();
			count--;
		}
		cout<<pis.size()<<endl;
		pis.clear();
		n--;
	}
	return 0;
}
