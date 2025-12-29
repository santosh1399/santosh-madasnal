#include<stdio.h>
#include<conio.h>
struct bill
{
int prid;
char name[20];
int qty;
int pri;
int total;
};
void main()
{
struct bill s1[5];
int i,n,total;
for(i=0;i<4;i++)
{
printf("\n enter product id");
scanf("%d",&s1[i].prid);
printf("\n enter product name");
scanf("%s",s1[i].name);
printf("\n enter how much quantity you want to buy");
scanf("%d",&s1[i].qty);
printf("\n enter the price of product");
scanf("%d",&s1[i].pri);
s1[i].total=s1[i].qty*s1[i].pri;
total+=s1[i].total;
}
printf("\n --------PRODUCT BILL--------\n");
printf("id\tname\tqty\tpri\ttotal\n");
for(i=0;i<4;i++)
{
printf("%d\t%s\t%d\t%d\t%d\n",s1[i].prid,s1[i].name,s1[i].qty,s1[i].pri,s1[i].total);
printf("\n total=%d",total);
getch();
}
}