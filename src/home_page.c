#include <stdio.h>
#include <stdlib.h>
// Step#1 : Include the menu_api to your project
#include "menu_api.h"
// Step#2 : Define a global Variable with MENU_SIZE
#define MENU_SIZE 2
int main() {
 
    char *menuOptions[MENU_SIZE]={"Patient","Management / Doctor"};			// Declare a string array with menusize and initialize with the menu options
    void (*functionList[MENU_SIZE])()={&defaultFunction, &defaultFunction}; // Declare a functionPointerList array with menusize and initialize with the functions to call for each menu item selection.
    displayMenu(MENU_SIZE, menuOptions, functionList, "Home "); 			// Invoking the method with above 3 variables and the MenuNavigation String

    return(0);
}
