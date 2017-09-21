# MenuAPI
MenuAPI is a library written in C with which developers can build a menu driven application with ease

# How to use MenuAPI
MenuAPI is easy to install on your project
  Step#1 : Include the menu_api to your project
           #include "menu_api.h"
  Step#2 : Define a global Variable with MENU_SIZE
           #define MENU_SIZE 2
           change the value 2 to number of menu options
  Step#3 : Declare a string array with menusize and initialize with the menu options
           char *menuOptions[MENU_SIZE]={"Patient","Management / Doctor"};
  Step#4 : Declare a functionPointerList array with menusize and initialize with the functions to call for each menu item selection.
           void (*functionList[MENU_SIZE])()={&defaultFunction, &defaultFunction}; 
  Step#5 : Invoking the method with above 3 variables and the MenuNavigation String
           displayMenu(MENU_SIZE, menuOptions, functionList, "Home "); 			
           displayMenu(<size-of-menu>, <function-list-containing-address>, <page-navigation-title>)
