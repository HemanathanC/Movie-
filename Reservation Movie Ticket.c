#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int f,t,s;
char name[30],userid[100];
int phone,pass;
int movies();
int seats();
int login();
int costs();
void ticket();
void cancel();
void end();
int movie, seat, cost, price, id=34178;

void main()
{
    int ch;
    clrscr();
    printf("   ================================\n");
    printf("       \tMENU\t\n ");
    printf("   ================================\n");
    printf("     1. LOGIN\n");
    printf("     2. MOVIE SELECTION\n");
    printf("     3. SEATS SELECTION\n");
    printf("     4. PRICE\n");
    printf("     5. DISPLAY THE TICKET\n");
    printf("     6. CANCEL THE TICKET\n");
    printf("     7. Exit\n");
    printf("\n-----------------------------------------------------");

    do
    {
        printf("\nEnter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            printf("\n---------LOGIN----------");
            login();
            printf("\n_____________________________________________________");
            break;

        case 2:
            printf("\n---------MOVIE SELECTION----------");
            movie=movies();
            printf("\n_____________________________________________________");
            break;

        case 3:
            printf("\n---------SEAT SELECTION----------");
            seat=seats();
            printf("\n_____________________________________________________");
            break;

        case 4:
            printf("\n---------TICKET AMOUNT-----------");
            price=costs();
            printf("   \nTotal amount = %d",price);
            printf("\n_____________________________________________________");
            break;

        case 5:
            printf("\n---------MOVIE TICKET------------");
            ticket();
            printf("\n_____________________________________________________");
            break;

        case 6:
            printf("\n---------CANCEL THE TICKET----------");
            cancel();
            printf("\n_____________________________________________________");
            break;

        case 7:
            end();
        default:
            printf("\nChoice is not available");
            printf("\n_____________________________________________________");
            break;

        }
        printf("\n");

    }while(ch!=8);
    getch();
}
int seats()
{
    int n;
    printf("   \nEnter the number of seats:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("   \nEnter the seat number:");
        scanf("%d",&f);
        return n;
    }
    else
    {
        printf("   \nEnter the seat no’s:");
        printf("   From:");
        scanf("%d",&f);
        printf("   To:");
        scanf("%d",&t);
        return n;
    }
}
int login()
{
    printf("   \nEnter your id:");
    scanf("%s",&userid);
    printf("   \nEnter your password:");
    scanf("%d",&pass);
    printf("   \nEnter your name:");
    scanf("%s",&name);
    printf("   \nEnter your phone number:");
    scanf("%ld",&phone);
    return 0;
}

int costs()
{
    int cost,tot;
    cost=160;
    tot=cost*seat;
    return tot;
}
void ticket()
{
    printf("\n=============================");
    printf("\n|   -----MOVIE TICKET-----  |");
    printf("\n=============================");
    printf("\n   BOOKING ID: %d\n",id);
    printf("   NAME : %s\n",&name);
    printf("   MOVIE NAME: ");
    if(movie==1)
        printf("ADITYA VARMA\n");
    else if(movie==2)
        printf("ACTION\n");
    else if(movie==3)
        printf("DARBAR\n");
    else if(movie==4)
        printf("KAITHI\n");
    else if(movie==5)
        printf("FROZEN 2\n");

    printf("   DATE: %s",__DATE__);
    printf("\t\tSHOW TIME: %s\n",__TIME__);
    printf("\n   Hall no: 2");
    printf("\n   No of seats: %d\n",seat);

    if(seat==1)
        printf("   Seat no: %d\n",f);
    else
        printf("   Seats no: from %d  to %d\n",f,t);

    printf("   Amount is  %d\n",price);
}

void cancel()
{
    int password;
    char c;
    printf("\n   Please enter your password:");
    scanf("%d",&password);
    if(pass==password)
    {
        printf("\n   Do you wanna cancel your ticket?");
        printf("\n   Press y or n:");
        scanf("%c",c);
        if(c=='y')
            printf("\n    %s your ticket %d has been cancelled",name,id);
    }
    else
    {
        printf("\n   password is incorrect");
    }
}
int movies()
{
    int i;
    printf("\n   SELECT YOUR MOVIE\n");
    printf("   PRESS 1 FOR ADITYA VARMA\n");
    printf("   PRESS 2 FOR ACTION\n");
    printf("   PRESS 3 FOR DARBAR\n");
    printf("   PRESS 4 FOR KAITHI\n");
    printf("   PRESS 5 FOR FROZEN 2\n");
    scanf("%d",&i);
    return i;
}
void end()
{
    exit(0);
}