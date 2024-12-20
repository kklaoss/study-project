#include <iostream> // ���������� ���������� ��� ������������� ������� �����-������
#include <cmath> // ���������� ���������� ��� ���������� �������������� ��������
using namespace std; // ����������� ������������ ��� std
double form(int n)
{
	double sign = 1.0 - 2.0 * (n % 2); // ���������� ����: 1 ��� ������ n, -1 ��� �������� n
	return sign * n / (n * n * n - n + 1); // ���������� �������� ����� ���� �� �������
}
double sum1(int n)
{
	double sum = 0.0; // �������������� ���������� sum ��� �������� �����
	for (int i = 1; i <= n; ++i) // ���� �� 1 �� n ��� ������������ ������ ����
	{
		sum += form(i); // ��������� i-� ���� ���� � �����
	}
	return sum; // ���������� �������� �����
}
double sum2(double eps)
{
	double sum = 0.0; // �������������� ���������� sum ��� �������� �����
	double term; // ��������� ���������� term ��� �������� �������� ����� ����
	int n = 1; // �������������� n ��� 1 ��� ������ ����������
	term = form(n); // ��������� ������ ���� ����
	while (fabs(term) >= eps) // ���� ������������, ���� ���������� �������� �������� ����� ������ ��� ����� eps
	{
		sum += term; // ��������� ������� ���� � �����
		n++; // ����������� n ��� �������� � ���������� ����� ����
		term = form(n); // ��������� ��������� ���� ����
	}
	return sum; // ���������� �������� �����
}
void f4_12(int n, double eps)
{
	cout << "\nThe sum of the first " << n << " members of the series: " << sum1(n);
	// ������� ����� ������ n ������ ����
	cout << "\nThe amount accurate to " << eps << ": " << sum2(eps) << endl;
	// ������� ����� � ���������, �������� ���������� eps
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
	case 412: f4_12(a, b); break; // ���� ����� ����� 412, ���������� ������� f4_12 � ���������� a, b
	default: cout << "The task was not found";
		// ���� ����� �����, ������� �� ������������� �� ����� ������, ��������� ��������� �� ������
	}
	return 0; // ������� 0
}