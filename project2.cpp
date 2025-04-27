// supermarket billing system
#include<iostream>
#include<string.h>
using namespace std;
class items  /*supermarket_billing_syatem*/
{
 public:
  char name[20];  /*name_of_the_product*/
  int cost;       /*cost_of_the_product*/
  int avl;        /*availability_of_the_product*/
  int n;          /*the_number_on_which_the_product_is_present*/
};
int main()
{
 items ob[10];
 strcpy(ob[0].name,"bread");
 ob[0].cost=20;
 ob[0].avl=30;
 ob[0].n=1;
 strcpy(ob[1].name,"butter");
 ob[1].cost=22;
 ob[1].avl=30;
 ob[1].n=2;
strcpy(ob[2].name,"toothpaste");
 ob[2].cost=30;
 ob[2].avl=20;
 ob[2].n=3;
 strcpy(ob[3].name,"surf");
 ob[3].cost=12;
 ob[3].avl=20;
 ob[3].n=4;
 strcpy(ob[4].name,"tooth bursh");
 ob[4].cost=10;
 ob[4].avl=30;
 ob[4].n=5;
 strcpy(ob[5].name,"cereals");
 ob[5].cost=100;
 ob[5].avl=50;
 ob[5].n=6;
 strcpy(ob[6].name,"shampoo");
 ob[6].cost=120;
 ob[6].avl=15;
 ob[6].n=7;
 strcpy(ob[7].name,"conditinor");
 ob[7].cost=60;
ob[7].avl=10;
 ob[7].n=8;
 strcpy(ob[8].name,"namkeen");
 ob[8].cost=100;
 ob[8].avl=15;
 ob[8].n=9;
 strcpy(ob[9].name,"toy");
 ob[9].cost=1000;
 ob[9].avl=150;
 ob[9].n=10;

char choose = 'y';
int ni=0,k[20],p=0,f=0,i,m;
while(choose=='y')
{
 cout<<"\n1.bread\n2.butter\n3.toothpaste\n4.surf\n5.toothbrush";
 cout<<"\n6.cereals\n7.shampoo\n8.conditinor\n9.namkeen\n10.toy";
 cin>>ni;
 if(p>19)
 {
   cout<<"\nyou cannot shop more than 20 items in one bill";
   f=1;
 break;
 }
 k[p]=ni-1;
 p++;

 cout<<"\nwant to shop more?(y/n)";
 cin>>choose;
}
 if(f==0)
 {
  for(i=0;i<p;i++)
  {
   m=k[i];
   cout<<"\n"<<i+1<<"\t"<<ob[m].name<<"\t"<<ob[m].cost;
  }
 }

 return 0;
}

