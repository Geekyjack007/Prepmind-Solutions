#include<stdio.h>
int main()
{
int dd,mm,yyyy,mon[12]={31,28,31,30,31,30,31,31,30,31,30,31},sum=0,i,day,ly=0;
mon[1]=28;
scanf("%d/%d/%d",&dd,&mm,&yyyy);
if(yyyy%400==0||(yyyy%4==0 && yyyy%100!=0))
mon[1]=29;
if((mm>12 || dd>31) || (mm==2 && dd>29) || (mm==2 && mon[1]==28 && dd>28) || ((mm==4 || mm==6 || mm==9 || mm==11) && dd>30))
{
printf("Invalid Date");
}
else{
for(i=0;i<mm-1;i++)
sum=sum+mon[i];
for(i=1;i<yyyy;i++)
{
if(i%400==0||(i%4==0 && i%100!=0))
ly++;
}
sum=sum+dd+((yyyy-1)*365)+ly;
day=sum%7;
switch(day)
{
case 0: printf("Sunday");break;
case 1: printf("Monday");break;
case 2: printf("Tuesday");break;
case 3: printf("Wednesday");break;
case 4: printf("Thursday");break;
case 5: printf("Friday");break;
case 6: printf("Saturday");break;
default : printf("Error");break;
}
}
return 0;
}
