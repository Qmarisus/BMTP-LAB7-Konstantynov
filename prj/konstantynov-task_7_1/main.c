#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

   int main() {
    char *locale = setlocale(LC_ALL,"");
    char sent[1000];
    int count_e = 0;
    printf("����i�� ������� (���i��i�� ������� ��� ������ ������): ");
    gets(sent);
    for (int i = 0; sent[i] != '.' && sent[i] != '!'; i++) {
        if (sent[i] == '�'||sent[i]=='�')
            count_e++;
    }
    if (count_e > 0) {
        printf("�i���i��� ������i� '�' � ��������� ������i: %d\n", count_e);
    } else {
        printf("������ '�' �i�����i� � ��������� ������i.\n");
    }
    getch();
    return 0;
}



