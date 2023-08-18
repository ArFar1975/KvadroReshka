#include <stdio.h>
#include <limits.h>
#include <float.h>
int main()
{
    printf("%01000f,% -lld", 222.555555, (-1)*INT_MAX);

    return 0;
}
