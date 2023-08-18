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
    const double ERR = 0.1e5;
    double a, b, c, d, x1, x2;

    printf("a*x^2 + b*x + c = 0\n\n");
    printf("������� a:");
    scanf("%lf", &a);
    if (fabs(a) > ERR) {
        printf("������� b:");
        scanf("%lf", &b);
        printf("������� c:");
        scanf("%lf", &c);
        printf("\n");

        d = b * b - 4 * a * c;

        if (a < -ERR) {
            system("cls");
            printf("\a������! ��������� �� ����� ������� � ������������ ������.\n");
            printf("���������� �����!\n");
            solver();
        }
        else if (a > ERR) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %.4f,\nx2 = %.4f", x1, x2);
        }
        else {
            x1 = -b / (2 * a);
            if (fabs(x1) > ERR)
                printf("x = %.4f", x1);
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
