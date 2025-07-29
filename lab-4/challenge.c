#include <stdio.h>

int main (){

    int menu;
    int all_money = 0;
    
    do
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose an option:");
        scanf("%d", &menu);

        if(menu == 1){

            printf("Current Balance: %d\n", all_money);
        
        }
        
        if(menu == 2){

            int money ;
            printf("Enter amount to deposit:");
            scanf("%d",&money);
            all_money = all_money + money;
        }
        if(menu == 3){

            int money ;
            printf("Enter amount to withdraw:");
            scanf("%d",&money);
            printf("EWithdrawal successful.\n");
            all_money = all_money - money;
    }

    } while (menu != 4);
    printf("Thank you for using the ATM.");

    return 0;

}