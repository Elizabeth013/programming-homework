#include <iostream>
using namespace std;

int task3(int x,int i) {
    return x&(~(1<<i));
}

int main() {
	setlocale (LC_ALL, "Russian");
	int x, i;
	cout<<"������� ����� x= ";
	cin>>x;
	cout<<"������� ����� ����,������� ����� ��������� � 0 i= ";
	cin>>i;
	cout<<task3(x, i);
	return 1;
}
