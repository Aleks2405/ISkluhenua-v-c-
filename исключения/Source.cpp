  #include <iostream>
#include <fstream>
using namespace std;
/*«адание 2.
—оздайте иерархию пользовательских классов-исключений.
¬ ней должны быть классы дл€ разных ситуаций. 
¬ качестве предметной области используйте ваши 
практические и домашние задани€. Ќапример, должны 
присутствовать классы дл€ обработки всевозможных 
математических ошибок, нехватки пам€ти, проблемам 
по работе с файлами и т.д.*/
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
		if (!fout)
			throw "File not opened!";
		
	}
};
int main() {
	//YM one(-5, 5);
	//try {
	//	one.as();
	//}
	//catch (int) {
	//		cout << "You entered the wrong number" << endl;
	//		cin >> one;
	//	}
	
	//one.as();
	//cout << one.as() << endl;
	rabot one;
	try {
		one.file("arr.txt");
	}
	catch (char*err) {
		cout << " fail netu" << endl;
	}


	cout << "proga otrabotala" << endl;
	
}
/*
#include <iostream>
#include <exception>

class A
{
public:
	void foo()
	{
		throw std::exception("Oops!");
	}
};

int main()
{
	try
	{
		A a;
		a.foo();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "tut" << std::endl;
	}
}*/