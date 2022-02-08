#include <stdio.h>
#include "atmcash.h"

int options()
{
    printf("*********Select an option displaying on the screen************\n\n\n");

    printf("                     < 1 > Balance Enquiry\n\n");
    printf("                     < 2 > Deposit Cash\n\n");
    printf("                     < 3 > Withdraw Cash\n\n");
    printf("                     < 4 > Exit\n\n\n");
    printf("                                                        HelpLine Number\n");
    return 0;

}


float balance_enquiry(float Balance)
{
    printf("                   ***************Available Balance is:  $%.2f\n\n",Balance);
    return Balance;
}

float depositcash(float Balance)
{
    float deposit;
    printf("                           *Enter money to be deposit:\n\n");
    scanf("%f",&deposit);

    Balance += deposit;
    printf("                          Your money is successfully deposit\n\n");
    printf("                           Your New Balance is: $%.2f\n\n",Balance);
    return Balance;

}



float withdrawcash(float Balance)
{
    float Withdraw;
    printf("                                      Enter a money to withdraw:\n\n");
    scanf("%f",&Withdraw);

 
    if(Balance>=Withdraw)
    {
        Balance=Balance-Withdraw;
        printf("                                 Please collect your money:\n\n");
        printf("                         Your remaining balance is: $%.2f\n\n",Balance);
        printf(                    "*******************Take your receipt!!************************\n\n");
        
    }
    else
    {
     printf("                                       Insufficient Funds\n\n");
      //  options();
    }
    return Balance;

}
int exit()
{
    
    printf("                                       Thank you forusing our ATM            \n\n");
    printf("                                       vist again have a nice day\n\n");
    return 0;
}


int errormessage()
{
    printf("                       ****************Please select a valid option******************\n\n");
    return 0;
}

