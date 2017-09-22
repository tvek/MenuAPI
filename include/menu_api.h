#define ARRAY_SIZE 100

void defaultFunction();

void displayExitMessage();

void displayMenu(int size, char* displayName[ARRAY_SIZE], void (*actionFunc[ARRAY_SIZE])(), char *pageTitle);
