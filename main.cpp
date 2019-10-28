#include <iostream>
#include <cstring>

char cadena[9];
int size;

const char numbers[5][31] ={
                " -     -  -     -  -  -  -  - ",
                "| |  |  |  || ||  |    || || |",
                "       -  -  -  -  -     -  - ",
                "| |  ||    |  |  || |  || |  |",
                " -     -  -     -  -     -  - ",};

void print(int t , int len){
    for (int i = 0; i < len; i++)
    {
        int a = cadena[i] & 15;
        if (i) putchar(' ');
        putchar(numbers[t][a * 3]);
        for (int j = 0; j < size; j++)
            putchar(numbers[t][a * 3 + 1]);
        putchar(numbers[t][a * 3 + 2]);
    }
    putchar('\n');
}

int main() {
    while (scanf("%d%s", &size, cadena), size)
    {
        int len = strlen(cadena);
        for (int i = 0; i < 5; i++)
        {
            if (i == 1 || i == 3)
                for (int j = 0; j < size; j++)
                    print(i, len);
            else
                print(i, len);
        }
        putchar('\n');
    }    return 0;
}