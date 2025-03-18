#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    char first_name[15];
    char last_name[15];
    int id;
    double balance;
} cleint_data;


int main()
{
    FILE *ptr = NULL;
    cleint_data c1 = {"", "", 0, 0.0};
    ptr = fopen("client.data", "wb+");
    if (ptr == NULL)
    {
        printf("EXITING\n");
        return 0;
    }
    if (fwrite(&c1, sizeof(c1), 1, ptr) != 1)
    {
        perror("Error writing to file");
    }    printf("%p\n", (void *)ptr);
    fclose(ptr);
    return 0;
}

