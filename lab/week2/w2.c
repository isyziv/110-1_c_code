#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct st
{
    int id;
    char name[100];
    double grad[100];
    double add;
    double total;
};
struct st student[100];
int main(void)
{
    int rank[100] = {-1};
    int i = 0, j = 0;
    scanf("%d", &i);
    scanf("%d", &j);
    double weight[100];
    for (int a = 0; a != j; a++)
    {
        scanf("%lf", &weight[a]);
    }
    for (int aa = 0; aa != i; aa++)
    {
        scanf("%d %s", &student[aa].id, &student[aa].name);
        for (int a = 0; a != j; a++)
        {
            scanf("%lf", &student[aa].grad[a]);
        }
    }
    for (int z = 0; z != i; z++)
    {
        student[z].total = 0;
        student[z].add = 0;
        for (int sub = 0; sub != j; sub++)
        {
            student[z].total += weight[sub] * (student[z].grad[sub]);
            student[z].add += student[z].grad[sub];
        }
        if (z == 0)
        {
            rank[0] = z;
        }
        else
        {
            for (int zz = 0; zz != z;)
            {
                if (student[z].total > student[rank[zz]].total)
                {
                    int swap, swap1;
                    swap1 = rank[zz];
                    rank[zz] = z;
                    zz++;
                    swap = rank[zz];
                    rank[zz] = swap1;
                    swap1 = swap;
                    for (; zz < z;)
                    {
                        zz++;
                        swap = rank[zz];
                        rank[zz] = swap1;
                        swap1 = swap;
                    }
                    zz = z;
                }
            }
        }
    }
    for (int loop = 0; loop < i; loop++)
    {
        int looop = loop + 1;
        printf("%d %d %s %.2lf %.2lf ", looop, student[rank[loop]].id, student[rank[loop]].name, student[rank[loop]].add, student[rank[loop]].total);
        for (int Loop = 0; Loop < j; Loop++)
        {
            printf("%.2lf ", student[rank[loop]].grad[Loop]);
        }
        printf("\n");
    }
    return 0;
}