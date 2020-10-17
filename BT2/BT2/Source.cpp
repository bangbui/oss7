#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	//Chuc nang tinh cho vi
	int hinh;
	cout<<"Ban muon tinh chu vi hinh nao?"
	cin>>hinh;
	switch(hinh)
	{
		case 1:
			int dai,rong;
			cout<<"Nhap chieu dai";
			cin>>dai;
			cout<<"Nhap chieu rong";
			cin>>rong;
			cout<<"Chu vi HCN la: "<<(dai+rong)*2;
			break;
		case 2:
		int canh;
			cout<<"Nhap chieu canh";
			cin>>canh;
			cout<<"Chu vi hinh vuong la: "<<canh*4;
			break;
	}	
	int a, b;
	char phepToan;
	cout << "Nhap 2 so nguyen: ";
	cin >> a >> b;
	cout << "Tinh gi? (+,-,*,/) ";
	cin >> ch;
	switch (phepToan)
	{
	case '+':
		cout<<"tong = "<<tong(a,b);
		break;
	case '-':
		cout<<"hieu= "<<hieu(a,b);
		break;
	case '*':
		cout<<"Tich = "<<tich(a,b);
		break;
	case '/':

		break;
	default:
		cout << "Chon sai phep toan";
		break;
	}
	return 0;
}