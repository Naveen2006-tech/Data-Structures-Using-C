#include <stdio.h>

void towers(int,char,char,char);

int main()
{
    int num;

    printf("Enter the number of Disks: ");
    scanf("%d",&num);
    printf("The Sequence of Moves Involved in the Tower of Hanoi are: \n");
    towers(num, 'A', 'B', 'C'); // A, B and C are names of pegs

    return 0;
}

void towers(int num, char frompeg, char topeg, char auxpeg)
    {
        if(num == 1)
        {
            printf("\n Move disk 1 from peg %c to peg %c", frompeg, topeg);
            return;
        }
        //Recursively calling function twice
        towers(num - 1, frompeg, auxpeg, topeg);
        printf("\n Move disk %d from peg %c to peg %c", num, frompeg, topeg);
        towers(num - 1, auxpeg, topeg, frompeg);
    }