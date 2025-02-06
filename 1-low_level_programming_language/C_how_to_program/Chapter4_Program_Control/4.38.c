#include <stdio.h>

/**
 * main - Prints the "12 Days of Christmas" song lyrics
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, j;

    for (i = 1; i <= 12; i++)
    {
        printf("On the ");

        switch (i)
        {
        case 1:
            printf("first");
            break;
        case 2:
            printf("second");
            break;
        case 3:
            printf("third");
            break;
        case 4:
            printf("fourth");
            break;
        case 5:
            printf("fifth");
            break;
        case 6:
            printf("sixth");
            break;
        case 7:
            printf("seventh");
            break;
        case 8:
            printf("eighth");
            break;
        case 9:
            printf("ninth");
            break;
        case 10:
            printf("tenth");
            break;
        case 11:
            printf("eleventh");
            break;
        case 12:
            printf("twelfth");
            break;
        }

        printf(" %s\n%s\n", "day of Christmas,", "my true love sent to me");

        for (j = i; j >= 1; j--)
        {
            if (i == 1)
            {
                printf("A partridge in a pear tree.\n");
                break;
            }

            switch (j)
            {
            case 2:
                printf("Two turtle doves,\n");
                break;
            case 3:
                printf("Three French hens,\n");
                break;
            case 4:
                printf("Four calling birds,\n");
                break;
            case 5:
                printf("Five gold rings,\n");
                break;
            case 6:
                printf("Six geese a-laying,\n");
                break;
            case 7:
                printf("Seven swans a-swimming,\n");
                break;
            case 8:
                printf("Eight maids a-milking,\n");
                break;
            case 9:
                printf("Nine ladies dancing,\n");
                break;
            case 10:
                printf("Ten lords a-leaping,\n");
                break;
            case 11:
                printf("Eleven pipers piping,\n");
                break;
            case 12:
                printf("Twelve drummers drumming,\n");
                break;
            default:
                break;
            }
        }

        if (i != 1)
            printf("And a partridge in a pear tree.\n");
        if (i != 12)
            printf("---\n");
    }

    return (0);
}
