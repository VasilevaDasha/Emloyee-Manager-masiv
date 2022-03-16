// сотрудник и менеджер массив.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
	string name;
	int hour;
	int rate;
public:
	void salary() {
		cout << "Salary:  " << hour * rate << endl;
	}
};

class Manager : public Employee {
public:
	double bonus;
public:
	void oplata() {
		cout << "Salary:  " << (hour * rate) + bonus << endl;
	}
};

int main() {
	int size, i;
	int s, g;

	cout << "Enter number of employes: ";
	cin >> size;

	Employee* mas = new Employee[size];

	for (i = 0; i < size; i++) {
		cout << i + 1 << "Employee" << endl;
		cout << "Name:  ";
		cin.ignore();
		getline(cin, mas[i].name);
		cout << "Hours:  ";
		cin >> mas[i].hour;
		cout << "Rate:  ";
		cin >> mas[i].rate;
	}
	for (i = 0; i < size; i++) {
		cout << "Name:  " << ' ' << mas[i].name << '  ';
		mas[i].salary();
	}
	
	cout << "Enter numbers of manager: ";
	cin >> s;
	Manager* mass = new Manager[s];

	for (g = 0; g < s; g++) {
		cout << g + 1 << "Manager" << endl;
		cout << "Name:  ";
		cin.ignore();
		getline(cin, mass[g].name);
		cout << "Hours:  ";
		cin >> mass[g].hour;
		cout << "Rate:  ";
		cin >> mass[g].rate;
		cout << "Bonus:  ";
		cin >> mass[g].bonus;
	}
	for (g = 0; g < s; g++) {
		cout << "Name:  " << ' ' << mass[g].name << '  ';
		mass[g].oplata();
	}

	return 0;
}