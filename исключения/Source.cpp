  #include <iostream>
#include <fstream>
#include <string>
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
	void file(const char* part) {
		ofstream fout(part);
		//fout.open(part);
		if (!fout) {
			throw "File not opened!";
		}
		//fout.close();
	}
};

int main() {
	YM one(-5, 5);
	while (true) {
		try {
			one.as();
			break;
		}
		catch (int) {
			cout << "You entered the wrong number" << endl;
			cin >> one;
		}
	}
	cout << one.as() << endl;

	
}

	