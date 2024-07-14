#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void passen();
void pay();

int passengers=0, payment=0, bill=0;

int main()
{
   int option, i=1;
   srand(time(NULL));

   printf("\n\t\t**Welcome To NewLink Bus Service**\n  \t\t****Travel Fast With NBS****\n\n\n\n");



     start:
     printf("Select Your Route:\nPress\n1 for Lahore to Islamabad\n2 for Lahore to Karachi\n3 for Lahore to Quetta\n4 for Lahore to Peshawar \n(Press any other key to Exit)\n");
     scanf("%d", &option);

     switch (option)
{
     case 1:
   {
     printf("Lahore to Islamabad\nEconomy Class Ticket = Rs 2000 (Press 1 to Select)\nBusiness Class Ticket = Rs 3300 (Press 2 to Select)\n");
     scanf("%d", &option);
     if (option==1)
     {
        bill=2000;
     }
     else if (option==2)
     {
         bill= 3300;
     }
     else
      {
          printf("Invalid Key\n");
          goto start;
      }
   }
     break;
     case 2:
   {
     printf("Lahore to Karachi\nEconomy Class Ticket = Rs 4500 (Press 1 to Select)\nBusiness Class Ticket = Rs 6000 (Press 2 to Select)\n");
     scanf("%d", &option);
     if (option==1)
     {
        bill=4500;
     }
     else if (option==2)
     {
         bill= 6000;
     }
     else
      {
          printf("Invalid Key\n");
          goto start;
      }
   }
     break;
     case 3:
   {
     printf("Lahore to Quetta\nEconomy Class Ticket = Rs 6500 (Press 1 to Select)\nBusiness Class Ticket = Rs 7500 (Press 2 to Select)\n");
     scanf("%d", &option);
     if (option==1)
     {
        bill = 6500;
     }
     else if (option==2)
     {
         bill = 7500;
     }
     else
      {
          printf("Invalid Key\n");
          goto start;
      }
   }
     break;
     case 4:
   {
     printf("Lahore to Peshawar\nEconomy Class Ticket = Rs 5500 (Press 1 to Select)\nBusiness Class Ticket = Rs 6500 (Press 2 to Select)\n");
     scanf("%d", &option);
     if (option==1)
     {
        bill= 5500;
     }
     else if (option==2)
     {
         bill= 6500;
     }
     else
      {
          printf("Invalid Key\n");
          goto start;
      }
   }
     break;
     default:
     printf("Invalid Key!\a");
     return 0;
}
{

passen();
pay();

bill *= passengers;

int x = 1 + rand()%30;
printf("Your Seat number is\n");

for(i=1; i<=passengers; i++)
{
    printf("%d\n", x++);
}

}

printf("Your Total charges are Rs :%d\n\n", bill);
option++;

return 0;

}
/*main ends*/

void passen()
{
   up:
   printf("Enter Your Number of Passengers\n");
   scanf("%d", &passengers);
   if(passengers<0||passengers>30)
   {
       printf("Seat Limit EXCEEDED\n");
       goto up;
   }
}

void pay()
{
   printf("Select Your Payment Method:\n* Cash (1 to Select)\n* Credit/Debit Card (5 Percent Discount) (2 to Select)\n");
   scanf("%d", &payment);

if (payment==2)
{
    bill = bill - (5/(float)100)*bill;
}
if (payment!=2&&payment!=1)
{
  printf("Invalid Key!\n");
}
}
