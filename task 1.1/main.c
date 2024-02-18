#include <stdio.h>
#include <math.h>

/**
 * @brief Функция расчета уравнения А
 * @param x - первый аргумент функции
 * @param y - второй аргумент функции
 * @param z - третий аргумент функции
 */
    double def_a(double x, double y, double z);

/**
 * @brief Точка входа в программу
 * @return 0 в случае успеха
 */

double def_b(double x, double y, double z);
/**
 * @brief Точка входа в программу
 * @return 0 в случае успеха
 */
int main()
{
    double x = 0.2;
    double y = 0.004;
    double z = 1.1;
    double a = def_a(x, y, z);
    double b = def_b(x, y, z);
    printf("a = %lf b = %lf", a, b);
    printf("x = %lf y = %lf z = %lf\n", x, y, z);

    return 0;
}

double def_a(double x, double y, double z)
{
    double a = pow(sin(pow(x, 2) + z), 2) - sqrt(x / y);
    return a;
}
double def_b(double x, double y, double z)
{
    double b = pow(x, 2) / z + cos(pow((x + y), 3));
    return b;
}