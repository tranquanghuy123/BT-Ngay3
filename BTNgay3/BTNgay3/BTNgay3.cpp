#include <iostream>;
using namespace std;

int main()
{
// Khai bao biến n với kiểu dữ liệu là sô nguyên
	int n;
	cout << "Nhap n:" << endl;
	cin >> n;
	
	// khai báo biến a có kiểu dữ liệu là số nguyên với biến a ở dạng hàng đơn vị
	int a = n % 10;

	// khai báo biến b có kiểu dữ liệu là số nguyên với biến b ở dạng hàng chục (số có 2 chữ số)
	int b = n / 10;
	
	//Điều kiện để số có 2 chữ số
	if(n < 10 || n > 99) {
		cout << "Nhap so co 2 chu so : " << endl;

	}
	else{
		
		// in ra hàng chục
		switch (b) {
		case 1: cout << "Muoi" << endl;
			break;
		case 2: cout << "Hai muoi" << endl;
			break;
		case 3: cout << " Ba muoi" << endl;
			break;
		case 4: cout << "Bon muoi" << endl;
			break;
		case 5: cout << "Nam muoi" << endl;
			break;
		case 6: cout << "Sau muoi" << endl;
			break;
		case 7: cout << "Bay muoi" << endl;
			break;
		case 8: cout << "Tam muoi" << endl;
			break;
		case 9: cout << "Chin muoi" << endl;
			break;

		}
		// in ra ham don vi
		switch (a) {
		case 1: cout << "Mot" << endl;
			break;
		case 2: cout << "Hai" << endl;
			break;
		case 3: cout << " Ba" << endl;
			break;
		case 4: cout << "Bon" << endl;
			break;
		case 5: cout << "Nam" << endl;
			break;
		case 6: cout << "Sau" << endl;
			break;
		case 7: cout << "Bay" << endl;
			break;
		case 8: cout << "Tam" << endl;
			break;
		case 9: cout << "Chin" << endl;
			break;
		}
		}

		return 0;


}
