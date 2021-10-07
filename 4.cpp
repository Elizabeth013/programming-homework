#include<iostream>
using namespace std;

void task4_1(int a) {
    int a1=a>>1;
    a1=a1<<1;
    if(a1^a) cout<<"нечетное"<<endl; 
	else cout<<"четное"<<endl;
}

void task4_2(int a,int b) {
    a= a^b; b =b^a; a=a^b;
    cout<<"a="<<a<<" "<<"b="<<b<<endl;
}

int task4_3(int a) {
    return a<<3;
}

int main() {
	setlocale (LC_ALL, "Russian");
    int n;  
    int a,b;
    do {
    	cout<<"1-определение четности"<<endl<<"2-поменять значение переменных местами"<<endl<<"3-умножение на 8"<<endl<<"0-выход"<<endl<<"comand:";
		cin>>n;
        switch(n) {
            case 1:  cout<<"a="; cin>>a; task4_1(a); break;
            case 2:  cout<<"a="; cin>>a; cout<<"b="; cin>>b;task4_2(a,b); break;
            case 3:  cout<<"a="; cin>>a; cout<<task4_3(a)<<endl; break;
            case 0: cout<<"exit"; break;
            default: cout<<"error!"<<endl;
        }
    }    
	while(n!=0);
	return 1;
}
