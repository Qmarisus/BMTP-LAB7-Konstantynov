#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    const int SIZE = 20;
    int odd_num = 0, even_num = 0;
    int arr[SIZE];
    printf("Enter 20 natural numbers: ");

    for (int i=0; i<SIZE; i++){
        arr[i]= 1 + rand()%(30);
        printf("%d ",arr[i]);
        if(arr[i]%2==0) even_num++;
        else odd_num++;
    }
    printf("\n");
    if(even_num>odd_num) printf("There are more even numbers than odd numbers");
    else if (even_num==odd_num) printf("The number of even and odd numbers is the same");
    else printf("There are more odd numbers than even numbers");
    getch();
}
