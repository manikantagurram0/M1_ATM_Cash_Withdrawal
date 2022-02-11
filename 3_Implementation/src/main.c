/**
 * @file main.c
 * @author your name Gurram Manikanta
 * @brief ATM Cash Withdrawal is utility project in which it defines user to how to withdraw money 
 * from atm machine,In this process it tells about the option which are we usually using in our daily 
 * life it has ability to deposit cash , withdraw cash and check the account balance.
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"atmcash.h"



extern int main_test();


int main()
{

//FILE*money;
main_test();
float Balance =25000;
/*money=fopen("./data.txt","rw");
fscanf(money,"%f",Balance);
fprintf(money,"%f",Balance);
fclose(money);*/
int opinion;
int choose;

//creating while loop to select options displayed on screen
  int True = 1;
while(True)
{
    printf("                                Hello\n\n");
    printf("**************************WELCOME TO ATM*********************\n\n");

     options();

     printf("  select a option:\n\n");
     scanf("%d",&opinion);



          switch (opinion)
          {
              case 1:
              balance_enquiry(Balance);
              
              break;

              case 2:
              {
              float deposit;
               printf("                  *************Enter money to be deposit:\n");


              scanf("%f",&deposit);
              deposit_cash(Balance ,deposit);
              
              
              break;
              }
              case 3:{
              float Withdraw;
              printf("                                      Enter a money to withdraw:\n\n");
              scanf("%f",&Withdraw);

             float rat=cash_withdraw(Balance, Withdraw);
             
              printf("%f your new balance",rat);
              
              break;
              }
              case 4:
              exitmenu();
              break;

              default:
              errormessage();
              break;
          }


          printf("************************************************************************************************\n\n");
          printf("                                   Would you like to do another transaction\n\n");
          printf("                                           < 1> Yes\n");
          printf("                                           < 2> No\n");
          scanf("%d",&choose);


          if(choose==2)
          {
            True=0;
            exitmenu();
          } 



         


}
         

}




