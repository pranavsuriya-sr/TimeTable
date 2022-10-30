#include <stdio.h>
int num;
int class1(int days, int *ptr, int ti, int opt, int lunch)
{
    int i, k, n, check,j;
    struct subject
    {
        char arr[num][3];
        char teac[num][3];
    } s1;
    int num = *ptr;
    for (i = 0; i <= num - 1; i++)
    {
        printf("Enter the subject:");
        for(j = 0; j < 3; j++)
        {
            scanf(" %c", &s1.arr[i][j]);
        }
        printf("Enter the teacher name:");
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &s1.teac[i][j]);
        }
        printf("\n");
    }
    char b[num][3];
    char bt[num][3];
    n = days;
    printf("\n\n\tTime-Table\n\n");
    for (i = 0; i <= num; i++)
    {
        if (ti + i == lunch)
        {
            printf("|%d - %d lunch break ", ti + i, ti + i + 1);
        }
        else
        {
            printf("|%d - %d", ti + i, ti + 1 + i);
        }
    }
    printf("\n");
    check = 0;
    for (k = 0; k <= (opt * n) - 1; k++)
    {
        if (check == 0)
        {
            printf("section 1 :\n");
            check = 1;
        }
        for (i = 0; i < 3; i++)
        {
            b[0][i] = s1.arr[num - 1][i];
            bt[0][i] = s1.teac[num - 1][i];
        }
        for (i = 1; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                b[i][j] = s1.arr[i - 1][j];
                bt[i][j] = s1.teac[i - 1][j];
            }
        }
        for (i = 0; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%c", b[i][j]);
            }
            printf("(");
            for (j = 0; j < 3; j++)
            {
                printf("%c", bt[i][j]);
            }
            printf(")");
            printf(" ");
        }
        for (i = 0; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                s1.arr[i][j] = b[i][j];
                s1.teac[i][j] = bt[i][j];
            }
        }
        printf("\n");
    }
    return 0;
}
int class2(int days, int *ptr, int ti, int opt, int lunch)
{
    int i, k, n, check,j;
    struct subject
    {
        char arr[num][3];
        char teac[num][3];
    } s1;
    int num = *ptr;
    for (i = 0; i <= num - 1; i++)
    {
        printf("Enter the subject:");
        for(j = 0; j < 3; j++)
        {
            scanf(" %c", &s1.arr[i][j]);
        }
        printf("Enter the teacher name:");
        for (j = 0; j < 3; j++)
        {
            scanf(" %c", &s1.teac[i][j]);
        }
        printf("\n");
    }
    char b[num][3];
    char bt[num][3];
    n = days;
    printf("\n\n\tTime-Table\n\n");
    for (i = 0; i <= num; i++)
    {
        if (ti + i == lunch)
        {
            printf("|%d - %d lunch break ", ti + i, ti + i + 1);
        }
        else
        {
            printf("|%d - %d", ti + i, ti + 1 + i);
        }
    }
    printf("\n\n");
    check = 0;
    for (k = 0; k <= (opt * n) - 1; k++)
    {
        if ((opt * n) % 2 == 0)
        {
            if (k + 1 <= (opt * n / 2) && check == 0)
            {
                printf("section 1 : \n");
                check = 1;
            }
            else
            {
                if (k + 1 > (opt * n / 2) && check == 1)
                {
                    printf("section 2 : \n");
                    check = 0;
                }
            }
        }

        for (i = 0; i < 3; i++)
        {
            b[0][i] = s1.arr[num - 1][i];
            bt[0][i] = s1.teac[num - 1][i];
        }

        for (i = 1; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                b[i][j] = s1.arr[i - 1][j];
                bt[i][j] = s1.teac[i - 1][j];
            }
        }
        for (i = 0; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                printf("%c", b[i][j]);
            }
            printf("(");
            for (j = 0; j < 3; j++)
            {
                printf("%c", bt[i][j]);
            }
            printf(")");
            printf(" ");
        }
        for (i = 0; i <= num - 1; i++)
        {
            for (j = 0; j < 3; j++)
            {
                s1.arr[i][j] = b[i][j];
                s1.teac[i][j] = bt[i][j];
            }
        }
        printf("\n");
    }
    return 0;
}
int main()
{
    int days, i, k, ti, n, opt, check;
    int *ptr;
    printf("\n");
    printf("\t\tTimetable Generator\n\n");
    printf("Input the Number of Days:\t");
    scanf("%d", &days);
    printf("\nInput the Number of Periods:\t");
    scanf("%d", &num);
    printf("\nEnter your Start Time of School:");
    scanf("%d", &ti);
    printf("\nEnter the number of Sections:\t");
    scanf("%d", &opt);
    int lunch;
    printf("\nEnter the lunch time:\t\t");
    scanf("%d", &lunch);
    printf("\n\tInput subjects\n\n");
    ptr = &num;
    if (opt % 2 == 0)
    {
        class2(days, ptr, ti, opt, lunch);
    }
    else
    {
        class1(days, ptr, ti, opt, lunch);
    }
}
