#include "person.h"
#include <string>
#include <iostream>
using namespace std;
class person{
public:
	string name;
	int age;
	bool isalive;
	void talk(){
		cout << "hello world" << endl;
	}
	void sleep(){
		cout << "zzz" << endl;
	}
};
int main(){
	person p1 = { "ġ��", 20 };
	int a;
	cout << p1.name << ' ' << p1.age << endl;
	cout << "1 - ��Ƴ� ,  2 - ��" << endl;
	cin >> a;
	if (a == 1)
		p1.isalive = true;
	else
		p1.isalive = false;
	if (p1.isalive == true)
	{
		p1.talk();
	}
	else if(p1.isalive == false)
	{
		p1.sleep();
	}
	return 0;
}