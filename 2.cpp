#include <iostream>
using namespace std;

int task2(int x,int i) {
    return x|(1<<i);
}

int main() {
	setlocale (LC_ALL, "Russian");
	int x, i;
	cout<<"Введите число x= ";
	cin>>x;
	cout<<"Введите номер бита, который нужно заменить на 1. i= ";
	cin>>i;
	cout<<task2(x, i);
	return 1;
}
