#include<stdio.h>
void main()
{
    char gender; 
    int accBal, interest;

    printf("Enter Your Gender: \nPress 'm' for male\nPress 'f' for female\nPress 't' for other\n");
    scanf("%c", &gender);
    
    if(gender == 'm' || gender == 'f' || gender == 't' || gender == 'M' || gender == 'F' || gender == 'T'){
        if(gender == 'm' || gender == 'M'){
            printf("Enter acc bal: ");
            scanf("%d", &accBal);
                if(accBal>=5000){
                interest = accBal*2/100;
            printf("Your account Balance is %d and Interest is %d", accBal+interest, interest);
            } else 
                printf("Your balance was too low to get interest.");
        }
        else if(gender == 'f' || gender == 'F'){
            printf("Enter acc bal: ");
            scanf("%d", &accBal);
                if(accBal>=3000){
                interest = accBal*5/100;
            printf("Your account Balance is %d and Interest is %d", accBal+interest, interest);
            } else
            printf("Balance was too low to get interest.");
        }
        else if(gender == 't' || gender == 'T'){
            printf("Enter acc bal: ");
            scanf("%d", &accBal);
                if(accBal>=2000){
                interest = accBal*8/100;
                printf("Your account Balance is %d and Interest is %d", accBal+interest, interest);
            } else
            printf("Balance was too low to get interest.");
        }
    } else{
        printf("Invalid!!!");
    }
}