#include <iostream>
#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <time.h>
using namespace std;

void main()
{

	setlocale(LC_ALL, "Rus");
	int tm, nz;
	do
	{
		system("cls");
		cout << "������� ����� �������: " << endl;
		cout << " ��� �� ����� ������� 1'" << endl;
		cin >> tm;
		switch (tm)
		{

		case 1:
		{
			/* �������� ���������� ���� �����������-���������� � ������ �� ���� 
			����� ������ � ������. ���������� ����� ������, ���������� ������ �����������*/
			int vidsport, bal = 0, res = 0, res1 = 0;

			for (int i = 1; i <= 2; i++)
			{
				system("cls");
				res = 0;
				res1 = 0;
				cout << "���� � " << i << ". ������� ���������� ����� � ������������: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "���� � " << i << ". ������� ���������� ����� � �����: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "���� � " << i << ". ������� ���������� ����� � �����: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "���� � " << i << ". ������� ���������� ����� � �����: ";
				cin >> bal;
				res += bal;
				res1 += bal;
				cout << "���� � " << i << ". ������� ���������� ����� � ���?�-���?���: ";
				cin >> bal;
				res += bal;
				res1 += bal;
			}
			cout << "���� � " << 1 << " ������ " << res << " ������" << endl;
			cout << "���� � " << 2 << " ������ " << res1 << " ������" << endl;
			system("pause");
		}
		break;

		case 2:
		{
			/* �������� ������ �� ������ ������� ������� ���� �������.
			���������� ������� ������ � ������ ������. ���������� �������� � ������ ������ ����������.*/
			int n = 10;
			int classA[] = { 4, 5, 4, 4, 3, 5, 3, 5, 3, 5 };
			int classB[] = { 4, 5, 5, 4, 3, 5, 5, 4, 5, 5 };
			float sumA = 0, sumB = 0;

			for (int i = 0; i < n; i++)
			{
				sumA += classA[i];
				sumB += classB[i];
			}

			cout << "� ������ A: " << (sumA / n) << endl;
			cout << "� ������ B: " << (sumB / n) << endl;
			system("pause");

		}
		break;

		case 3:
		{
			/*� ������� 12 �������. �������� ���������� ������� (� ������� �������) � 
			������� (� ��2) ������� ������. ���������� ������� ��������� ��������� �� ������� � �����.*/
			int nas, s;
			cout << "������� ��������� ��������� ����� ";

			cin >> nas;
			cout << "������� ������� ���������� ";
			cin >> s;
			cout << s / nas;
			system("PAUSE > NULL");
		}
		break;

		case 4:
		{
			/*� �������� ��������� �������� �����-�� ���������� �����������. ���������� ���������� ������������ ������ ����� ������:
			������� ������� �������� �������� �� ����, ������ ������� ������� ���������� � � ����� �������� ������� ������ �������� � ������ �������� �� ���,
			� ��� �� ��������� ������� ������� �����������.*/
			int age = 0;
			int maxAge = 0;
			int minAge = 100;
			int sum = 0;
			int average = 0;
			int amount = 0;

			cout << "������� ���������� ����� ���������� � ��������  : ";
			cin >> amount;

			for (int i = 0; i < amount; i++)
			{
				cout << "������� ������� " << i + 1 << "-�� ����������: ";
				cin >> age;

				if (age > maxAge)
					maxAge = age;
				if (age < minAge)
					minAge = age;

				sum += age;
			}

			average = sum / amount;

			cout << "������� ������� ���� �����������: " << average << endl;
			cout << "����� ��������: " << maxAge << endl;
			cout << "����� �������: " << minAge << endl;
			cout << endl;
			system("pause");
		}
		break;

		case 5:
		{
			/* �� ������ ������� ����������� ���������� ������ � �������� (� ����� ������� 15). ����� ���������� ������ ��� ��������,
			��������� ������������ ������, ������� ������ ��������� � ������ ������, �� ������ � ��� �����, ���� �� ���������� ����� � ��������.
			������������� ��� ������, ����� ������������ ����� ���������� ������ ������, ��� ���� �� ������.*/
			int boxWithApples = 15;
			int amountBoxesForSale = 0;

			cout << "������ �� ������ �������  " << boxWithApples << " ������ � ��������.\n\n";
			for (int i = 1; ; i++)
			{
				cout << "������� ������ ��������� � " << i << "-� ������? ";
				cin >> amountBoxesForSale;

				if (amountBoxesForSale > boxWithApples)
				{
					cout << "�� ������ ������������ ������!"<<endl;
					cout << "�������� ������ " << boxWithApples << " ������\n\n";
					i--;
				}
				else
				{
					boxWithApples -= amountBoxesForSale;
					cout << "�������� " << boxWithApples << " ������.\n";
				}

				if (boxWithApples == 0)
				{
					cout << "������ �����������! ����� �� ��������!\n";
					break;
				}
			}
			system("pause");
		}
		break;

		}


	} while (tm != 1);



}