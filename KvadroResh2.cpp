#include <TXLib.h>
#include <math.h>
int solver();

int main()
{
    printf("Добрый день! Вас приветствует решатор квадратных уравнений!\n");
    printf("Итак, квадратное уравнение имеет следующий вид:\n");
    solver();

    printf("\n\nВсего вам доброго!\n");

    return 0;
}

int solver()
{
    float a, b, c, d, x1, x2;

    printf("a*x^2 + b*x + c = 0\n\n");
    printf("Введите a:");
    scanf("%f", &a);
    if (a == 0) {
        printf("\aОшибка! При нулевом коэффиценте уравнение перестаёт быть квадратным!\n");
        printf("Попробуйте ввести \"a\" снова!\n");
        solver();
    }
    else {
        printf("Введите b:");
        scanf("%f", &b);
        printf("Введите c:");
        scanf("%f", &c);
        printf("\n");

        d = b * b - 4 * a * c;

        if (d < 0) {
            printf("\aОшибка! Уравнение не имеет решения в вещественных числах.\n");
            printf("Попробуйте снова!\n");
            solver();
        }
        else if (d == 0) {
            x1 = -b / (2 * a);
            if (x1 == 0)
                printf("x = 0");
            else
                printf("x = %.2f", x1);
        }
        else {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            printf("x1 = %.2f,\nx2 = %.2f", x1, x2);
        }
    }

    return 0;
}
