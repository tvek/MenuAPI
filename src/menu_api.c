/*
Purpose : API definition about the menu are described here.
Author  : Thomas Vimal Easo k
Input   : None
Outpu   : None 
*/
#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 100
#define PAGE_TITLE "TVEK Hospital" // <---------- Change the MENU TITLE here

/*
 * Please don't alter the API below this point
 * API - Begining
 */
void defaultFunction()
{ 
    printf("\n Option Item Selected");
}

void displayExitMessage()
{
    printf("\n Exiting... \n");
}

void displayMenu(int size, char* displayName[ARRAY_SIZE], void (*actionFunc[ARRAY_SIZE])(), char * pageTitle)
{
    int choice =  0, loopIndex = 0;
    do
    {
        system("clear");
        printf("\n\n\t\t "
              PAGE_TITLE
              "\n\n   Page : %s\n",pageTitle);
        for(loopIndex = 0; loopIndex < size; loopIndex++)
        {
            printf("\n %d. %s ", loopIndex+1, displayName[loopIndex]);
        }
        printf("\n %d. Back\n Enter your choice [1-%d] : ",loopIndex+1,loopIndex+1);
        if (scanf("%d", &choice) == 1)
        {
            //printf("choice= %d\n", choice);
            if (choice == size+1)
            {
                displayExitMessage();
            }else{
                for(loopIndex = 1; loopIndex < size; loopIndex++)
                {
                    if (choice == loopIndex)
                    {
                        (*actionFunc[loopIndex-1])();
                    }
                }
            }
            getch();
            printf("\n Press ANY key to continue.\n");    
            getch();
        }else{
            getch();
            printf("\n Invalid Choice");
            getch();
        }
    } while (choice != size+1 );
}
/*
 * Please don't alter the API above this point
 * API - End
 */