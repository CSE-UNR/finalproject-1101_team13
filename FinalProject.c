//Authors: Jaya and Emmanuel
//Purpose: Final Project
//Due May 7th, 2024

#include <stdio.h>

#define PIXEL 3
#define FILE_NAME "testfile.txt"
#define MAX 1000

char saveImage();
int cropImage();
int editMenu();
void displayImage();
void loadNewImage();
int DimImage();
int BrightenImage();

int main(){
    int menuChoice, menuChoice2, i; 
    int pictureArray[MAX]; 
    char ch; 
    char fileName[MAX];
    do{ 
        printf("Welcome to Erinstagram!");
        printf("\nMAIN MENU:");
        printf("\n1. Load a new image.");
        printf("\n2. Display the current image.");
        printf("\n3. Edit the current image.\n");
        scanf("%d", &menuChoice);
        
        if(menuChoice==1){ 
               loadNewImage();
        }
        else if(menuChoice==2)
        { 
          displayImage();
        }
        else if(menuChoice==3)
                {
            editMenu();
                }
        }while((menuChoice == 1)||(menuChoice == 2)||(menuChoice == 3));
    return 0;
}
void loadNewImage(){
	int i = 0;
	int testArray[MAX];
	char ch;
	char fileName[MAX];
	
	printf("What is the name of your file? NOTE: Case sensitive. Please include file type (example: SAMPLE.txt)\n");
        scanf("%s", fileName); 
            
        FILE *fp2;
        fp2 = fopen(fileName, "r"); 
            
        if(fp2==NULL){
        	printf("Cannot open file to read.\n");
        }
        else{
        	do {
            		ch = fgetc(fp2);
           		printf("%c", ch);
           		
            	} while (ch != EOF);
        }
}
void displayImage(){
	char ch;
            FILE *fp1;
            fp1 = fopen(FILE_NAME, "r");
            
            if(fp1==NULL){
                printf("Cannot open file to read.\n");
            }
            else{
            	do {
            		ch = fgetc(fp1);
            		printf("%c", ch);
            	} while (ch != EOF);
            }
}
int editMenu(){
	int menuChoice2;
	printf("\nEDIT MENU:");
	printf("\nSelect how you would like to edit your image.");
	printf("\n1. Crop image.");
	printf("\n2. Dim image.");
	printf("\n3. Brighten image.\n");
	scanf("%d", &menuChoice2);
	
	if(menuChoice2==1){
		cropImage();
	}
	else if (menuChoice2==2){
		DimImage();
	}
	else if(menuChoice2==3){
		BrightenImage();
	}
	
	return menuChoice2;
}


int cropImage(){
	int cropChoice, delValue, i;

	printf("\nCROP IMAGE:");
	printf("\nWould you like to crop the left side of the image, or the right?");
	printf("\n1. Left side.");
	printf("\n2. Right side.\n");
	scanf("%d", &cropChoice);
	
	if(cropChoice == 1){
		printf("\nHow many pixels would you like to delete from the left side of this image?\n");
		scanf("%d", &delValue);
		for(i = delValue - 1; i < MAX -1; i++){
		   PIXEL - 1;
		}
		
	}
	else if (cropChoice == 2){
		for(i = delValue + 1; i < MAX -1; i++){
		   PIXEL - 1;
		}
	}
	
	saveImage();
	
	return 0;
}

int DimImage()
{
    int strindex;
    int subtractedPixels;
    int rows;
    int cols;
    int image[MAX][cols];
    for (int rowI = 0; rowI < MAX; rowI++){
        for (strindex=0; image[rowI][PIXEL] != '\0'; strindex++)
        {
            subtractedPixels= image[rowI][PIXEL] - 1 ;
        }
    }

}
int BrightenImage()
{
    int strindex; 
    int addedPixels; 
    int rows; 
    int cols; 
    int image[MAX][cols];
   for (int rowI = 0; rowI < MAX; rowI++){
        for (strindex=0; image[rowI][PIXEL] != '\0'; strindex++)
        {
            addedPixels= image[rowI][PIXEL] + 1 ;
        }
    } 
}

char saveImage(){
	char newImageName[MAX];
	char newImage[MAX];
	int saveChoice;
	printf("\nWould you like to save your image?");
	printf("\n1. Yes");
	printf("\n2. No\n");
	scanf("%c", &saveImage);
	
	if(saveChoice == 1){
		printf("\nEnter a file name:\n");
		scanf("%s", newImageName); 

        	FILE* fpNew;
        	fpNew = fopen(newImageName, "w"); 
        
        	fprintf(fpNew, "%c", newImage);
        
        	fclose(fpNew);
        }
        else if(saveChoice == 2){
        	printf("You're abandoning your masterpiece!");
        }
        else{
        	printf("Invalid choice.");
        }
        	
}	
