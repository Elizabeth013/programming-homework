#include<iostream>
using namespace std;



int main() {
	setlocale (LC_ALL, "Russian");
	int t;
	float v,s,s1,s2;
	cout<<"Введите время в секундах и скорость в м/с через пробел ";
	cin>>t>>v;
	s1=v*t;
	s2=0;
	double dv=v/t;
	while(v!=0) {
       v=v-dv;
       s2+=v*1;
	}

	s=s1+s2;
	cout<<s1<<endl<<s2<<endl<<s<<endl;
	return 1;
}
