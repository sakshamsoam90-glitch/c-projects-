#include<stdio.h>
int main()
{
    char item[50]= "";
    float price= 0.0f;
    int quantity= 0;
    char currency = '$';
    float total= 0.0f;
    printf ( " what do you want to buy?");
    fgets ( item,sizeof(item), stdin);
    printf ("what is the price of the item");
    scanf ( "%f", &price);
    printf ("how many items do you wanna buy");
    scanf ( "%d", &quantity);
    total = price*quantity;
    printf ("%c%f",  currency ,total); 


   return 0;
}
