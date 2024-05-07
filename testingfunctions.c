//Authors: Jaya and Emmanuel
//Purpose: Final Project
//Due May 7th, 2024

#include <stdio.h>

#define MAX_ROWS 500
#define MAX_COLUMNS 500
#define PIXEL 3
#define FILE_NAME "testfile.txt"
#define MAX 100


int main(){
 	char newImageName[MAX];
	char test;
	printf("\nWould you like to save your new image?");
	printf("\n1. Yes");
	printf("\n2. No");
	
	printf("\nEnter a file name:\n");
	scanf("%s", newImageName); //takes user input for new image name
        scanf("%c", &test);
        scanf("%c", &test);
            
        FILE* fpNew;
        fpNew = fopen(newImageName, "w"); //opens file to write to 
        
        //scanf("%c", &test);
        fprintf(fpNew, "%c", test);
        
        fclose(fpNew);
        
        return 0;
}
