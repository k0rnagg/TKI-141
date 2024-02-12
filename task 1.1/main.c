#include <stdio.h>
#include <math.h>

/**
 * @brief ������� ������� ��������� �
 * @param x - ������ �������� �������
 * @param y - ������ �������� �������
 * @param z - ������ �������� �������
 */
    double def_A(double x, double y, double z);

/**
 * @brief ����� ����� � ���������
 * @return 0 � ������ ������
 */

double def_B(double x, double y, double z);
/**
 * @brief ����� ����� � ���������
 * @return 0 � ������ ������
 */
int main()
{
    double x = 0.2;
    double y = 0.004;
    double z = 1.1;
    double a = def_A(x, y, z);
    double b = def_B(x, y, z);
    printf("a = %lf b = %lf", a, b);
    printf("x = %lf y = %lf z = %lf\n", x, y, z);

    return 0;
}

double def_A(double x, double y, double z)
{
    double a = pow(sin(pow(x, 2) + z), 2) - sqrt(x / y);
    return a;
}
double def_B(double x, double y, double z)
{
    double b = pow(x, 2) / z + cos(pow((x + y), 3));
    return b;
}