#include <stdio.h>
#include <math.h>
#include <locale.h>

// ������������ ��� ��� ���� ������
enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};

// ������������ ��� ��� �������
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

// ������� ��� ��������� �������� ��� ������
const char* get_day_of_week(int day_number) {
    switch (day_number) {
    case MONDAY: return "�����������";
    case TUESDAY: return "�������";
    case WEDNESDAY: return "�����";
    case THURSDAY: return "�������";
    case FRIDAY: return "�������";
    case SATURDAY: return "�������";
    case SUNDAY: return "�����������";
    default: return "������������ ����� ��� ������";
    }
}

// ������� ��� ��������� �������� ������
const char* get_month(int month_number) {
    switch (month_number) {
    case JANUARY: return "������";
    case FEBRUARY: return "�������";
    case MARCH: return "����";
    case APRIL: return "������";
    case MAY: return "���";
    case JUNE: return "����";
    case JULY: return "����";
    case AUGUST: return "������";
    case SEPTEMBER: return "��������";
    case OCTOBER: return "�������";
    case NOVEMBER: return "������";
    case DECEMBER: return "�������";
    default: return "������������ ����� ������";
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    int day_number, month_number;

    // ���� ������ ��� ������
    printf("������� ����� ��� ������ (1-7): ");
    scanf_s("%d", &day_number);

    // ���� ������ ������
    printf("������� ����� ������ (1-12): ");
    scanf_s("%d", &month_number);

    // ����� ����������
    printf("���� ������: %s\n", get_day_of_week(day_number));
    printf("�����: %s\n", get_month(month_number));

    return 0;
}