#include <iostream> // ����������� ���������� ��� �����-������
using namespace std; // ������������� ������������ ���� std
int main() // ����������� ������� �1
{
	setlocale(LC_ALL, "rus"); // ��������� ������ ��� ����������� ����������� �������� �����
	int a, b; // ���������� ���������� a � b
	cout << "������� �������� ��� ���������� a � b:\n\n"; // ����� ��������� ��� ������������
	cout << "a = "; cin >> a; // ���� �������� ��� ���������� a
	cout << "b = "; cin >> b; // ���� �������� ��� ���������� b
	int* pa = &a; // ���������� ��������� pa � ��� ������������� ������� ���������� a
	int* pb = &b; // ���������� ��������� pb � ��� ������������� ������� ���������� b
	if (*pa > *pb) // ��������, ���� �������� �� ��������� pa ������ �������� �� ��������� pb
	{
		*pa *= 5; // ��������� �������� �� ��������� pa �� 5
		*pb -= 5; // ���������� �������� �� ��������� pb �� 5
	}
	if (*pa < *pb) // ��������, ���� �������� �� ��������� pa ������ �������� �� ��������� pb
	{
		*pa -= 5; // ���������� �������� �� ��������� pa �� 5
		*pb *= 5; // ��������� �������� �� ��������� pb �� 5
	}
	if (*pa == *pb) // ��������, ���� �������� �� ���������� pa � pb �����
	{
		cout << "\n(!): ���������� ������ ���� ������ �� ��������\n"; // ����� ��������� �� ������
		return; // ����� �� �������
	}
	cout << "\n���������� �� ������� ������� ������� ���������� � � b:\n\n"; // ����� ��������� ��� ������������
	cout << "a = " << a << endl; // ����� �������� ���������� a
	cout << "b = " << b << endl; // ����� �������� ���������� b
	return 0; // ������� 0, ����������� �� �������� ���������� ���������
}