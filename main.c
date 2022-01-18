#include <stdio.h>
struct item{
  int a,b,o,gu,gr;
  int cab,mush,p,oni,sp;
  int m,c,y,bu,eg;
  char name[100],mail[100];
  int no;
};
int main() {
  struct item items;
  printf("---Hello and Welcome to S3 Shopping Center---\n");
  printf("--Buy Fresh Fruits, Vegetables and Dairy products--\n");
  //printf("(To choose an item type the number on the left of the item)\n");
  printf("-FEATURED PRODUCTS-\n");
  printf("\nFruits\n1:Apple\t\t2:Banana\t\t3:Orange\t\t4:Guava\t\t5:Grapes\n");
  printf("\nVegetables\n1:Cabbage\t\t2:Mushroom\t\t3:Potatoes\t\t4:Onion\t\t5:Spinach\n");
  printf("\nDairy\n1:Milk\t\t2:Cheese\t\t3:Yogurt\t\t4:Butter\t\t5:Egg\n");
  int Apple=0,Banana=0,Orange=0,Guava=0,Grapes=0;
  int Cabbage=0,Mushroom=0,Potato=0,Onion=0,Spinach=0;
  int Milk=0,Cheese=0,Yogurt=0,Butter=0,Egg=0;
  int i,j=0,k=1;
  float cgst,sgst,bill;
  char oper;
  for(j=0;j<k;j++){
    printf("\nType f for Fruits v for Vegetables d for Dairy:");
    scanf("%s",&oper);
  switch (oper) {
    case 'f':
    printf("(To choose an item type the number on the left of the item in Featured Products)\n");
    printf("(For example if you want Orange type 3)\n");
      scanf("%d",&i);
      if(i==1){
      printf("Enter the number of APPLES you want:");
      scanf("%d",&items.a);
      Apple+=items.a;
      }
      if(i==2){
      printf("Enter the number of BANANAS you want:");
      scanf("%d",&items.b);
      Banana+=items.b;
      }
      if(i==3){
      printf("Enter the number of ORANGES you want:");
      scanf("%d",&items.o);
      Orange+=items.o;
      }
      if(i==4){
      printf("Enter the number of GUAVAS you want:");
      scanf("%d",&items.gu);
      Guava+=items.gu;
      }
      if(i==5){
      printf("Enter the number of GRAPES you want:");
      scanf("%d",&items.gr);
      Grapes+=items.gr;
      }
      break;
    case 'v':
      printf("(To choose an item type the number on the left of the item in Featured Products)\n");
    printf("(For example if you want Spinach type 5)\n");
      scanf("%d",&i);
      if(i==1){
      printf("Enter the number of CABBAGE you want:");
      scanf("%d",&items.cab);
      Cabbage+=items.cab;
      }
      if(i==2){
      printf("Enter the number of MUSHROOOM packet(s) you want:");
      scanf("%d",&items.mush);
      Mushroom+=items.mush;
      }
      if(i==3){
      printf("Enter the number of POTATOES you want:");
      scanf("%d",&items.p);
      Potato+=items.p;
      }
      if(i==4){
      printf("Enter the number of ONION you want:");
      scanf("%d",&items.oni);
      Onion+=items.oni;
      }
      if(i==5){
      printf("Enter the number of SPINACH you want:");
      scanf("%d",&items.sp);
      Spinach+=items.sp;
      }
      break;
       case 'd':
      printf("(To choose an item type the number on the left of the item in Featured Products)\n");
    printf("(For example if you want Butter type 4)\n");
      scanf("%d",&i);
      if(i==1){
      printf("Enter the number of MILK packet(s) you want:");
      scanf("%d",&items.m);
      Milk+=items.m;
      }
      if(i==2){
      printf("Enter the number of CHEESE packet(s) you want:");
      scanf("%d",&items.c);
      Cheese+=items.c;
      }
      if(i==3){
      printf("Enter the number of YOGURT packet(s) you want:");
      scanf("%d",&items.y);
      Yogurt+=items.y;
      }
      if(i==4){
      printf("Enter the number of BUTTER packet(s) you want:");
      scanf("%d",&items.bu);
      Butter+=items.bu;
      }
      if(i==5){
      printf("Enter the number of EGG(s) you want:");
      scanf("%d",&items.eg);
      Egg+=items.eg;
      }
      break;
   }
   bill=10*Apple+10*Banana+10*Orange+10*Grapes+10*Guava+20*Cabbage+20*Mushroom+20*Potato+20*Onion+20*Spinach+30*Milk+30*Cheese+30*Yogurt+30*Butter+30*Egg;
   cgst=1.0*9/100*bill;
   sgst=1.0*9/100*bill;
   printf("Your total bill incl taxes uptil now is=%f\n",bill+sgst+cgst);

   printf("Type 1 if you want to buy more items or type 0 if you want to stop:");
   scanf("%d",&k);
   j--;  
 }


//Enter the code here----------------------------------------------
  printf("\nPlease Enter your details:\n");
  printf("ENTER YOUR NAME:");
  scanf("%s",&items.name);
  printf("ENTER YOUR MAIL:");
  scanf("%s",&items.mail);
  printf("ENTER YOUR PHONE NUMBER:");
  scanf("%d",&items.no);

 bill=10*Apple+10*Banana+10*Orange+10*Grapes+10*Guava+20*Cabbage+20*Mushroom+20*Potato+20*Onion+20*Spinach+30*Milk+30*Cheese+30*Yogurt+30*Butter+30*Egg;

 printf("\nHere is your BILL--\n");
 printf("\n\t\t\t\t\tName: %s",items.name);
 printf("\n\t\t\t\t\tPhone Number: %d\n",items.no);
 printf("Items\t\t\tUnit price\t\t\tQuantity\t\t\tTotal price ");
 printf("\n-------------------------------------------------------------------\n");
 if(Apple!=0)
 {
     printf("Apple\t\t\t10\t\t\t\t\t%d\t\t\t\t\t%d",Apple,10*Apple);
 }
 if(Banana!=0)
 {
     printf("\nBanana\t\t\t10\t\t\t\t\t%d\t\t\t\t\t%d",Banana,10*Banana);
 }
 if(Orange!=0)
 {
     printf("\nOrange\t\t\t10\t\t\t\t\t%d\t\t\t\t\t%d",Orange,10*Orange);
 }
 if(Grapes!=0)
 {
     printf("\nGrapes\t\t\t10\t\t\t\t\t%d\t\t\t\t\t%d",Grapes,10*Grapes);
 }
 if(Guava!=0)
 {
     printf("\nGuava\t\t\t10\t\t\t\t\t%d\t\t\t\t\t%d",Guava,10*Guava);
 }
 if(Cabbage!=0)
 {
     printf("\nCabbage\t\t\t20\t\t\t\t\t%d\t\t\t\t\t%d",Cabbage,20*Cabbage);
 }
 if(Mushroom!=0)
 {
     printf("\nMushroom\t\t20\t\t\t\t\t%d\t\t\t\t\t%d",Mushroom,20*Mushroom);
 }
 if(Potato!=0)
 {
     printf("\nPotato\t\t\t20\t\t\t\t\t%d\t\t\t\t\t%d",Potato,20*Potato);
 }
 if(Onion!=0)
 {
     printf("\nOnion\t\t\t20\t\t\t\t\t%d\t\t\t\t\t%d",Onion,20*Onion);
 }
 if(Spinach!=0)
 {
     printf("\nSpinach\t\t\t20\t\t\t\t\t%d\t\t\t\t\t%d",Spinach,20*Spinach);
 }
 if(Milk!=0)
 {
     printf("\nMilk\t\t\t30\t\t\t\t\t%d\t\t\t\t\t%d",Milk,30*Milk);
 }
 if(Cheese!=0)
 {
     printf("\nCheese\t\t\t30\t\t\t\t\t%d\t\t\t\t\t%d",Cheese,30*Cheese);
 }
 if(Yogurt!=0)
 {
     printf("\nYogurt\t\t\t30\t\t\t\t\t%d\t\t\t\t\t%d",Yogurt,30*Yogurt);
 }
 if(Butter!=0)
 {
     printf("\nButter\t\t\t30\t\t\t\t\t%d\t\t\t\t\t%d",Butter,30*Spinach);
 }
 if(Egg!=0)
 {
     printf("\nEgg\t\t\t30\t\t\t\t\t%d\t\t\t\t\t%d",Egg,30*Egg);
 }
 printf("\n-------------------------------------------------------------------\n");
 printf("\t\t\t\t\tBill=%f",bill);
 cgst=1.0*9/100*bill;
 printf("\n\t\t\t\t\tCgst=%f",cgst);
 sgst=1.0*9/100*bill;
 printf("\n\t\t\t\t\tSgst=%f",sgst);
 printf("\n\t\t\t\t\tTOTAL BILL=%f",bill+sgst+cgst);
  printf("\n-------------------------------------------------------------------\n");
 printf("\nHow would you like to pay?");
 printf("\n1:Cash or 2:Card");
 printf("\nThank You for shopping at S3 Shopping Centre");
 
}