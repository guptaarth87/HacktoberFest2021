#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    int  num, i;
    printf("Enter the number to find the factors of :  "); 
    //scanf is a function which will take the input and will store in variable num
    scanf("%d",&num);
    printf("\n\n\nFactors of %d are \n\n", num);

    //looping from 1 to half of the input number
    for(i = 1; i <= num/2; i++)
    {
        if(num%i == 0)
            printf("\t\t\t%d\n", i);
    }

    printf("\n\n\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
