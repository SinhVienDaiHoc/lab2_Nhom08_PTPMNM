#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int tong(int a, int b){
return a+b;
};
int main()
{	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT" << endl;
	cout << "Nhap a:";
	cin >> a;
	cout << "\nNhap b:";
	cin >> b;
	cout << "Gia tri trong la:" << tong(a,b)<<endl;
	system("pause");
	return 0;
}