#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char USN[12];
    char name[20];
    int semester;
};

int main()
{
    int i=0,n=5,stFound=0;
    char usn[12];

    struct student *students;

    printf("Enter the no. of students in the list: ");
    scanf("%d",&n);

    students = (struct student*)malloc(n * sizeof(struct student));

    for(i=0;i<n;i++)
    {
        printf("Enter the student %d Details: \n",i+1);

        printf("USN: ");
        scanf("%s",students[i].USN);

        printf("Name: ");
        scanf("%s",students[i].name);

        printf("Semester: ");
        scanf("%d",&students[i].semester);
    }

    printf("Students Records:\n\n");

    for(i=0;i<n;i++)
    {
        printf("\tUSN=%s\n",students[i].USN);
        printf("\tName=%s\n",students[i].name);
        printf("\tSemester=%d\n",students[i].semester);
        printf("\n");
    }

    printf("Enter the USN to be searched for: ");
    scanf("%s",usn);

    for(i=0;i<n;i++)
    {
        if(!strcmp(usn,students[i].USN))
        {
            printf("\tstudent with USN=%s is(are)\n",students[i].USN);
            printf("\tUSN=%s\n",students[i].USN);
            printf("\tName=%s\n",students[i].name);
            printf("\tSemester=%d\n",students[i].semester);
            printf("\n");

            stFound=1;
        }
    }
    if(stFound==0)
    printf("\tThere is no student found with USN=%s\n",usn);
    
    return 0;
}
