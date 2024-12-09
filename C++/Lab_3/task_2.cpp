#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
#include <math.h> // ���������� �������������� ���������� ��� ������������� �������������� �������
using namespace std; // ����������� ������������ ��� std
void f3_2(float a, float b, float n)
{
	// ���������, ��� n ������ 0 � a ������ b; ���� ���, ������� ��������� �� ������ � ������� �� �������
	if (n <= 0 || a >= b) {
		cout << "\nError: Make sure that n > 0 and a < b" << endl; // ��������� �� ������
		return; // ��������� ���������� �������
	}

	double step = (b - a) / (n - 1); // ��������� ��� ��� ���������[a, b] �� ������ n

	cout << "\n(t)\t(Y)" << endl; // ������� ��������� ��� ������� ��������

	for (int i = 0; i < n; ++i) { // ���� ��� ���������� � ������ �������� Y ��� ������� t � ���������
		double t = a + i * step; // ��������� ������� �������� t
		double Y = 4 * exp(-0.5 * t) * cos(t); // ��������� �������� Y �� �������� �������
		cout << t << "\t" << Y << endl; // ������� �������� t � Y � ������� �������
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
	case 32: f3_2(a, b, c); break; // ���� ����� ����� 32, ���������� ������� f3_2 � ���������� a, b, c
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}