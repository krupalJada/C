#include <stdio.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[10];
    int s1, s2, s3, total;
    float per;
};
int main()
{
    int i;
    struct student st[5];
    for (i = 0; i < 2; i++)
    {
        printf("Enter rollno:");
        scanf("%d",&st[i].roll_no);

        printf("Enter Name:");
        scanf("%s", &st[i].name);

        printf("Enter s1:");
        scanf("%d", &st[i].s1);

        printf("Enter s2:");
        scanf("%d", &st[i].s2);

        printf("Enter s3:");
        scanf("%d", &st[i].s3);
    };
    printf("\nStudent Marksheet");
    printf("\n\nRollno.\tName\ts1\ts2\ts3\ttotal\tper\tGrade\t");
    for (i = 0; i < 2; i++)
    {

        st[i].total = st[i].s1 + st[i].s2 + st[i].s3;
        st[i].per = st[i].total / 3;
        printf("\n%d\t%s\t%d\t%d\t%d\t%d\t%.2f", st[i].roll_no, st[i].name, st[i].s1, st[i].s2, st[i].s3, st[i].total, st[i].per);
        if (st[i].per>=90)
        printf("\t A");
    else if (st[i].per<90 && st[i].per>=75)
        printf("\t B");
    else if (st[i].per<75 && st[i].per>=60)
        printf("\t c");
    else if (st[i].per<60 && st[i].per>=35)
        printf("\t d");
    else
        printf("\t fail");
    }
    return 0;
}