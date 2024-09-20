#include<stdio.h>


int main()
{
    int v,quantity,net=0,i,j;

    cgt:
    printf("WELCOME TO DEVISURESH HOTEL'S CAKE CORNER");


    smp:
    printf("\n\n\t CAKE MENU:");
    printf("\n\n\t\t 1.MANGO         : 200Rs/kg");
    printf("\n\t\t 2.VANILLA       : 230Rs/kg");
    printf("\n\t\t 3.DARK FOREST   : 340Rs/kg");
    printf("\n\t\t 4.STRAW BERRY   : 250Rs/kg");
    printf("\n\n\t ENTER YOUR  VALUE : ");
    scanf("%d", &v);
    switch(v)
    {
    case(1):
    printf("\nselect your quantity(kg) : ");
    scanf("%d", &quantity);
    net=net+(quantity*200);
    break;

    case(2):
    printf("\nselect your quantity(kg) : ");
    scanf("%d",&quantity);
    net=net+(quantity*230);
    break;

    case(3):
    printf("\nselect your quantity(kg) : ");
    scanf("%d",&quantity);
    net=net+(quantity*340);
    break;

    case(4):
    printf("\nselect your quantity(kg) : ");
    scanf("%d",&quantity);
    net=net+(quantity*250);
    break;
}
    printf("Do you want to continue? \n press {1 for Yes,0 for No} ");
    scanf("%d", &i);

    if(i == 1)
    {
        goto smp;
    }


        printf("\nTotal Amount : %d/-Rs", net);
        printf("\n\nThank you for visiting DeviSuresh hotel!\n");

        printf("\nshow menu? yes(1) no(0)");
        scanf("%d",&j);

        if(j == 1)
        {
            goto cgt;
        }

        return 0;

}


