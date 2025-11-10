#include <stdio.h>
int main()
{
    int a[2][3], b[2][3], diff[2][3];
    int i, j;

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 2; i++)
        for (j = 0; j < 3; j++)
            diff[i][j] = a[i][j] - b[i][j];

    printf("\nSubtraction of the two matrices:\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }
    printf("mahir foysal");
    return 0;
}
