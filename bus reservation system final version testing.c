#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

#define ENTER 13
#define TAB 9
#define BKSP 8
#define SPACE 32

void manager_login();
void customer();
void schedule();
void purchase();
void booking();
void cancel();
void design();
void contact_us();
void customer_info();
void income();
void read_bus_1();
void write_bus_1();
void view_bus_1();
void data_bus_1();
void read_bus_2();
void write_bus_2();
void view_bus_2();
void data_bus_2();
void read_bus_3();
void write_bus_3();
void view_bus_3();
void data_bus_3();

struct bus_1
{
    char date[15];
    char first_name[20];
    char last_name[200];
    char mobile[15];
    char leaving_from[15];
    char going_to[15];
    char time[10];
    char coach_type[10];
    int reservation_type;
    int price;
    int seat;
};
struct bus_1 root_1[100];

struct bus_2
{
    char date[15];
    char first_name[20];
    char last_name[20];
    char mobile[15];
    char leaving_from[15];
    char going_to[15];
    char time[10];
    char coach_type[10];
    int reservation_type;
    int price;
    int seat;
};
struct bus_2 root_2[100];

struct bus_3
{
    char date[15];
    char first_name[20];
    char last_name[200];
    char mobile[15];
    char leaving_from[15];
    char going_to[15];
    char time[10];
    char coach_type[10];
    int reservation_type;
    int price;
    int seat;
};
struct bus_3 root_3[100];

int i,m,x=0,amount,k=0,j,seat_booked,unavailable[30],a,s,reserve,seat;
char search[10],mobile[12],date[10];

int main()
{
      system("COLOR 3f");
      design();
      printf("\n\t\t\t\t\t\xb2\t\t\t\t\t\xb2");
      printf("\n\t\t\t\t\t\xb2\t Bus Reservation System\t\t\xb2");
      printf("\n\t\t\t\t\t\xb2\t\t\t\t\t\xb2");
      design();
      int a;
      printf("\n\n\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2 WELCOME TO Hanif Enterprise \xB2\xB2\xB2\xB2\xB2");
      printf("\n\n\n\n\t\t\t\t\t\t\t1.Schedule\n\n\t\t\t\t\t\t\t2.Customer\n\n\t\t\t\t\t\t\t3.Manager\n\n\t\t\t\t\t\t\t4.Contact Us\n\n\t\t\t\t\t\t\t5.Exit\n\n");
      printf("\n\nEnter your option:");
      scanf("%d",&a);
      system("cls");
      switch(a)
       {
          case 1:
           schedule();
           char store;
           printf("\n\n\n\n\nPress 'BACKSPACE' for going to menu");
           while(1)
             {
               store=getch();
               if(store==BKSP)
                 {
                    system("cls");
                    main();
                 }
             }
           break;
          case 2:
           customer();
           break;
          case 3:
           manager_login();
           break;
          case 4:
            contact_us();
            printf("\n\n\n\n\nPress 'BACKSPACE' for going to menu");
           while(1)
             {
               store=getch();
               if(store==BKSP)
                 {
                    system("cls");
                    main();
                 }
             }
           break;
            break;
          case 5:
            exit(0);
            break;
       }
  return 0;
 }
void manager_login()
{
      char username[100]="1";
      char password[100]="1";
      char pass_word[100],store,user_name[100];
      int i=0,c;
      printf("\n\n\t\t\t\t\t\t________LOG IN________");
      printf("\n\n\n\t\t\t\t\t\tUsername:");
      scanf("%s",user_name);
      printf("\n\n\t\t\t\t\t\tEnter password:");
           while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    pass_word[i]='\0';
                    break;
                 }
               else if(store==TAB||store==SPACE)
                 {
                    continue;
                 }
               else if(store==BKSP)
                 {
                   if(i>0)
                     {
                        i--;
                        printf("\b \b");
                     }
                 }
              pass_word[i]=store;
              i++;
              printf("*");
           }
          printf("\n\n");
          system("cls");
    if(strcmp(password,pass_word)==0 && strcmp(username,user_name)==0)
       {
           int c;
           printf("\n\t\t\t\t\t\t\tMANAGER\n\t\t\t\t\t\t\t");
           printf("_______");
           printf("\n\n\t\t\t\t\t\t1.Schedule\n\n\t\t\t\t\t\t2.Customer Information\n\n\t\t\t\t\t\t3.Profit\n\n");
           printf("\n\nChoose an option you want to Observe:");
           scanf("%d",&c);
           system("cls");
           if(c==1)
           {
             schedule();
             printf("\n\n\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
             scanf("%d",&s);
             system("cls");
             if(s==1)
             {
                 schedule();
             }
             else if(s==2)
             {
                 customer_info();
             }
             else if(s==3)
             {
                 income();
             }
             else
             {
                 main();
             }
           }
           else if(c==2)
           {
               customer_info();
           }
           else if(c==3)
           {
               income();
               printf("\n\n\n\t\t\t\t\t\t\t____Manager____\n\n\t\t\t\t\t\t\t1.Schedule\n\n\t\t\t\t\t\t\t2.Customer Information\n\n\t\t\t\t\t\t\t3.Profit");
               printf("\n\n\nEnter your choice:");
               scanf("%d",&c);
               if(c==1)
               {
                   schedule();
               }
               else if(c==2)
               {
                   customer_info();
               }
               else if(c==3)
               {
                   income();
               }
               else
               {
                    main();
               }
           }
           else
           {
               main();
           }
       }
    else
      {
        printf("\n\n\t\t\t\t\tUsername or Password is incorrect\n\n\t\t\t\t\t\t....TRY AGAIN....\n\n");
        manager_login();
      }
}

void schedule()
{
      printf("\n\t\tSerial\tLeaving from\tGoing to\t  Time\t\tCoach type\tPrice(BDT)\n");
      printf("\n\t\t  1\t  Dhaka\t\tJessor\t\t10:30 AM\tAC coach\t 1200");
      printf("\n\n\t\t  2\t  Dhaka\t\tRangpur\t\t11:00 PM\tAC coach\t 1000");
      printf("\n\n\t\t  3\t  DHAKA\t\tSHYLHET\t\t09:00 AM\tNON-AC coach\t 700");
   }

void customer()
{
   int c;
   printf("\n\n\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Customer \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
   printf("\n\n\n\n\t\t\t\t\t\t1.Purchase\n\t\t\t\t\t\t2.Booking\n\t\t\t\t\t\t3.Cancel ticket\n\t\t\t\t\t\t4.Back");
   printf("\n\nChoose Your Option:");
   scanf("%d",&c);
   system("cls");
   if(c==1)
   {
       purchase();
   }
   else if(c==2)
   {
       booking();
   }
   else if(c==3)
   {
       cancel();
   }
   else if(c==4)
   {
       main();
   }
   else
   {
       printf("This option is not exist...Please try again....");
       for(s=0;s<100;s++)
       {
           Sleep(200);
       }
       customer();
   }
}

void purchase()
{
    int c;
    reserve=1;
    schedule();
    printf("\n\n\n\nChoose a Serial Number:");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
          case 1:
            data_bus_1();
            break;
          case 2:
            data_bus_2();
            break;
          case 3:
            data_bus_3();
            break;
          default:
            printf("\n\nYou have entered wrong number....Please try again...");
            purchase();
    }
    char store;
           printf("\n\n\nPress 'ENTER' for going to Main Menu");
           while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    system("cls");
                    main();
                 }
             }
}

void booking()
{
    int c;
    reserve=0;
    schedule();
    printf("\n\n\n\nChoose a Serial Number:");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
          case 1:
            data_bus_1();
            break;
          case 2:
            data_bus_2();
            break;
          case 3:
            data_bus_3();
            break;
          default:
            printf("You have entered wrong number....Please try again...");
            booking();
    }
    char store;
           printf("\n\n\nPress 'ENTER' for going to Main Menu");
           while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    system("cls");
                    main();
                 }
             }
}
void cancel()
{
    int c,yes,count;
    char date[15],mobile[12];
    printf("\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\t\t\t\t\t\xb2\t\tROOT NAME  \t\t\xb2");
    printf("\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\n\n\t\t\t\t\t\t1.DHAKA-JESSOR Root-1\n\n\t\t\t\t\t\t2.DHAKA-RANGPUR Root-2\n\n\t\t\t\t\t\t3.DHAKA-SHYLHET Root-3\n\n");
    printf("\n\nChoose a Serial Number:");
    scanf("%d",&c);
    system("cls");
    printf("\n\n\t\t\t\t\t\tDate Formate(dd-mm-yyyy)");
    printf("\n\n\t\t\t\t\t\tEnter Journey Date:");
    scanf("%s",date);
    printf("\n\n\t\t\t\t\t\tYour Mobile Number:");
    scanf("%s",mobile);
    switch(c)
    {
        case 1:
            read_bus_1();
            printf("\n------------------------------------------------------------------------------------------------------------\n");
            printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
            printf("\n------------------------------------------------------------------------------------------------------------\n");
            for(i=0;i<x;i++)
            {
            if(strcmp(date,root_1[i].date)==0 && strcmp(mobile,root_1[i].mobile)==0)
            {
                count=i;
                printf("  %s\t\t",root_1[i].leaving_from);
                printf("%s\t\t",root_1[i].going_to);
                printf("%s\t",root_1[i].time);
                printf(" %d\t",root_1[i].seat);
                printf("%s\t",root_1[i].mobile);
                printf("%s %s\t\t",root_1[i].first_name,root_1[i].last_name);
                printf("%d\n",root_1[i].price);
                printf("\n\n\n\nFor canceling ticket press '1'...:");
                scanf("%d",&yes);
                if(yes==1)
                {
                for(i=count;i<x-1;i++)
                {
                    strcpy(root_1[i].date,root_1[i+1].date);
                    root_1[i].seat=root_1[i+1].seat;
                    strcpy(root_1[i+1].leaving_from,root_1[i+1].leaving_from);
                    strcpy(root_1[i].going_to,root_1[i+1].going_to);
                    strcpy(root_1[i].coach_type,root_1[i+1].coach_type);
                    strcpy(root_1[i].time,root_1[i+1].time);
                    root_1[i].reservation_type=root_1[i+1].reservation_type;
                    root_1[i].price=root_1[i+1].price;
                    strcpy(root_1[i].first_name,root_1[i+1].first_name);
                    strcpy(root_1[i].last_name,root_1[i+1].last_name);
                    strcpy(root_1[i].mobile,root_1[i+1].mobile);
                    write_bus_1();
               }
               x--;
               write_bus_1();
               system("cls");
               main();
              }
              else
              {
                system("cls");
                customer();
              }
            }
            }
            break;
        case 2:
            read_bus_2();
            printf("\n------------------------------------------------------------------------------------------------------------\n");
            printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
            printf("\n------------------------------------------------------------------------------------------------------------\n");
            for(i=0;i<x;i++)
            {
            if(strcmp(date,root_2[i].date)==0 && strcmp(mobile,root_2[i].mobile)==0)
            {
                count=i;
                printf("  %s\t\t",root_2[i].leaving_from);
                printf("%s\t\t",root_2[i].going_to);
                printf("%s\t",root_2[i].time);
                printf(" %d\t",root_2[i].seat);
                printf("%s\t",root_2[i].mobile);
                printf("%s %s\t\t",root_2[i].first_name,root_2[i].last_name);
                printf("%d\n",root_2[i].price);
                printf("\n\n\n\nFor canceling ticket press '1'...:");
                scanf("%d",&yes);
                if(yes==1)
                {
                for(i=count;i<x-1;i++)
                {
                    strcpy(root_2[i].date,root_2[i+1].date);
                    root_1[i].seat=root_1[i+1].seat;
                    strcpy(root_2[i+1].leaving_from,root_2[i+1].leaving_from);
                    strcpy(root_2[i].going_to,root_2[i+1].going_to);
                    strcpy(root_2[i].coach_type,root_2[i+1].coach_type);
                    strcpy(root_2[i].time,root_2[i+1].time);
                    root_2[i].reservation_type=root_2[i+1].reservation_type;
                    root_2[i].price=root_2[i+1].price;
                    strcpy(root_2[i].first_name,root_2[i+1].first_name);
                    strcpy(root_2[i].last_name,root_2[i+1].last_name);
                    strcpy(root_2[i].mobile,root_2[i+1].mobile);
                    write_bus_2();
               }
               x--;
               write_bus_2();
               system("cls");
               main();
              }
              else
              {
                system("cls");
                customer();
              }
            }
            }

            break;
        case 3:
            read_bus_3();
            printf("\n--------------------------------------------------------------------------------------------------------------\n");
            printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
            printf("\n--------------------------------------------------------------------------------------------------------------\n");
            for(i=0;i<x;i++)
            {
            if(strcmp(date,root_3[i].date)==0 && strcmp(mobile,root_3[i].mobile)==0)
            {
                count=i;
                printf("  %s\t\t",root_3[i].leaving_from);
                printf("%s\t\t",root_3[i].going_to);
                printf("%s\t",root_3[i].time);
                printf(" %d\t",root_3[i].seat);
                printf("%s\t",root_3[i].mobile);
                printf("%s %s\t\t",root_3[i].first_name,root_3[i].last_name);
                printf("%d\n",root_3[i].price);
                printf("\n\n\n\nFor canceling ticket press '1'...:");
                scanf("%d",&yes);
                if(yes==1)
                {
                for(i=count;i<x-1;i++)
                {
                    strcpy(root_3[i].date,root_3[i+1].date);
                    root_1[i].seat=root_1[i+1].seat;
                    strcpy(root_3[i+1].leaving_from,root_3[i+1].leaving_from);
                    strcpy(root_3[i].going_to,root_3[i+1].going_to);
                    strcpy(root_3[i].coach_type,root_3[i+1].coach_type);
                    strcpy(root_3[i].time,root_3[i+1].time);
                    root_1[i].reservation_type=root_3[i+1].reservation_type;
                    root_1[i].price=root_1[i+1].price;
                    strcpy(root_3[i].first_name,root_3[i+1].first_name);
                    strcpy(root_3[i].last_name,root_3[i+1].last_name);
                    strcpy(root_3[i].mobile,root_3[i+1].mobile);
                    write_bus_3();
               }
               x--;
               write_bus_3();
               system("cls");
               main();
              }
              else
              {
                system("cls");
                customer();
              }
            }
            }
            break;
        default:
            customer();
    }
    char store;
           printf("\n\n\nPress 'ENTER' for going to Main Menu");
           while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    system("cls");
                    main();
                 }
             }
}

void income()
{
    int c,total=0,profit,driver,stuffs,fuel;
    char store,date[15];
    printf("\n\n\t\t\t\t\t________Account Management________");
    printf("\n\n\n\t\t\t\t\t\t1.DHAKA-JESSOR Root-1\n\t\t\t\t\t\t2.DHAKA-RANGPUR Root-2\n\t\t\t\t\t\t3.DHAKA-SHYLHET Root-3\n\n");
    printf("\n\n\t\tChoose a Serial Number:");
    scanf("%d",&c);
    system("cls");
    printf("\n\n\t\t\t\t\tDate Formate(dd-mm-yyyy)");
    printf("\n\n\t\t\t\t\tJourney Date:");
    scanf("%s",date);
    printf("\n\t\t\t\t\tFees of Driver:");
    scanf("%d",&driver);
    printf("\n\t\t\t\t\tFees of Stuffs:");
    scanf("%d",&stuffs);
    printf("\n\t\t\t\t\tFuel  Cost:");
    scanf("%d",&fuel);
    printf("\n\n\n\n\t\t\t\t\t\tLoading.");
    for(s=0;s<20;s++)
    {
        printf(".");
        Sleep(50);
    }
    system("cls");
    printf("\n\n\t\t\t\t\t\t--------");
    printf("\n\t\t\t\t\t\t|Profit|");
    printf("\n\t\t\t\t\t\t--------");
    switch(c)
    {
    case 1:
        read_bus_1();
        for(i=0;i<x;i++)
        {
           if(root_1[i].reservation_type==1 && strcmp(date,root_1[i].date)==0)
           {
               total=total+root_1[i].price;
           }
        }
        break;
    case 2:
        read_bus_2();
        for(i=0;i<x;i++)
        {
           if(root_2[i].reservation_type==1 && strcmp(date,root_2[i].date)==0)
           {
               total=total+root_2[i].price;
           }
        }
        break;
    case 3:
        read_bus_3();
        for(i=0;i<x;i++)
        {
           if(root_3[i].reservation_type==1 && strcmp(date,root_3[i].date)==0)
           {
               total=total+root_3[i].price;
           }
        }
        break;
    default:
        printf("\n\n......Please Input a Correct Number.....\n...........Try Again............");
        for(s=0;s<20;s++)
        {
           printf("");
           Sleep(50);
        }
        income();
    }
        printf("\n\n\t\t\t\t\tTotal Income  : %d tk",total);
        printf("\n\n\t\t\t\t\tFees of Driver: %d tk",driver);
        printf("\n\n\t\t\t\t\tFees of staffs: %d tk",stuffs);
        printf("\n\n\t\t\t\t\tFuel  Cost    : %d tk",fuel);
        printf("\n\n");
        profit=total-driver-stuffs-fuel;
        printf("\n\n\t\t\t\t\tTotal Profit:   %d tk\n\n\n\n",profit);
        printf("\n\nPress 'ENTER' for going back to Manager Section...");
     while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    system("cls");
                     printf("\n\n\n\t\t\t\t____Manager____\n\n\t\t\t\t1.Schedule\n\t\t\t\t2.Customer Information\n\t\t\t\t3.Profit");
                     printf("\n\n\nEnter your choice:");
                     scanf("%d",&c);
                     if(c==1)
                     {
                        schedule();
                     }
                     else if(c==2)
                     {
                        customer_info();
                     }
                     else if(c==3)
                     {
                         income();
                     }
                     else
                     {
                         main();
                     }
                 }
             }
}
void data_bus_1()
{
    root_1[0].seat=0;
    char date[15],time[15]="10:30 AM",reservation[15],from[10]="DHAKA",to[10]="JESSOR",coach[10]="AC";
    read_bus_1();
    printf("\n\n\n\n\n\t\t\t\t\t\tHow many seat you want:");
    scanf("%d",&amount);
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tLoading.");
    for(s=0;s<20;s++)
    {
        printf(".");
        Sleep(50);
    }
    system("cls");
    if(x+amount>100)
        {
           x=0;
        }
    a=0;
    for(i=x;i<x+amount;i++)
    {
        read_bus_1();
        strcpy(root_1[i].leaving_from,from);
        strcpy(root_1[i].going_to,to);
        strcpy(root_1[i].coach_type,coach);
        strcpy(root_1[i].time,time);
        root_1[i].reservation_type=reserve;
        root_1[i].price=1000;
        printf("\n\n\n\t\t\t\t\tDate Format(dd-mm-yyyy)\n\n\t\t\t\t\tDate:");
        scanf("%s",date);
        printf("\n\t\t\t\t\tFirst Name:");
        scanf("%s",root_1[i].first_name);
        printf("\n\t\t\t\t\tLast Name:");
        scanf("%s",root_1[i].last_name);
        printf("\n\t\t\t\t\tMobile Number:");
        scanf("%s",root_1[i].mobile);
        system("cls");
        printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
        printf("\n\n Seat available:");
        k=0;
        for(j=1;j<=20;j++)
        {
            for(i=0;i<x+a;i++)
            {
                if(strcmp(date,root_1[i].date)==0 && root_1[i].seat==j)
                {
                    unavailable[k]=j;
                    k++;
                }
            }
        }

       k=0;

       for(j=1;j<=20;j++)
       {
             if(unavailable[k]==j)
             {
                k++;
             }
             else
             {
                printf("%d\t",j);
             }
             if(k==20)
             {
                 printf("The bus is booked...Please try another schedule..");
                  for(s=0;s<20;s++)
                  {
                     printf("");
                     Sleep(300);
                  }
                  system("cls");
                  customer();
             }
       }
        printf("\n\n\t\t\t===========Type only Numeric Number=============");
        printf("\n\nSeat Number:");
        scanf("%d",&seat_booked);

        for(j=1;j<=20;j++)
          {
              i=0;
              while(i<x+a)
              {
              if(strcmp(date,root_1[i].date)==0 && root_1[i].seat==seat_booked)
                {
                    printf("The seat is not available...Please try again...\n");
                    printf("\nSeat Number:");
                    scanf("%d",&seat_booked);
                    i=-1;
                    j=1;
                }
              else if(strcmp(date,root_1[i].date)==0 && seat_booked!=root_1[i].seat && seat_booked==j)
                {
                    seat_booked=j;
                }
                i++;
              }
          }
        root_1[i].seat=seat_booked;
        strcpy(root_1[i].date,date);
        write_bus_1();
        a++;
        system("cls");
    }
    if(reserve==1)
    {
    int c,card,pin;
    printf("\n\n\t\t\t\t\t   PAYMENT\n");
    printf("\t\t\t\t\t   _______");
    printf("\n\n\n\t\t\t\t\t1.Master Card\n\t\t\t\t\t2.Debit Card\n");
    printf("\n\nSelect Which One You Prefer:");
    scanf("%d",&c);
    system("cls");
    if(c==1)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else if(c==2)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else
    {
        x=x-amount;
        write_bus_1();
        main();
    }
    }
    x=i;
    write_bus_1();
    system("cls");
    printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER COPY \xB2\xB2\xB2\xB2\xB2\xB2");
   for(i=x-a;i<x+amount-a;i++)
   {
        printf("\n\n\n\t\t\t\t\tDeparture: %s\t\t",root_1[i].leaving_from);
        printf("Arrive: %s\t\t\n\n",root_1[i].going_to);
        printf("\t\t\t\t\tTime: %s\t\t\t",root_1[i].time);
        printf("Seat Number: %d\t\n\n",root_1[i].seat);
        printf("\t\t\t\t\tCoach-Type: %s\t\t\t",root_1[i].coach_type);
        if(root_1[i].reservation_type==1)
        {
            printf("Ticket Status: Purchased\n\n");
        }
        else{printf("Ticket Status: Booked\n\n");}
        printf("\t\t\t\t\tName: %s %s\t\t\n\n",root_1[i].first_name,root_1[i].last_name);
        printf("\t\t\t\t\tMobile Number: %s\t",root_1[i].mobile);
        printf("Ticket price: %d\n",root_1[i].price);
   }
}

void data_bus_2()
{
    root_2[0].seat=0;
    char date[15],time[15]="11:00 PM",reservation[15],from[10]="DHAKA",to[10]="RANGPUR",coach[10]="AC";
    read_bus_2();
    printf("\n\n\n\n\n\t\t\t\t\t\tHow many seat you want:");
    scanf("%d",&amount);
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tLoading.");
    for(s=0;s<20;s++)
    {
        printf(".");
        Sleep(50);
    }
    system("cls");
    if(x+amount>100)
        {
           x=0;
        }
    a=0;
    for(i=x;i<x+amount;i++)
    {
        read_bus_2();
        strcpy(root_2[i].leaving_from,from);
        strcpy(root_2[i].going_to,to);
        strcpy(root_2[i].coach_type,coach);
        strcpy(root_2[i].time,time);
        root_2[i].reservation_type=reserve;
        root_2[i].price=1000;
        printf("\n\t\t\t\t\tFormat(dd-mm-yyyy)\n\n\t\t\t\t\tDate:");
        scanf("%s",date);
        printf("\n\t\t\t\t\tFirst Name:");
        scanf("%s",root_2[i].first_name);
        printf("\n\t\t\t\t\tLast Name:");
        scanf("%s",root_2[i].last_name);
        printf("\n\t\t\t\t\tMobile Number:");
        scanf("%s",root_2[i].mobile);
        printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
        printf("\n\n Seat available:");
        k=0;
        for(j=1;j<=20;j++)
        {
            for(i=0;i<x+a;i++)
            {
                if(strcmp(date,root_2[i].date)==0 && root_2[i].seat==j)
                {
                    unavailable[k]=j;
                    k++;
                }
            }
        }

       k=0;

       for(j=1;j<=20;j++)
       {
           if(unavailable[k]==j)
             {
                k++;
             }
             else
             {
                printf("%d\t",j);
             }
             if(k==20)
             {
                 printf("The bus is booked...Please try another schedule..");
                  for(s=0;s<20;s++)
                  {
                     printf("");
                     Sleep(300);
                  }
                  system("cls");
                  customer();
             }
       }
        printf("\n\n\t\t\t===========Type only Numeric Number=============");
        printf("\nSeat Number:");
        scanf("%d",&seat_booked);

        for(j=1;j<=20;j++)
          {
              for(i=0;i<x+a;i++)
              {
              if(strcmp(date,root_2[i].date)==0 && root_2[i].seat==seat_booked)
                {
                    printf("The seat is not available...Please try again...\n");
                    printf("\nSeat Number:");
                    scanf("%d",&seat_booked);
                    i=-1;
                    j=1;
                }
              else if(strcmp(date,root_2[i].date)==0 && seat_booked!=root_2[i].seat && seat_booked==j)
                {
                    seat_booked=j;
                }
              }
          }
        root_2[i].seat=seat_booked;
        strcpy(root_2[i].date,date);
        write_bus_2();
        a++;
        system("cls");
    }
    if(reserve==1)
    {
        int c,card,pin;
    printf("\n\n\t\t\t\t\t   PAYMENT\n");
    printf("\t\t\t\t\t   _______");
    printf("\n\n\n\t\t\t\t\t1.Master Card\n\t\t\t\t\t2.Debit Card\n");
    printf("Select Which One You Prefer:");
    scanf("%d",&c);
    system("cls");
    if(c==1)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else if(c==2)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else
    {
        x=x-amount;
        write_bus_2();
        main();
    }
    }
    x=i;
    write_bus_2();
    system("cls");
    printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER COPY \xB2\xB2\xB2\xB2\xB2\xB2");
   for(i=x-a;i<x+amount-a;i++)
   {
        printf("\n\n\n\t\t\t\tDeparture: %s\t\t",root_2[i].leaving_from);
        printf("Arrive: %s\t\t\n\n",root_2[i].going_to);
        printf("\t\t\t\tTime: %s\t\t\t",root_2[i].time);
        printf("Seat Number: %d\t\n\n",root_2[i].seat);
        printf("\t\t\t\tCoach-Type: %s\t\t\t",root_2[i].coach_type);
        if(root_2[i].reservation_type==1)
        {
            printf("Ticket Status: Purchased\n\n");
        }
        else{printf("Ticket Status: Booked\n\n");}
        printf("\t\t\t\tName: %s %s\t\t\n\n",root_2[i].first_name,root_2[i].last_name);
        printf("\t\t\t\tMobile Number: %s\t",root_2[i].mobile);
        printf("Ticket price: %d\n\n\n\n",root_2[i].price);
   }
}

void data_bus_3()
{
    root_3[0].seat=0;
    char date[15],time[15]="09:00 AM",from[10]="DHAKA",to[10]="SHYLHET",coach[10]="NON-AC";
    read_bus_3();
    printf("\n\n\n\n\n\t\t\t\t\t\tHow many seat you want:");
    scanf("%d",&amount);
    system("cls");
    printf("\n\n\n\n\t\t\t\t\t\tLoading.");
    for(s=0;s<20;s++)
    {
        printf(".");
        Sleep(50);
    }
    system("cls");
    if(x+amount>100)
        {
           x=0;
        }
    a=0;
    for(i=x;i<x+amount;i++)
    {
       read_bus_3();
        strcpy(root_3[i].leaving_from,from);
        strcpy(root_3[i].going_to,to);
        strcpy(root_3[i].coach_type,coach);
        strcpy(root_3[i].time,time);
        root_3[i].reservation_type=reserve;
        root_3[i].price=700;
        printf("\n\t\t\t\tFormat(dd-mm-yyyy)\n\n\t\t\t\tDate:");
        scanf("%s",date);
        printf("\n\t\t\t\tFirst Name:");
        scanf("%s",root_3[i].first_name);
        printf("\n\t\t\t\tLast Name:");
        scanf("%s",root_3[i].last_name);
        printf("\n\t\t\t\tMobile Number:");
        scanf("%s",root_3[i].mobile);
        printf("\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
        printf("\n\n Seat available:");
        k=0;
        for(j=1;j<=20;j++)
        {
            for(i=0;i<x+a;i++)
            {
                if(strcmp(date,root_3[i].date)==0 && root_3[i].seat==j)
                {
                    unavailable[k]=j;
                    k++;
                }
            }
        }

       k=0;

       for(j=1;j<=20;j++)
       {
          if(unavailable[k]==j)
             {
                k++;
             }
             else
             {
                printf("%d\t",j);
             }
             if(k==20)
             {
                 printf("The bus is booked...Please try another schedule..");
                  for(s=0;s<20;s++)
                  {
                     printf("");
                     Sleep(300);
                  }
                  system("cls");
                  customer();
             }
       }
        printf("\n\n\t\t\t===========Type only Numeric Number=============");
        printf("\nSeat Number:");
        scanf("%d",&seat_booked);
        for(j=1;j<=20;j++)
          {
              i=0;
              while(i<x+a)
              {
              if(strcmp(date,root_3[i].date)==0 && root_3[i].seat==seat_booked)
                {
                    printf("The seat is not available...Please try again...\n");
                    printf("\nSeat Number:");
                    scanf("%d",&seat_booked);
                    i=-1;
                    j=1;
                }
              else if(strcmp(date,root_3[i].date)==0 && seat_booked!=root_3[i].seat && seat_booked==j)
                {
                    seat_booked=j;
                }
                i++;
              }
          }
        root_3[i].seat=seat_booked;
        strcpy(root_3[i].date,date);
        write_bus_3();
        a++;
        system("cls");
    }
    x=i;
        if(reserve==1)
    {
        int c,card,pin;
    printf("\n\n\t\t\t\t\t   PAYMENT\n");
    printf("\t\t\t\t\t   _______");
    printf("\n\n\n\t\t\t\t\t1.Master Card\n\t\t\t\t\t2.Debit Card\n");
    printf("Select Which One You Prefer:");
    scanf("%d",&c);
    system("cls");
    if(c==1)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else if(c==2)
    {
        printf("\n\n\t\t\t\tEnter Your master Card Number:");
        scanf("%d",&card);
        printf("\n\t\t\t\tPIN No. :");
        scanf("%d",&pin);
    }
    else
    {
        x=x-amount;
        write_bus_3();
        main();
    }
    }
    write_bus_3();
    system("cls");
    printf("\n\n\t\t\t\t\t\t\xB2\xB2\xB2\xB2\xB2\xB2 CUSTOMER COPY \xB2\xB2\xB2\xB2\xB2\xB2");
   for(i=x-a;i<x+amount-a;i++)
   {
        printf("\n\n\n\t\t\t\tDeparture: %s\t\t",root_3[i].leaving_from);
        printf("Arrive: %s\t\t\n\n",root_3[i].going_to);
        printf("\t\t\t\tTime: %s\t\t\t",root_3[i].time);
        printf("Seat Number: %d\t\n\n",root_3[i].seat);
        printf("\t\t\t\tCoach-Type: %s\t\t\t",root_3[i].coach_type);
        if(root_1[i].reservation_type==1)
        {
            printf("Ticket Status: Purchased\n\n");
        }
        else{printf("Ticket Status: Booked\n\n");}
        printf("\t\t\t\tName: %s %s\t\t\n\n",root_3[i].first_name,root_3[i].last_name);
        printf("\t\t\t\tMobile Number: %s\t",root_3[i].mobile);
        printf("Ticket price: %d\n\n\n\n",root_3[i].price);
   }
}

void customer_info()
{
    int c;
    printf("\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\t\t\t\t\t\xb2\t\tROOT NAME  \t\t\xb2");
    printf("\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\n\n\t\t\t\t\t\t1.DHAKA-JESSOR Root-1\n\n\t\t\t\t\t\t2.DHAKA-RANGPUR Root-2\n\n\t\t\t\t\t\t3.DHAKA-SHYLHET Root-3\n\n");
    printf("\n\nChoose a Serial Number:");
    scanf("%d",&c);
    system("cls");
    switch(c)
    {
        case 1:
            view_bus_1();
            break;
        case 2:
            view_bus_2();
            break;
        case 3:
            view_bus_3();
            break;
    }
    char store;
           printf("\n\n\nPress 'ENTER' for going to Manager");
           while(1)
             {
               store=getch();
               if(store==ENTER)
                 {
                    system("cls");
                    printf("\n\n\n\t\t\t\t\t\t____Manager____\n\n\t\t\t\t\t\t1.Schedule\n\t\t\t\t\t\t2.Customer Information\n\t\t\t\t\t\t3.Profit");
                    printf("\n\n\nEnter your choice:");
                    scanf("%d",&c);
                    if(c==1)
                    {
                        schedule();
                    }
                    else if(c==2)
                    {
                        customer_info();
                    }
                    else if(c==3)
                    {
                        income();
                    }
                    else
                    {
                        main();
                    }
                 }
             }
}

void view_bus_1()
{
    int c;
    char store;
    read_bus_1();
    printf("\n\t\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Customer Information \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\n\n\n\t\t\t\t\t\t1.Purchase \n\n\n\t\t\t\t\t\t2.Booking");
    printf("\n\n\nEnter your choice:");
    scanf("%d",&c);
    if(c==1)
    {
        reserve=1;
    }
    else if(c==2)
    {
        reserve=0;
    }
    else
    {
        system("cls");
        printf("Please enter the correct option.....\n\n\n\n");
        view_bus_1();
    }
    printf("\n\n\t\t\t\t\tDate Format(dd-mm-yyyy)");
    printf("\n\n\t\t\t\t\tJourney Date:");
    scanf("%s",search);
    printf("\n\n\n\n\t\t\t\t\t\tSearching.");
    for(s=0;s<20;s++)
    {
        printf(".");
        Sleep(50);
    }
    system("cls");
        printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_1[i].date)==0 && root_1[i].seat==j && root_1[i].reservation_type==reserve)
      {
        printf("  %s\t\t",root_1[i].leaving_from);
        printf("%s\t\t",root_1[i].going_to);
        printf("%s\t",root_1[i].time);
        printf(" %d\t",root_1[i].seat);
        printf("%s\t",root_1[i].mobile);
        printf("%s %s\t\t",root_1[i].first_name,root_1[i].last_name);
        printf("%d\n",root_1[i].price);
      }
    }
    }
   if(reserve==0)
   {
   printf("\n\nPress '1' for Purchase:");
   scanf("%d",&c);
   if(c==1)
   {
   printf("\n\nDate Formate(dd-mm-yy)");
   printf("Date:");
   scanf("%s",date);
   printf("\n\nMobile:");
   scanf("%s",mobile);
   system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_1[i].date)==0 && strcmp(mobile,root_1[i].mobile)==0 && root_1[i].reservation_type==0)
      {
        printf("  %s\t\t",root_1[i].leaving_from);
        printf("%s\t\t",root_1[i].going_to);
        printf("%s\t",root_1[i].time);
        printf(" %d\t",root_1[i].seat);
        printf("%s\t",root_1[i].mobile);
        printf("%s %s\t\t",root_1[i].first_name,root_1[i].last_name);
        printf("%d\n",root_1[i].price);
        printf("\n\n\nPress 'ENTER'.....\n");
        while(1)
        {
            store=getch();
               if(store==ENTER)
                 {
                    reserve=1;
                    break;
                 }
        }
        root_1[i].reservation_type=reserve;
        write_bus_1();
        system("cls");
        main();
      }
    }
    }
   }
   else
   {
       system("cls");
       printf("\n\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
       scanf("%d",&s);
       system("cls");
       if(s==1)
       {
           schedule();
       }
       else if(s==2)
       {
           customer_info();
       }
       else if(s==3)
       {
           income();
       }
       else
       {
            main();
       }
   }
   }
   printf("\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
   scanf("%d",&s);
   system("cls");
   if(s==1)
   {
       schedule();
   }
   else if(s==2)
   {
       customer_info();
   }
   else if(s==3)
   {
       income();
   }
   else
   {
       main();
   }
}

void view_bus_2()
{
    int c;
    char store;
    read_bus_2();
    printf("\n\t\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Customer Information \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\n\n\n\t\t\t\t\t\t1.Purchase \n\n\n\t\t\t\t\t\t2.Booking");
    printf("\n\n\nEnter your choice:");
    scanf("%d",&c);
    if(c==1)
    {
        reserve=1;
    }
    else if(c==2)
    {
        reserve=0;
    }
    else
    {
        system("cls");
        printf("Please enter the correct option.....\n\n\n\n");
        view_bus_2();
    }

    printf("Journey Date:");
    scanf("%s",search);
   printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_2[i].date)==0 && root_2[i].seat==j && root_2[i].reservation_type==reserve)
      {
        printf("  %s\t\t",root_2[i].leaving_from);
        printf("%s\t\t",root_2[i].going_to);
        printf("%s\t",root_2[i].time);
        printf(" %d\t",root_2[i].seat);
        printf("%s\t",root_2[i].mobile);
        printf("%s %s\t\t",root_2[i].first_name,root_2[i].last_name);
        printf("%d\n",root_2[i].price);
      }
    }
    }
   if(reserve==0)
   {
   printf("\n\nPress '1' for Purchase:");
   scanf("%d",&c);
   if(c==1)
   {
   printf("\n\nDate Formate(dd-mm-yy)");
   printf("Date:");
   scanf("%s",date);
   printf("\n\nMobile:");
   scanf("%s",mobile);
   system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_2[i].date)==0 && strcmp(mobile,root_2[i].mobile)==0 && root_2[i].reservation_type==0)
      {
        printf("  %s\t\t",root_2[i].leaving_from);
        printf("%s\t\t",root_2[i].going_to);
        printf("%s\t",root_2[i].time);
        printf(" %d\t",root_2[i].seat);
        printf("%s\t",root_2[i].mobile);
        printf("%s %s\t\t",root_2[i].first_name,root_2[i].last_name);
        printf("%d\n",root_2[i].price);
        printf("\n\n\nPress 'ENTER'.....\n");
        while(1)
        {
            store=getch();
               if(store==ENTER)
                 {
                    reserve=1;
                    break;
                 }
        }
        root_2[i].reservation_type=reserve;
        write_bus_2();
        system("cls");
        main();
      }
    }
    }
   }
   else{system("cls");
       printf("\n\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
       scanf("%d",&s);
       system("cls");
       if(s==1)
       {
           schedule();
       }
       else if(s==2)
       {
           customer_info();
       }
       else if(s==3)
       {
           income();
       }
       else
       {
            main();
       }
       }
   }
   printf("\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
   scanf("%d",&s);
   system("cls");
   if(s==1)
   {
       schedule();
   }
   else if(s==2)
   {
       customer_info();
   }
   else if(s==3)
   {
       income();
   }
   else
   {
       main();
   }
}

void view_bus_3()
{
    int c;
    char store;
    read_bus_3();
    printf("\n\t\t\t\t \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Customer Information \xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
    printf("\n\n\n\n\t\t\t\t\t\t1.Purchase \n\n\n\t\t\t\t\t\t2.Booking");

    printf("\n\n\nEnter your choice:");
    scanf("%d",&c);
    if(c==1)
    {
        reserve=1;
    }
    else if(c==2)
    {
        reserve=0;
    }
    else
    {
        system("cls");
        printf("Please enter the correct option.....\n\n\n\n");
        view_bus_3();
    }
    printf("Journey Date:");
    scanf("%s",search);
   printf("\n\t\t\t\t\t>>> Seat plan <<<\n");
        printf("\n");
        printf("\t\t\t\t\t[GATE]\t[DRIVER]\n");
        printf("\n");
        printf("\t\t\t\t\t[1]\t[11]\n");
        printf("\t\t\t\t\t[2]\t[12]\n");
        printf("\t\t\t\t\t[3]\t[13]\n");
        printf("\t\t\t\t\t[4]\t[14]\n");
        printf("\t\t\t\t\t[5]\t[15]\n");
        printf("\t\t\t\t\t[6]\t[16]\n");
        printf("\t\t\t\t\t[7]\t[17]\n");
        printf("\t\t\t\t\t[8]\t[18]\n");
        printf("\t\t\t\t\t[9]\t[19]\n");
        printf("\t\t\t\t\t[10]\t[20]\n\n\n");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_3[i].date)==0 && root_3[i].seat==j && root_3[i].reservation_type==reserve)
      {
        printf("  %s\t\t",root_3[i].leaving_from);
        printf("%s\t\t",root_3[i].going_to);
        printf("%s\t",root_3[i].time);
        printf(" %d\t",root_3[i].seat);
        printf("%s\t",root_3[i].mobile);
        printf("%s %s\t\t",root_3[i].first_name,root_3[i].last_name);
        printf("%d\n",root_3[i].price);
        printf("%s",root_3[i].reservation_type);
    }
    }
    }
   if(reserve==0)
   {
   printf("\n\nPress '1' for Purchase:");
   scanf("%d",&c);
   if(c==1)
   {
   printf("\n\nDate Formate(dd-mm-yy)");
   printf("Date:");
   scanf("%s",date);
   printf("\n\nMobile:");
   scanf("%s",mobile);
   system("cls");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    printf("Departure\tArrive\t\tTime\t\tSeat\t  Mobile  \t     Name    \t\tPrice");
    printf("\n-------------------------------------------------------------------------------------------------------\n");
    for(j=1;j<=20;j++)
    {
    for(i=0;i<x;i++)
    {
      if(strcmp(search,root_3[i].date)==0 && strcmp(mobile,root_3[i].mobile)==0 && root_3[i].reservation_type==0)
      {
        printf("  %s\t\t",root_3[i].leaving_from);
        printf("%s\t\t",root_3[i].going_to);
        printf("%s\t",root_3[i].time);
        printf(" %d\t",root_3[i].seat);
        printf("%s\t",root_3[i].mobile);
        printf("%s %s\t\t",root_3[i].first_name,root_3[i].last_name);
        printf("%d\n",root_3[i].price);
        printf("\n\n\nPress 'ENTER'.....\n");
        while(1)
        {
            store=getch();
               if(store==ENTER)
                 {
                    reserve=1;
                    break;
                 }
        }
        root_3[i].reservation_type=reserve;
        write_bus_3();
        system("cls");
        main();
      }
    }
    }
   }
   else{system("cls");
       printf("\n\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
       scanf("%d",&s);
       system("cls");
       if(s==1)
       {
           schedule();
       }
       else if(s==2)
       {
           customer_info();
       }
       else if(s==3)
       {
           income();
       }
       else
       {
            main();
       }
       }
   }
   printf("\n\nPress '1' for Schedule '2' for customer info '3' for Profit and '4' for main menu");
   scanf("%d",&s);
   system("cls");
   if(s==1)
   {
       schedule();
   }
   else if(s==2)
   {
       customer_info();
   }
   else if(s==3)
   {
       income();
   }
   else
   {
       main();
   }
}

void design()
{
    printf("\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2");
}
void contact_us()
{
    printf("\n\n\n\t\t...........................Please Contact us for any kind of help...................");
    printf("\n\n\t\t\t\t\tCounter Name: Main counter,Gabtoli Bus Stand");
    printf("\n\n\t\t\t\t\tManager: Shah Fahad Hossain");
    printf("\n\n\t\t\t\t\tMobile Number: 01521434780");
    printf("\n\n\t\t\t\t\tEmail: shah35-1996@diu.edu.bd");
}
void read_bus_1()
{
    FILE*bus_1;
    bus_1=fopen("bus1.txt","r");
    fread(&root_1,sizeof(root_1),1,bus_1);
    fclose(bus_1);

    FILE*counter;
    counter=fopen("counter.txt","r");
    fread(&x,sizeof(x),1,counter);
    fclose(counter);
}
void write_bus_1()
{
    FILE*bus_1;
    bus_1=fopen("bus1.txt","w");
    fwrite(&root_1,sizeof(root_1),1,bus_1);
    fclose(bus_1);

     FILE*counter;
    counter=fopen("counter.txt","w");
    fwrite(&x,sizeof(x),1,counter);
    fclose(counter);
}

void read_bus_2()
{
    FILE*bus_2;
    bus_2=fopen("bus2.txt","r");
    fread(&root_2,sizeof(root_2),1,bus_2);
    fclose(bus_2);

    FILE*counter2;
    counter2=fopen("counter2.txt","r");
    fread(&x,sizeof(x),1,counter2);
    fclose(counter2);
}
void write_bus_2()
{
    FILE*bus_2;
    bus_2=fopen("bus2.txt","w");
    fwrite(&root_2,sizeof(root_2),1,bus_2);
    fclose(bus_2);

    FILE*counter2;
    counter2=fopen("counter2.txt","w");
    fwrite(&x,sizeof(x),1,counter2);
    fclose(counter2);
}

void read_bus_3()
{
    FILE*bus_3;
    bus_3=fopen("bus3.txt","r");
    fread(&root_3,sizeof(root_3),1,bus_3);
    fclose(bus_3);

    FILE*counter3;
    counter3=fopen("counter3.txt","r");
    fread(&x,sizeof(x),1,counter3);
    fclose(counter3);
}
void write_bus_3()
{
    FILE*bus_3;
    bus_3=fopen("bus3.txt","w");
    fwrite(&root_3,sizeof(root_3),1,bus_3);
    fclose(bus_3);

    FILE*counter3;
    counter3=fopen("counter3.txt","w");
    fwrite(&x,sizeof(x),1,counter3);
    fclose(counter3);
}
