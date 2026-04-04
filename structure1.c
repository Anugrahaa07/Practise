#include<stdio.h>
struct personal
{
    char name[100];
    int date;
    char month[100];
    int year;
    float salary;
};
int main()
{
    struct personal person;
    
    printf("Enter the name of the person : ");
    scanf("%[^\n]s",person.name);
    printf("Enter the date,month and year of joining: ");
    scanf("%d %s %d",&person.date,person.month,&person.year);
    printf("Enter you salary: ");
    scanf("%f",&person.salary);
    printf("%s\t %d %s %d\t %f",person.name,person.date,person.month,person.year,person.salary);









    
}
