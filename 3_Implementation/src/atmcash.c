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
    return 6;

}


float balance_enquiry(float Balance)
{
    printf("                   ***************Available Balance is:  $%.2f\n\n",Balance);
    return Balance;
}

float deposit_cash(float Balance,float deposit)
{
    

    Balance += deposit;
    printf("                          Your money is successfully deposit\n\n");
    printf("                           Your New Balance is: $%.2f\n\n",Balance);
    return Balance;

}



float cash_withdraw(float Balance,float Withdraw)
{
   
 
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
int exitmenu()
{
    printf("********************************************************************************************************\n\n");
    printf("                                       Thank you for    using our ATM            \n\n");
    printf("                                       vist again have a nice day\n\n");
    return 7;
}


int errormessage()
{
    printf("                       ****************Please select a valid option******************\n\n");
    return 0;
}

