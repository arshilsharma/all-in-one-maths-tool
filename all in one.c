#include <stdio.h>
#include <conio.h>
#include <math.h>

int main()
{
    int i, n, result, choice;
    char backOption;

    menu:
    system("cls");
    printf("=======================================================================================================\n");
    printf("\n\n\t\t\t A L L    I N    O N E    T O O L\n\n\n");
    printf("=======================================================================================================\n");
    printf("\n\n");

    printf("  1: Multiplication table of any number \n");
    printf("  2: Basic Calculator (Addition,Subtraction,Division,Multiplication \n");
    printf("  3: Square of a number \n");
    printf("  4: Cube of a number \n");
    printf("  5: Power of a number \n");
    printf("  6: Area and Perimeter of a rectangle \n");
    printf("  7: Circumference and area of a circle \n");
    printf("  8: Calculate Simple Interest \n");
    printf("  9: Calculate Compound Interest \n");

    askagain:
    printf("\n\tPlease Select The Number Adjacent To Task You Like To Perform \n");
    scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        {
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
            scanf("%c",&backOption);

            switch(backOption){
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

        case 2:
        {
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
            scanf("%c",&backOption);

            switch(backOption){
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

        case 3:
        {
            system("cls");
            int no, square;

            printf("\tPlease Enter The Number To Find Its Square\n");
            scanf("%d", &no);
            square = no * no;
            printf("\n\n\tSquare of %d is %d\n\n", no,square);

            printf("\n\tpress 'M' to go back to main menu or any other key to exit \n");
            getchar();
            scanf("%c",&backOption);

            switch(backOption){
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


        case 4:
        {
            system("cls");
            int no, cube;

            printf("\tPlease Enter The Number To Find Its Cube\n");
            scanf("%d", &no);
            cube = no * no * no;
            printf("\n\n\tCube of %d is %d\n\n", no,cube);

            printf("\n\tpress 'M' to go back to main menu or any other key to exit \n");
            getchar();
            scanf("%c",&backOption);

            switch(backOption){
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


        case 5:
        {
        system("cls");
        int base, expo, power;

        printf("Please enter base: ");
        scanf("%d", &base);
        printf("Please enter exponent: ");
        scanf("%d", &expo);

        power = pow(base, expo);
        printf("\n\n\n%d to the power of %d = %d", base, expo, power);

        printf("\n\n\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&backOption);

            switch(backOption){
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

        case 6:
        {
        system("cls");
        float length, width, perimeter, area;

        printf("Enter length of the rectangle: ");
        scanf("%f", &length);
        printf("Enter width of the rectangle: ");
        scanf("%f", &width);

        perimeter = 2 * (length + width);
        area = length * width;

        printf("\n\n\nPerimeter of rectangle = %f units \nArea of rectangle = %f sq. units", perimeter ,area);

        printf("\n\n\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&backOption);

            switch(backOption){
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

        case 7:
        {
        system("cls");
        float radius, circumference, area;

        printf("Enter radius of circle: ");
        scanf("%f", &radius);

        circumference = 2 * 3.14 * radius;
        area = 3.14 * (radius * radius);

        printf("\n\n\nCircumference of circle = %.2f units \n", circumference);
        printf("Area of circle = %.2f sq. units ", area);

        printf("\n\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&backOption);

            switch(backOption){
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

        case 8:
        {
        system("cls");

        float principle, time, rate, SI;

        printf("Enter principle (amount in Rupees): ");
        scanf("%f", &principle);
        printf("Enter time (In Years): ");
        scanf("%f", &time);
        printf("Enter rate of Interest: ");
        scanf("%f", &rate);

        SI = (principle * time * rate) / 100;

        printf("\n\n\nSimple Interest = %f", SI);


        printf("\n\n\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&backOption);

            switch(backOption){
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


        case 9:
        {
        system("cls");

        float principle, time, rate, CI;

        printf("Enter principle (amount in Rupees): ");
        scanf("%f", &principle);
        printf("Enter time (In Years): ");
        scanf("%f", &time);
        printf("Enter rate of Interest: ");
        scanf("%f", &rate);


        CI = principle* (pow((1 + rate / 100), time));

        printf("\n\n\nCompound Interest = %f", CI);


        printf("\n\n\n\tpress 'M' to go back to main menu or any other key to exit \n");
        getchar();
        scanf("%c",&backOption);

            switch(backOption){
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

        default:
        {
            printf("\n\tPlease enter a valid input!\n");
            goto askagain;
        }

        } // main switch case ends here
    return 0;
}
