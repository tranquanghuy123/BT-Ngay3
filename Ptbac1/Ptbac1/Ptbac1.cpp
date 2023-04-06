#include <iostream>;
using namespace std;
int main()
{
	int a;
	int b;
	int x;
	cout << "nhap a = " << endl;
	cin >> a;
	cout << "nhap b = " << endl;
	cin >> b;
	if (a == 0 && b == 0) {
		cout << " phuong trinh co vo so nghiem " << endl;
	}
	else if (a == 0 && b != 0) {
		cout << "phuong trinh vo nghiem " << endl;
	}
	else if (a != 0) {
		x = -b / a;
		cout << "phuong trinh co nghiem la" << x << endl;

	}
}
