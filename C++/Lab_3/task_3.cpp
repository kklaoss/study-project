#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
using namespace std; // ����������� ������������ ��� std
void f3_3()
{
	int num; // ���������� ��� �������� �������� �����
	int m1 = 0, m2 = 0; // ���������� ��� �������� ������� � ������� �� �������� �����
	cout << "\nEnter a sequence of natural numbers (0 to complete):" << endl; // ����������� ���� ������������������ ����������� �����
	while (true) // ����������� ���� ��� ����� �����
	{
		cin >> num; // ��������� �����
		if (num == 0) break; // ���������, �������� �� ����� 0 � ������� �� �����, ���� ������� 0
		if (num > m1) { // ���������, �������� �� ������� ����� ������ �����������
			m2 = m1; // ���������� ������������ ���������� ������
			m1 = num; // ��������� ���������� �����
		}
		else if (num > m2 && num != m2) { // ���������, ������ �� ����� m1 � ������ m2
			m2 = num; // ��������� ������ ���������� �����
		}
	}
	if (m2 == 0) { // ���������, ���� �� ������� ���� �� ���� ����������� �����
		if (m1 == 0) { // ���� ������ �� �������� ����� ����� 0, ������, ������ �� ���� �������
			cout << "\nNo natural numbers have been entered"; // ��������� �� ���������� ��������� �����
		}
		else { // ���� ������ �� �������� ����� �� ����� 0, ������, ������� ������ ���� �����
			cout << "\nThere is no second largest element"; // ��������� � ���, ��� ��� ������� �� �������� �����
		}
	}
	else { // ���� ������ �� �������� ����� ���� �������
		cout << "\nThe second largest element: " << m2; // ������� ������ �� �������� �����
	}
}
int main() // ������ �������� ������� ���������
{
	float a, b, c, d; // ���������� ���������� ��� �������� ��������
	cout << "Enter the variables:" << endl << " " << endl;  // ����� ��������� ��� ������������
	cout << "Variable 1 - "; cin >> a; // ������ ����� ������ ����������
	cout << "Variable 2 - "; cin >> b; // ������ ����� ������ ����������
	cout << "Variable 3 - "; cin >> c; // ������ ����� ������� ����������
	cout << "Variable 4 - "; cin >> d; // ������ ����� ��������� ����������
	int nomer; // ���������� ���������� ��� �������� ������ ������
	cout << " " << endl << "Specify the task number: "; cin >> nomer; // ������ ����� ������ ������ �� ������������
	switch (nomer) // ������������� ��������� switch ��� ������ ������ �� ������
	{
	case 33: f3_3(); break; // ���� ����� ����� 33, ���������� ������� f3_3 ��� ����������
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}