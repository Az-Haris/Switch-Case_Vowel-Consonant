#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main()
{
    char ch;
    printf("Pleae Enter Any Alphabet : ");
    //scanf("%c", &ch); or,
    ch=getchar();

    switch(ch)
    {
    case 'a' :
    case 'e' :
    case 'i' :
    case 'o' :
    case 'u' :
    case 'A' :
    case 'E' :
    case 'I' :
    case 'O' :
    case 'U' :
        printf("This Letter is Vowel");
        break;

        default :
        {
            printf("This Letter is Consonant");
            break;
        }
    }


    getch();
    return 0;
}
