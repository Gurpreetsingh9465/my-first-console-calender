#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
void calender();
int year=2017,month=1;
main()
{
    cout<<"use w and s to change year from and a and d to change month\n and press e to exit\n";
    while(1)
    {
        calender();
    int x=getch();
    if(x=='w')
        year++;
    else if(x=='s')
         year--;
    else if(x=='a')
    {
        if(month>=1&&month<=12)
        month--;
        else
        {cout<<"invalid input"; year--; month=12;}
    }
    else if(x=='d')
          {
        if(month>=1&&month<=12)
        month++;
        else
       {

        cout<<"invalid input";year++; month=1;}
    }

    else
       exit(0);
    system("cls");
    }

}
void calender()
{
    int extra=0;
    cout<<"\t\t "<<year<<endl;
    if(month==1)
    cout<<"\t\t JANUARY"<<endl;
    else if(month==2)
    cout<<"\t\t FEBREURY"<<endl;
    else if(month==3)
    cout<<"\t\t MARCH"<<endl;
    else if(month==4)
    cout<<"\t\t APRIL"<<endl;
    else if(month==5)
    cout<<"\t\t MAY"<<endl;
    else if(month==6)
    cout<<"\t\t JUNE"<<endl;
    else if(month==7)
    cout<<"\t\t JULY"<<endl;
    else if(month==8)
    cout<<"\t\t AUGUST"<<endl;
    else if(month==9)
    cout<<"\t\t SEPTEMBER"<<endl;
    else if(month==10)
    cout<<"\t\t OCTOBER"<<endl;
    else if(month==11)
    cout<<"\t\t NOVEMBER"<<endl;
    else if(month==12)
    cout<<"\t\t DECEMBER"<<endl;


    for(int i=1900;i<year;i++)
        {
            if(i%4==0&&(i%100!=0||i%400==0))
            extra++;
        }
    int day;
    day=(extra+year-1900)%7;
    for(int i=1;i<month;i++)
    {
        if(i==2)
           {
        if(year%4==0)
                day=day+29;
        else
                day=day+28; }
        else if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            day=day+31;
        else if(i==4||i==6||i==9||i==11)
                day=day+30;
    }
    day=day%7;
    printf("MON\tTUES\tWED\tTHURS\tFRI\tSAT\tSUN\n");
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
        for(int j=1;j<=day;j++)
            {
               printf(" \t");
            }
        for(int i=1;i<=31;i++)
    {
        printf("%d\t",i);
        if((i+day)%7==0)
            printf("\n") ;
    }
    }
    else if(month==4||month==6||month==9||month==11)
    {
        for(int j=1;j<=day;j++)
            {
               printf(" \t");
            }
        for(int i=1;i<=30;i++)
    {
        printf("%d\t",i);
        if((i+day)%7==0)
            printf("\n") ;
    }
    }

    else if(month==2)
           {
               if(year%4==0&&(year%100!=0||year%400==0))
                        {
        for(int j=1;j<=day;j++)
            {
               printf(" \t");
            }
        for(int i=1;i<=29;i++)
    {
        printf("%d\t",i);
        if((i+day)%7==0)
            printf("\n") ;
    }
    }
               else
                   {
        for(int j=1;j<=day;j++)
            {
               printf(" \t");
            }
        for(int i=1;i<=28;i++)
    {
        printf("%d\t",i);
        if((i+day)%7==0)
            printf("\n") ;
    }
    }

           }
}
