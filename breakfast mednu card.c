#include<stdio.h>
int main()
{
int menu, bill, quqntity;
int price;
//display menu
printf("welcome to Engineer Breakfast center");
printf("\nPress 1.Dosa :$85");
printf("\nPress 2.Uttapa :$100");
printf("\nPress 3.Idli :$30");
printf("\nPress 4.Poha :$50");
printf("\nPress 5.Upama :$50");
printf("\nPress 6.Appmam :$50");
printf("\nPress 7.sandwich :$60");
printf("\nPress 8.Burger :$40");
printf("\nPress 9.FRenchfries :$70");
printf("\nPress 10.Pizza :$80");

//Prompt for menu selection
printf("\n\nYour choice: ");
scanf("%d",&menu);

//set prices based on user choice 
switch(menu)
{
case1:
     printf("\nDosa");
     price=85;
     break;
case2:
     printf("\nUttapa");
     price=100;
     break;
case3:
     printf("\nIdli");
     price=30;
     break;
case4:
     printf("\nPoha");
     price=50;
'    break;
case5:
     printf("\nUpama");
     price=50;
     break;
case6:
     printf("\nAppmam");
     price=50;
     break;
case7:
     printf("\nSandwich");
     price=60;
     break;
case8:
     printf("\nBurger");
     print=40;
     break;
case9:
     printf("\nFrenchfries");
     print=70;
     break;
case10;
     printf("\nPizza");
     print=80;
     break;
   default:
printf("\n\nPLease enter a valid  choice....");
      return1;
//Exit if invalid input
}

//Get the quantity
printf("\nPlaese enter the required quantity: ");
scanf("%d",&quantity);

//calculate the total bill
bill= price+quantity;

//print the total bill
printf("Total Bill: $%d\n", bill);

printf("\nPlease collect your order from the counter");
printf("\nVisit Again");
printf("\n\nThankyou also share your feedback on our officialwebsite");
}






Output:
welcome to Engineer breakfast center
Press 1. Dosa:$85
Press 2. Uttapa:$100
Press 3. Idli:$30
Press 4. Poha:$50
Press 5. Upama:$50
Press 6. Appmam:$50
Press 7. Sandwich:$60
Press 8. Burger:$40
Press 9. Frenchfries:$70
Press 10. Pizza:$80

Your choice:6

Appmam
Please enter the required quantity:5
Total Bill:$250

Please collect your order from the counter
Visit Again

Thankyou also share your feedback on our official website




  
    
