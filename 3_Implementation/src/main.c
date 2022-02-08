/**
 * @file main.c
 * @author your name Gurram Manikanta
 * @brief 
 * @version 0.1
 * @date 2022-02-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include"atmcash.h"


int options(void);
float balance_enquiry(float Balance);
float depositcash(float Balance);
float withdrawcash(float Balance);
int exitmenu(void);
int errormessage(void);






int main()
{

//FILE*money;

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
              depositcash(Balance);
              
              
              break;

              case 3:
              withdrawcash(Balance);
              
              
              break;

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




