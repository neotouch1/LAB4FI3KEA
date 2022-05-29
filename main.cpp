#include<iostream>
#include "Vector.h"
#include "Matrix.h"

#include <time.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");

	TVector<int> v1, v2, v3;
	TMatrix<int> m1, m2, m3;

	int n;
	cout << "Выберете операцию:" << endl;
	cout << "1. Вектор + Вектор" << endl;
	cout << "2. Вектор - Вектор" << endl;
	cout << "3. Вектор * Вектор" << endl;
	cout << "4. Вектор / Вектор" << endl;
	cout << "5. Матрица + Матрица" << endl;
	cout << "6. Матрица - Матрица" << endl;
	cout << "7. Матрица * Матрица" << endl;
	cout << "8. Матрица * Вектор" << endl;
	cout << "9. Вектор * Матрица" << endl;
	cout << "Вы ввели: ";
	cin >> n;


	switch (n)
	{
	case (1):
		cout << "Внимание, длинывекторов должны быть одинаковы!" << endl;
		cin >> v1;
		cin >> v2;
		cout << v1 + v2;
		return 0;

	case(2):
		cout << "Внимание, длинывекторов должны быть одинаковы!" << endl;
		cin >> v1;
		cin >> v2;
		cout << v1 - v2;
		return 0;

	case(3):
		cout << "Внимание, длинывекторов должны быть одинаковы!" << endl;
		cin >> v1;
		cin >> v2;
		cout << v1 * v2;
		return 0;

	case(4):
		cout << "Внимание, длинывекторов должны быть одинаковы!" << endl;
		cin >> v1;
		cin >> v2;
		cout << v1 / v2;
		return 0;

	case(5):

		cin >> m1;
		cin >> m2;
		cout << m1 + m2;
		return 0;

	case(6):
	
		cin >> m1;
		cin >> m2;
		cout << m1 - m2;
		return 0;

	case(7):
	
		cin >> m1;
		cin >> m2;
		cout << m1 * m2;
		return 0;

	case(8):
		cout << "Внимание, higth = Length!" << endl;
		cin >> m1;
		cin >> v2;
		cout << m1 * v2;
		return 0;

	case(9):
		cout << "Внимание, higth = Length!" << endl;
		cin >> v2;
		cin >> m1;
		cout << v2 * m1;
		return 0;

	default:
		break;
	}

	return 0;
}