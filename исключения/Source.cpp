#include <iostream>
using namespace std;
/*������� 2.
�������� �������� ���������������� �������-����������.
� ��� ������ ���� ������ ��� ������ ��������. 
� �������� ���������� ������� ����������� ���� 
������������ � �������� �������. ��������, ������ 
�������������� ������ ��� ��������� ������������ 
�������������� ������, �������� ������, ��������� 
�� ������ � ������� � �.�.*/
class YM {
	int one;
	int two;
public:
	YM(int a, int b) : one(a), two(b) {}
		
	 void as (){
		int z = one * two;
		if (one > 0 && two < 0 || one < 0 && two > 0)
		throw - z;
	}
	friend ostream& operator << (ostream& out, const YM& p) {
		out << p.one << " " << p.two << endl;
		return out;
	 }
	friend istream& operator >> (istream& in,  YM& p) {
		in >> p.one;
		in >> p.two;
		return in;
	}
};
class rabot {
	
public:
	
};
int main() {
	YM one(-5, 5);
	try {
		one.as();
	}
	catch (int) {
		cout << "You entered the wrong number" << endl;
		cin >> one;
	}
	//cin >> one;
	cout << one;

	cout << "proga otrabotala" << endl;
	
}