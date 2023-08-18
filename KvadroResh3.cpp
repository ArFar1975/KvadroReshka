#include <TXLib.h>
#include <math.h>
int solver();

int main()
{
    printf("������ ����! ��� ������������ ������� ���������� ���������!\n");
    printf("����, ���������� ��������� ����� ��������� ���:\n");
    solver();

    printf("\n\n����� ��� �������!\n");

    return 0;
}

int solver()
{
    double a, b, c, d, x1, x2;

    printf("a*x^2 + b*x + c = 0\n\n");
    printf("������� a:");
    scanf("%lf", &a);
    if (a < 0 || a > 0) {
        printf("������� b:");
        scanf("%lf", &b);
        printf("������� c:");
        scanf("%lf", &c);
        printf("\n");

        d = b * b - 4 * a * c;

        if (d < 0) {
            system("cls");
            printf("\a������! ��������� �� ����� ������� � ������������ ������.\n");
            printf("���������� �����!\n");
            solver();
        }
        else if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %.2f,\nx2 = %.2f", x1, x2);
        }
        else {
            x1 = -b / (2 * a);
            if (x1 < 0 || x1 > 0)
                printf("x = %.2f", x1);
            else
                printf("x = 0");
        }
    }
    else {
        printf("\a������! ��� ������� ����������� ��������� �������� ���� ����������!\n");
        printf("���������� ������ \"a\" �����!\n");
        solver();
    }

    return 0;
}
