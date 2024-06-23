#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
    int mynum,usernum;
    srand(time(NULL));
    mynum=rand() % 10;

printf("\t\t****************Shisir Kafle*****************\n");
printf("\t\t*                                           *\n");
printf("\t\t*                                           *\n");
printf("\t\t*             Westcliff University          *\n");
printf("\t\t*                                           *\n");
printf("\t\t*                                           *\n");
printf("\t\t*                                           *\n");
printf("\t\t*          Project on Guess the number      *\n");
printf("\t\t*********************************************\n");
printf("I have a number in my mind (0-9) can you guess it?\n");
while(1){//infinite loop
printf("Enter your guess\n");
scanf("%d",&usernum);
if(mynum==usernum)
{
    printf("Yes your guess is correct\n");
    break;
}
else if(mynum>usernum)
{


    printf("My number is greater than your number %d. Try again!\n",usernum);
}
else{
    printf("My number is smaller than your number %d. Try again!\n",usernum);
}
}

getch();
}
