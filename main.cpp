#include <iostream>
using namespace std;
bool IsKPeriodic(string str, int K) //������� ��� �������� ������ �� ��������� ����� �
{
	for (int i = 0; i < str.size();) //������� ����, ������� ��� �� ���� ������
	{
		for (int j = 0; j < K; j++) //���������� ����, ������� ���������� ������� ������, ���-�� �������� � ������� ����� ����� � � ������ ��������, ������ ����� �
		{
			if (str[i++] != str[j]) //���� ������ �� ��������� - ������ ������ �� ������ ����� �
			{
				return false; //���������� false, ���� ������ �� ������ ����� �
			}
		}
	}
	return true; //���� ��� ������� ������, ������ �� ����� ����� � � �������� ���� �� ������ ����� ����� ����������, �� ���������� true
}
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "������� ������ ��� �������� �� ���������: " << endl;
	string stroka;
	cin >> stroka;
	int K;
	while (true)  //���� ��� ����������� �������, ��� � ������ 0
	{
		cout << "������� ����� ��� �������� ������ �� ��������� ����� �����: " << endl;
		cin >> K;
		try
		{
			if (!(K > 0))
			{
				throw "������, ����� ��������� ������ ���� ������ 0!";
			}

		}
		catch (const char* exception)
		{
			cout << exception << endl;
			continue;
		}
		break;
	}
	if (IsKPeriodic(stroka, K))
	{
		cout << "������ " << stroka << " ������ ����� " << K << endl;
	}
	else
	{
		cout << "������ " << stroka << " �� ������ ����� " << K << endl;
	}
}