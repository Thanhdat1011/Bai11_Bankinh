#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;
int main()
{
	cout << "tinh dien tich chu vi hinh tron\n";
	double bankinh, chuvi, dientich, pi;
    cout << "Nhap Ban Kinh:"; cin >> bankinh;


	chuvi = 2 * M_PI * bankinh;
	dientich = M_PI * bankinh * bankinh;


	cout << "chu vi: " << chuvi << endl;
	cout << "dien tich: " << dientich << endl;


	return 0;
}