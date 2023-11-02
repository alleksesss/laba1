// 2 ������������ ������, 8 �������
// ��������� �������� �������� Y � �������
// �� ��������� � � ��������� �������

#include <iostream> //����������� �����-������

using namespace std; // ������������ ���� std

// ���������� ����������
double x, y;

void grafiki(double a)
{
    // �������� �� ����������� � ���������� ��������, ������� �������� Y

    if (a >= -10 && a < -6) // 1 �������� ��������
        y = sqrt(4 - pow((a + 8), 2)) - 2;

    else if (a < 2) // 2 �������� ��������
        y = 0.5 * a + 1;

    else if (a < 6) // 3 �������� ��������
        y = 0;

    else if (a <= 8) // 4 �������� ��������
        y = pow((a - 6), 2);

    if (a < -10 || a > 8)                                            // ��������, ��������� �� � � ��������� ����������
        cout << "X ��������� ��� ��������� ���������� �������� \n "; // ����� ��������� �� ������, � ��� ��������� ����������

    else
        cout << "��� X = " << x << ", �������� Y = " << y << "\n"; // ����� �������� Y, ��� ��������� �������� �
}

int main() // �������� ���� ���������
{
    setlocale(LC_ALL, "Russian"); // �����������

    for (x = -15; x <= 10; x++)
         grafiki(x);
}