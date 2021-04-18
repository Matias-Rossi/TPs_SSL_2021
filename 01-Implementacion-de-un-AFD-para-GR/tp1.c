#include <stdio.h>
#include <conio.h>

void append(char *s, char c)
{
    int len = strlen(s);
    s[len] = c;
    s[len + 1] = '\0';
}

int main()
{
    FILE *fr, *fw;

    char *buffer[100], in;
    char palabra[20];

    fopen("entrada.txt", "r");
    fopen("salida.txt", "w+");

    in = fread(buffer, 1, 1, fr);
    while (!feof(fr))
    {
        palabra[20] = "";
        while (in != ',' && !feof(fr))
        {
            append(palabra, in);
        }

        //Switch

        in = fread(buffer, 1, 1, fr);
    }

    fclose(fr);
    fclose(fw);
    return 0;
}
