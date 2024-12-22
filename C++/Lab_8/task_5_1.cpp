#include <iostream> // ����������� ���������� ��� �����-������
#include <forward_list> // ����������� ���������� ��� ������������� ������������ ������
using namespace std; // ������������� ������������ ���� std
void duplicate_first_positive(forward_list<double>& list) // ������� ��� ������������ ������� �������������� �������� � ������
{
	auto iter = list.begin(); // ������������� ��������� �� ������ ������
	while (iter != list.end()) // ���� �� ��������� ������
	{
		if (*iter > 0) // ��������, �������� �� ������� ������� �������������
		{
			list.insert_after(iter, *iter); // ������� ��������� �������� �������� ����� ����
			return; // ����� �� ������� ����� ������������ ������� �������������� ��������
		}
		++iter; // ������� � ���������� ��������
	}
}
void print_list(const forward_list<double>& list) // ������� ��� ������ ��������� ������
{
	for (double element : list) // ���� �� ��������� ������
	{
		cout << element << " "; // ����� �������� ��������
	}
	cout << endl; // ������� �� ����� ������ ����� ������ ���� ���������
}
int main() // ������� ������� ���������
{
	setlocale(LC_ALL, "RU"); // ��������� ������ ��� ����������� ����������� ������� ��������
	forward_list<double> list = { 1.5, 2.3, -3.7, 4.8 }; // ������������� ������ � ����������
	cout << "������ ������: "; // ����� ���������
	print_list(list); // ����� ������� ��� ������ ������
	duplicate_first_positive(list); // ����� ������� ��� ������������ ������� �������������� ��������
	cout << "������ ����� ������������ ������� �������������� ��������: "; // ����� ���������
	print_list(list); // ����� ������� ��� ������ ������ ����� ������������
}