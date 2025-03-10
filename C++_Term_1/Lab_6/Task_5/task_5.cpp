#include <iostream> // ����������� ���������� ��� �����-������
using namespace std; // ������������� ������������ ���� std
struct Coordinates // ����������� ��������� Coordinates
{
	double x; // ���������� X
	double y; // ���������� Y
};
struct Circle // ����������� ��������� Circle
{
	double radius; // ������ ����������
	Coordinates center; // ����� ���������� (���������� X � Y)
};
void sort_circles(Circle circles[], int size) // ������� ��� ���������� ������� ����������� �� ����������� �������
{
	for (int i = 0; i < size - 1; ++i) // ������� ���� ��� ������� �� ���� ��������� �������
	{
		for (int j = 0; j < size - i - 1; ++j) // ���������� ���� ��� ��������� ��������� � �� ����������
		{
			if (circles[j].radius > circles[j + 1].radius) // ���� ������� ������ ������ ����������, ������ �� �������
			{
				Circle temp = circles[j]; // ��������� ���������� ��� �������� �������� ��������
				circles[j] = circles[j + 1]; // ������ ������� ������� �� ���������
				circles[j + 1] = temp; // ������ ��������� ������� �� ���������
			}
		}
	}
}
int main() // ������� ��� ���������� ������ �5
{
	setlocale(LC_ALL, "RUS"); // ��������� ������ ��� ����������� ����������� ������� ��������
	setlocale(LC_ALL, "RUS");
	Circle circles[10]; // ������ ��� �������� 10 �����������
	for (int i = 0; i < 10; ++i) // ���� ��� ����� ������ � ������ ����������
	{
		cout << "������� ���������� �� ���������� " << i + 1 << ":\n"; // ����� ������ ������� ����������
		cout << "������� ������ ����������: "; // ������ �� ���� �������
		cin >> circles[i].radius; // ���� �������
		cout << "������� ���������� X ������ ����������: "; // ������ �� ���� ���������� X ������
		cin >> circles[i].center.x; // ���� ���������� X ������
		cout << "������� ���������� Y ������ ����������: "; // ������ �� ���� ���������� Y ������
		cin >> circles[i].center.y; // ���� ���������� Y ������
		cout << endl; // ������� �� ����� ������
	}
	double sumRadius = 0.0; // ���������� ��� �������� ����� ��������
	for (int i = 0; i < 10; ++i) // ���� ��� ���������� ����� �������� ���� �����������
	{
		sumRadius += circles[i].radius; // ���������� ������� ������� ���������� � �����
	}
	cout << "����� �������� ���� �����������: " << sumRadius << "\n"; // ����� ����� ��������
	sort_circles(circles, 10); // ���������� ����������� �� ����������� �������
	cout << "\n��������������� ���������� �� ����������� �������:\n\n"; // ����� ��������� ��� ��������������� �����������
	for (int i = 0; i < 10; ++i) // ���� ��� ������ ���������� �� ��������������� �����������
	{
		cout << "���������� " << i + 1 << ": "; // ����� ������ ����������
		cout << "������: " << circles[i].radius; // ����� ������� ������� ����������
		cout << ", ����� (X: " << circles[i].center.x << ", Y: " << circles[i].center.y << ")\n"; // ����� ��������� ������ ������� ����������
	}
	return 0; // ������� 0, ����������� �� �������� ���������� ���������
}