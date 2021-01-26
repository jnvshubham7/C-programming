#include <stdio.h>
#include <string.h>
#include <limits.h>

int main()
{
    struct student
    {
        char name[50];
        char branch[5];
        int rollno;
        int rank;
    } it[50], ece[50];

    int it_min = 0, it_max = 0, ece_min = 0, ece_max = 0;
    for (int i = 0; i < 50; i++)
    {
        strcpy(it[i].branch, "IT");
        printf("Enter name, roll and rank for IT! ");
        scanf("%s %d %d", it[i].name, &it[i].rollno, &it[i].rank);

        if (it[i].rank < it[it_min].rank)
            it_min = i;
        if (it[i].rank > it[it_max].rank)
            it_max = i;
    }
    for (int i = 0; i < 50; i++)
    {
        strcpy(ece[i].branch, "ECE");
        printf("Enter name, roll and rank for ECE! ");
        scanf("%s %d %d", ece[i].name, &ece[i].rollno, &ece[i].rank);

        if (ece[i].rank < ece[ece_min].rank)
            ece_min = i;
        if (ece[i].rank > ece[ece_max].rank)
            ece_max = i;
    }

    printf("%s %d %s %d (student with highest rank in IT)\n", it[it_max].name, it[it_max].rollno, it[it_max].branch, it[it_max].rank);
    printf("%s %d %s %d (student with lowest rank in IT)\n", it[it_min].name, it[it_min].rollno, it[it_min].branch, it[it_min].rank);
    printf("%s %d %s %d (student with highest rank in ECE)\n", ece[ece_max].name, ece[ece_max].rollno, ece[ece_max].branch, ece[ece_max].rank);
    printf("%s %d %s %d (student with lowest rank in ECE)\n", ece[ece_min].name, ece[ece_min].rollno, ece[ece_min].branch, ece[ece_min].rank);
}