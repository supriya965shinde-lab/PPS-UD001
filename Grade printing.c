#include <stdio.h>

int main()
{
    int marks;

    printf("Enter Marks: ");
    scanf("%d", &marks);

    if(marks >= 75)
        printf("Grade A");
    else if(marks >= 60)
        printf("Grade B");
    else if(marks >= 50)
        printf("Grade C");
    else
        printf("Grade D");

    return 0;
}
