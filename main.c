#include <stdio.h>
#include <stdlib.h>

void getProds(char x[100][100], int y[100]);

int main()
{
    char title[100] = "Joe's Electronics Company Report";
    int day, quantity[100];
    char products[100][100];
    printf("\n\n\n\t\t\t   ****************\n\t\t\t%s\n \t\t\t\    \n\t\t\t   ****************\n", title);
    printf("1. Monday\n2. Tuesday\n3. Wednesday\n4. Thursday\n5. Friday\n6. Saturday\n7. Sunday\n");
    printf("\nEnter day: ", day);
    scanf("%d", &day);

    switch(day) {
    case 1:
        printf(" ");
        break;
    case 2:
        getProds(products, quantity);
        break;
    case 3:
        getProds(products, quantity);
    case 4:
       getProds(products, quantity);
        break;
    case 5:
        getProds(products, quantity);
        break;
    case 6:
        getProds(products, quantity);
        break;
    case 7:
        getProds(products, quantity);
        break;
    default:
        printf("Wrong Entry.");

    return 0;
}

void getProds(char x[100][100], int y[100]) {
    printf("Enter Products name: ");
    gets(x);
    printf("Enter Products Quantity: ");
    gets(y);

}
