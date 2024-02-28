#include <stdio.h>
#include <math.h>
#include <locale.h>

// Перечислимый тип для дней недели
enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// Перечислимый тип для месяцев
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// Функция для получения названия дня недели
const char* get_day_of_week(int day_number) {
    switch (day_number) {
    case MONDAY: return "Понедельник";
    case TUESDAY: return "Вторник";
    case WEDNESDAY: return "Среда";
    case THURSDAY: return "Четверг";
    case FRIDAY: return "Пятница";
    case SATURDAY: return "Суббота";
    case SUNDAY: return "Воскресенье";
    default: return "Некорректный номер дня недели";
    }
}

// Функция для получения названия месяца
const char* get_month(int month_number) {
    switch (month_number) {
    case JANUARY: return "Январь";
    case FEBRUARY: return "Февраль";
    case MARCH: return "Март";
    case APRIL: return "Апрель";
    case MAY: return "Май";
    case JUNE: return "Июнь";
    case JULY: return "Июль";
    case AUGUST: return "Август";
    case SEPTEMBER: return "Сентябрь";
    case OCTOBER: return "Октябрь";
    case NOVEMBER: return "Ноябрь";
    case DECEMBER: return "Декабрь";
    default: return "Некорректный номер месяца";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int day_number, month_number;

    // Ввод номера дня недели
    printf("Введите номер дня недели (1-7): ");
    scanf_s("%d", &day_number);

    // Ввод номера месяца
    printf("Введите номер месяца (1-12): ");
    scanf_s("%d", &month_number);

    // Вывод результата
    printf("День недели: %s\n", get_day_of_week(day_number));
    printf("Месяц: %s\n", get_month(month_number));

    return 0;
}