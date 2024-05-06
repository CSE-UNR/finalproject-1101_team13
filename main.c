
//Authors: Jaya and Emmanuel
//Purpose: Final Project
//Due May 7th, 2024

#include <stdio.h>

int main(){
#define MAX_ROWS 500
#define MAX_COLUMNS 500
#define PIXEL 3
#define FILE_NAME "image.txt"
#define MAX 100
   
    
    char menuChoice;
    char str[MAX];
    
    do{ 
        printf("Welcome to Erinstagram!");
        printf("\nMENU:");
        printf("\n1. Load a new image.");
        printf("\n2. Display the current image.");
        printf("\n3. Edit the current image.");
        printf("\n4. Exit the program.\n");
        scanf("%c", &menuChoice);
        
        if(menuChoice=1){
            //insert more here
        }
        else if(menuChoice==2){
            FILE *fp1;
            fp1 = fopen(FILE_NAME, "r");
            if(fp1==NULL){
                printf("Cannot open file to read.\n");
            }
            else{
                char imageValues[MAX];
                fclose(fp1);
            }
        }
        else if(menuChoice==3){
            //insert function for the edit menu here 
        }
        else if((menuChoice!=1)&&(menuChoice!=2)&&(menuChoice!=3)&&(menuChoice!=4)){
            printf("Invalid choice. Select again.\n");
        }
    }
    while(menuChoice!=4);

    return 0;
}


int LoadImage(FILE *fin, int maxrows, int cols, int image[][cols]);
void DisplayImage(int rows, int cols, int image[][cols]);
int DimImage(int strindex, int subtractedPixels, int rows, int cols, int image[][cols]);
int BrightenImage(int strindex, int addedPixels, int rows, int cols, int image[][cols]);

//int main()

    //int numimage;
    //int image[MAX_ROWS][MAX_COLUMNS];
    //int pixelvalues[PIXEL];
    
    //FILE *fptr;
    //fptr = fopen (FILE_NAME, "r");
    
    //if (fptr !=NULL){
        
        //numimage = LoadImage(fptr, MAX_ROWS, MAX_COLUMNS,image);
    //return 0;
    //}
//}


int LoadImage(FILE *fin, int maxrows, int cols, int image[][cols])
{
    int index=0;
    while (fscanf(fin, "%d", &image[index][PIXEL]) == 3)
    index ++;
    return index;
}
    
void DisplayImage(int rows, int cols, int image[][cols])
{
    for (int rowI = 0; rowI < MAX_ROWS; rowI++)
        printf ("%d", image[rowI][PIXEL]);
}
int DimImage(int strindex, int subtractedPixels, int rows, int cols, int image[][cols])
{
    for (int rowI = 0; rowI < MAX_ROWS; rowI++){
        for (strindex=0; image[rowI][PIXEL] != '\0'; strindex++)
        {
            subtractedPixels= image[rowI][PIXEL] - 1 ;
        }
    }

}
int BrightenImage(int strindex, int addedPixels, int rows, int cols, int image[][cols])
{
   for (int rowI = 0; rowI < MAX_ROWS; rowI++){
        for (strindex=0; image[rowI][PIXEL] != '\0'; strindex++)
        {
            addedPixels= image[rowI][PIXEL] + 1 ;
        }
    } 
}
