#include <stdio.h>
#include <math.h>

int main()
{
    printf("Please choose your desired product \n");
    printf(" 1 - Cola \n 2 - Sprite \n 3 - Pepsi \n 4 - Heavy Alcohol \n");
    int x, confirm;
    scanf("%d", &x); //customer's choice
/*    while (x == 1) or (x == 2) or (x == 3) or (x == 4)
    do
    { */
    if (x == 1)
            { 
                printf("Your choice is Cola \n");
                printf("Confirm? 0 - no, 1 - yes \n");
                scanf("%d", &confirm);
                if (confirm == 1)
                    printf("Your order is being processed \n");
                    else printf("Please choose your order again \n");
            }
        else if (x == 2)
            {
                printf("Your choice is Sprite \n");
                printf("Confirm? 0 - no, 1 - yes \n");
                scanf("%d", &confirm);
                if (confirm == 1)
                    printf("Your order is being processed \n");
                    else printf("Please choose your order again \n");
            }
        else if (x == 3)
        {
            printf("Your choice is Pepsi \n");
            printf("Confirm? 0 - no, 1 - yes \n");
            scanf("%d", &confirm);
            printf("You typed %d", &confirm);
            if (confirm == 1)
                printf("Your order is being processed \n");
                else printf("Please choose your order again \n"); 
        }
        else if (x == 4)
        {
            printf("Your choice is Heavy Alcohol \n");
            printf("Confirm? 0 - no, 1 - yes \n");
            scanf("%d", &confirm);
            if (confirm == 1)
                printf("Your order is being processed \n");
                else printf("Please choose your order again \n");
        }
        else printf("Invalid command");
 }
    
