#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, result, choice;
    char bo;

    menu:
    system("cls");
    printf("1: Multiplication table of any number \n");
    printf("2: Basic Calculator (Addition,Subtraction,Division,Multiplication \n");
    printf("3: Find Square of a number \n");
    printf("4: Find cube of a number \n");

    printf("\n Please Select The Number Task You Like To Perform \n");
    scanf("%d",&choice);

    switch(choice)
    {
     case 1:    {
        system("cls");
        printf("Enter the number for multiplication table: \n");
        scanf("%d", &n);
        for(i=1; i<=10; i++)
        {
        result = n * i ;
        printf("\n\t %d X %d = %d \n", n,i,result);
        }
        printf("\n press 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&bo);

        switch(bo){
        case 'm':
            goto menu;
        case 'M':
            goto menu;
        default:
            break;
        }
        system("cls");
        printf("\n\n\t\t T H A N K Y O U  F O R  U S I N G \n\n");
        printf("\n\n\t\t Designed By Arshil Sharma! \n\n\n");
        break;
     }

     case 2:{
         system("cls");
        char oper;
        float number_one, number_two, result;

    printf("\t\t\t B A S I C  C A L C U L A T O R \n\n");
    printf("\n\tPlease Enter (First Number) Operator(+,-,*,/) (Second Number) \n");
    printf("\tNote: Enter in correct order \n\n\n");

    scanf("%f %c %f", &number_one, &oper, &number_two);

    switch(oper)
    {
    case '+':
        result = number_one + number_two;
        break;
    case '-':
        result = number_one - number_two;
        break;
    case '*':
        result = number_one * number_two;
        break;
    case '/':
        result = number_one / number_two;
        break;

    default:
        printf("Please Enter Valid Operator");
        }

        printf("\n\n\t %.2f %c %.2f = %.2f \n\n", number_one, oper, number_two, result);

        printf("\n press 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&bo);

        switch(bo){
        case 'm':
            goto menu;
        case 'M':
            goto menu;
        default:
            break;
        }
        system("cls");
        printf("\n\n\t\t T H A N K Y O U  F O R  U S I N G \n\n");
        printf("\n\n\t\t Designed By Arshil Sharma! \n\n\n");
        break;
     }

        case 3: {
            system("cls");
            int no, cube;

            printf("\tPlease Enter The Number To Find Its Square\n");
            scanf("%d", &no);
            cube = no * no;
            printf("\n\n\tCube of %d is %d\n\n", no,cube);

            printf("\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&bo);

        switch(bo){
        case 'm':
            goto menu;
        case 'M':
            goto menu;
        default:
            break;
            }
        system("cls");
        printf("\n\n\t\t T H A N K Y O U  F O R  U S I N G \n\n");
        printf("\n\n\t\t Designed By Arshil Sharma! \n\n\n");
        break;

        }

        case 4: {
            system("cls");
            int no, cube;

            printf("\tPlease Enter The Number To Find Its Cube\n");
            scanf("%d", &no);
            cube = no * no * no;
            printf("\n\n\tCube of %d is %d\n\n", no,cube);

            printf("\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&bo);

        switch(bo){
        case 'm':
            goto menu;
        case 'M':
            goto menu;
        default:
           break;
        }
        system("cls");
        printf("\n\n\t\t T H A N K Y O U  F O R  U S I N G \n\n");
        printf("\n\n\t\t Designed By Arshil Sharma! \n\n\n");
        break;


    }

    }
    return 0;
}
