#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);


int tong(int a, int b){
return a+b;
};
int tich(int a,int b){
	return a*b;
}

float thuong(int a, int b){
	if (b == 0) {
		cout << "loi: khong the chia cho 0" << endl;
		return 0;
	}
	return (float) a/b;
}
int hieu(int a,int b){
	return a-b;

}

float canBacHai(int a){
    if (a < 0) {
        cout << "Khong the tinh can bac hai cua so am!" << endl;
        return -1; // Trả về giá trị đặc biệt để thông báo lỗi
    }
    return sqrt(a); // Hàm sqrt tính căn bậc hai
}
int main()
{	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT" << endl;
	cout << "\nNhap a:";
	cin >> a;
	cout << "\nNhap b:";
	cin >> b;
	cout << "\nGia tri trong la:" << tong(a,b)<<endl;
	cout<<"\nGia tri tich la:"<<tich(a,b)<<endl;

	cout<<"\nGia tri hieu la:"<<hieu(a,b)<<endl;
	cout << "\nCăn bậc hai của " << a << " là: " << canBacHai(a) << endl;
	system("pause");
	return 0;
}

