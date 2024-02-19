#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

   int main() {
    char *locale = setlocale(LC_ALL,"");
    char sent[1000];
    int count_e = 0;
    printf("Введiть речення (закiнчiть крапкою або знаком оклику): ");
    gets(sent);
    for (int i = 0; sent[i] != '.' && sent[i] != '!'; i++) {
        if (sent[i] == 'є'||sent[i]=='Є')
            count_e++;
    }
    if (count_e > 0) {
        printf("Кiлькiсть символiв 'є' у введеному реченнi: %d\n", count_e);
    } else {
        printf("Символ 'є' вiдсутнiй у введеному реченнi.\n");
    }
    getch();
    return 0;
}



