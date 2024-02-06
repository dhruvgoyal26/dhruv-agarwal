#include<stdio.h>
int main()
{
    int i,n;
    printf("no. of students:");
    scanf("%d",&n);
    char y[n][50];
    float mark[n];
    int r[n];
    for(i=0;i<n;i++)
    {
        printf("enter the roll no. of student %d:",i);
        scanf("%d",&r[i]);
        printf("enter the full name of student %d:",i);
        scanf("%s",&y[i]);
        printf("enter the marks of student:");
        scanf("%f",&mark[i]);
    }
    printf("\nStudent Name\troll no.\tmarks\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t%d\t%.2f\n",y[i],r[i],mark[i]);
    }
    return 0;
}