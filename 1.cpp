#include <iostream>
using namespace std;

int derivative() {
	int n;
	cin>>n;
	if ( n % 4 == 1) cout<<"cos(x)";
	if ( n % 4 == 2) cout<<"-sin(x)";
	if ( n % 4 == 3) cout<<"-cos(x)";
	if ( n % 4 == 0) cout<<"sin(x)";
}


int main() {
	derivative();
	return 1;
}
