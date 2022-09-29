#include<stdio.h>
#include"gotoxy.h"
#include<conio.h>

void counter(int,int);
int balance=100000;
int main()
{
    int i,j,k,a,b,amount,entered_PIN,REAL_PIN=1234,f,card_num=1234567899;
  for(k=2;k>1;k++)
   {gotoxy(40,5);
    printf("Welcome to the DIT UNIVERSITY ATM");
    gotoxy(40,6);
    printf("Please select your choice");
    gotoxy(40,7);
    printf("* Select 1 for Cash withdrawal");
    gotoxy(40,8);
    printf("* Select 2 for balance inquiry");
    gotoxy(40,9);
    printf("* Select 0 to exit\n");
    gotoxy(40,10);
    scanf("%d",&a);

     if(a==0)
        break;
    system("cls");
    switch(a)
    { case 1:gotoxy(40,5);
        printf("You have selected for cash withdrawal");
        gotoxy(40,6);
        printf("The denominations available are of 2000,1000 and 500 only");
        gotoxy(40,7);
        printf("Please enter the 10 digit number of your debit card--> ");
            scanf("%d",&i);
            if(i!=1234567899)
                { system("cls");
                 gotoxy(40,7);
                printf("Invalid card number, input the correct one again");
                getch();}
            else{
        system("cls");
        gotoxy(40,5);
        printf("Enter the amount you want to withdraw--> ");
        scanf("%d",&amount);
         if(amount>balance)
           {system("cls");
         gotoxy(40,5);
            printf("The entered amount has already exceeded the balance limit");
         gotoxy(40,6);
            printf("Enter the amount within the balance limit");
        gotoxy(40,7);
            printf("Press any key to return to menu screen");
            getch();}
         else{
        system("cls");
        gotoxy(40,6);
        for(j=1;j<=3;j++)
        { gotoxy(40,5);
          printf("Enter the secret four digit pin--> ");
        scanf("%d",&entered_PIN);
           if(entered_PIN==REAL_PIN)
               break;
             else
             {   system("cls");
                 gotoxy(40,6);
                 printf("The PIN was wrong so try again(Max %d more attempts to go)",3-j);
                continue;}
        }
        if(j<3)
            {system("cls");
            gotoxy(40,5);
            printf("Here is your amount %d",amount);
            counter(amount,balance);
            printf("Press any key to continue");
            getch();
            system("cls");
            gotoxy(40,5);
            printf("Thanks for visiting. Please do visit again have a nice day ");
            gotoxy(40,6);
            printf("Press any key to return to menu screen");
            getch();}
        else
             {system("cls");
            gotoxy(40,5);
            printf("Too much wrong attempts, thereby terminating the process and returning to menu screen");
            getch();}
            }
            }break;

     case 2: for(j=1;j<=3;j++)
        { gotoxy(40,5);
          printf("Enter the secret four digit pin--> ");
          scanf("%d",&entered_PIN);
           if(entered_PIN==REAL_PIN)
               break;
             else
             {   system("cls");
                 gotoxy(40,6);
                 printf("The PIN was wrong so try again(Max %d more attempts to go)",3-j);
                continue;}
        }
          if(j<3)
             {
              system("cls");
              gotoxy(40,6);
              printf("The available balance is %d",balance);
               gotoxy(40,7);
              printf("Press any key to return menu screen");
              getch();}
            else
             {system("cls");
             gotoxy(40,6);
             printf("The pin is incorrect get the correct one");
             gotoxy(40,7);
             printf("Press any key to continue to main screen");
              getch();}
              break;
      }
     system("cls");
    }
    gotoxy(40,5);
    printf("You have been exited");
    return(0);
}

void counter(int t,int p)
   {int u,v,w,x,y,z;
       u=t%2000;
       v=(t-u)/2000;
       w=u%1000;
       x=(u-w)/1000;
       y=w%500;
       z=(w-y)/500;
       gotoxy(40,6);
       printf("You will recieve %d notes of 2000, %d notes of 1000 and %d notes of 500",v,x,z);
       gotoxy(40,7);
       balance=balance-t;
      printf("Your available balance is %d",p-t);
       gotoxy(40,8);
   }


