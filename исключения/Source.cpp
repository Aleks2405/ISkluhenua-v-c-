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
		
	 int as (){
		int z = one * two;
		if (one > 0 && two < 0 || one < 0 && two > 0) {
			throw - z;
		}
		else {
			return z;
		}
		
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
	
	one.as();
	cout << one.as() << endl;
	cout << one <<endl;

	cout << "proga otrabotala" << endl;
	
}