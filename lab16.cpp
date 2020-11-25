﻿/*
Задание к теме 16.
1. Дано целое число N (> 0). Сформировать и вывести целочисленный массив размера N, содержащий N первых
положительных нечетных чисел: 1, 3, 5, . . . .
2. Дано целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии. Сформировать и
вывести массив размера N, содержащий N первых членов данной прогрессии: A, A·D, A·D2 , A·D3 , . . .
3. Даны целые числа N (> 2), A и B. Сформировать и вывести целочисленный массив размера N, первый элемент которого
равен A, второй равен B, а каждый последующий элемент равен сумме всех предыдущих
4. Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2,

*/
#include <iostream>
#include <math.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int n,a,d,b;
	cout << "1)Введите значение N: ";
	cin >> n;
	n++;
	int *m = new int[n];
	m[1] = 1;
	for (int i = 2; i < n; i++) {
		m[i] = m[i - 1] + 2;
	}
	for (int i = 1; i < n; i++) {
		cout << m[i]<<" ";
	}
	delete[] m;
	cout<<endl;
	int *N = new int[10];
	cout << "2)Введите целое число N (> 1), а также первый член A и знаменатель D геометрической прогрессии: ";
	cin >> n>> N[0]>>d;
	int pow = 1;
	for (int i = 1; i < n; ++i) {
		pow *= d;
		N[i] = N[0] * pow;
	}

	for (int i = 0; i < n; ++i) {
		cout << i << " " << N[i]<<endl;
	}
	delete[] N;

	cout << "3)Введите целые числа N (> 2), A и B: ";
	cin >> n;
	int *M = new int[n];
	cin  >> M[0] >> M[1];
	for (int i = 2; i < n; i++) {
		M[i] = 0;
		for (int i2 = 0; i2 < i; i2++) {
			M[i]= M[i] + M[i2];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << i << " " << M[i] << endl;
	}
	delete[] M;
	cout << "4)Введите число N - размер массива: ";
	cin >> n;
	int *A = new int[n];
	for (int i = 0; i < n; ++i) {
		cout << i + 1<<": ";
		cin >> A[i];
	}
	for (int i = 0; i < n / 2 + 1; i += 2) {
		cout<< A[i] << " ";
		if (i < n / 2) cout<< A[i + 1]<<" ";
		if (n - i - 1 > n / 2) cout << A[n - i - 1] << " ";
		if (n - i - 2 > n / 2) cout << A[n - i - 2] << " ";
	}

}
