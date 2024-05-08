//Authors: Jaya and Emmanuel
//Purpose: Final Project
//Due May 7th, 2024

#include <stdio.h>

#define FILE_NAME "testfile.txt"
#define MAX 1000

char saveImage();
int cropImage();
int editMenu();
void displayImage();
void loadNewImage();
int mainMenu();

int main(){
    int menuChoice;
    
    do {    
    
    mainMenu();
    
    //saveImage();
    
    } while ((menuChoice == 1)||(menuChoice == 2)||(menuChoice == 3)); //not functioning properly..come back to this
        

    return 0;
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
		scanf("%s", newImageName); //takes user input for new image name

        	FILE* fpNew;
        	fpNew = fopen(newImageName, "w"); //opens file to write to 
        
        	fprintf(fpNew, "%c", newImage); //the array here will come from what the new image already is...
        
        	fclose(fpNew);
        }
        else if(saveChoice == 2){
        	printf("You're abandoning your masterpiece!");
        }
        else{
        	printf("Invalid choice.");
        }
        	
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
		//for(i = delValue - 1; i < MAX -1; i++){
		//need to come back to this...impossible until i figure out how to put file contents into an array
	}
	else{
		printf("\nNo changes will be stored.\n");
	}
	
	saveImage();
	
	return 0;
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
	if(menuChoice2==2){
		//dimImage(); COME BACK TO FIGURE OUT HOW TO DIM IMAGE
		printf("Filler");
	}
	if(menuChoice2==3){
		//brightenImage(); COME BACK TO FIGURE OUT THIS FUNCTION
		printf("Filler");
	}
	
	return menuChoice2;
}

<<<<<<< HEAD:FinalProject.c
void displayImage(){
	char ch;
=======
int main(){

   
>>>>>>> e69f2a9330ebc4e187567912e3dfdb4822dbf664
    
    int menuChoice, menuChoice2, i;
    int pictureArray[MAX];
    char ch;
    char fileName[MAX];
    
    //do{ 
        printf("Welcome to Erinstagram!");
        printf("\nMAIN MENU:");
        printf("\n1. Load a new image.");
        printf("\n2. Display the current image.");
        printf("\n3. Edit the current image.");
        printf("\n4. Exit the program.\n");
        scanf("%d", &menuChoice);
        
        if(menuChoice==1){ //LOAD NEW IMAGE
        
            printf("What is the name of your file?\n");
            scanf("%s", fileName); //takes user input for file name
            
            FILE *fp2;
            fp2 = fopen(fileName, "r"); //opens file to read
            
            if(fp2==NULL){
                printf("Cannot open file to read.\n");
            }
            else{
            	do {
            		ch = fgetc(fp2);
            		printf("%c", ch); //displays values of file
            	} while (ch != EOF);
            }
        }
        if(menuChoice==2){ //DISPLAY CURRENT IMAGE
>>>>>>> 3f2454cfa6a76255ee228444b691c8726b640256:main2.c
            
            FILE *fp1;
            fp1 = fopen(FILE_NAME, "r"); //opens default file to read
            
            if(fp1==NULL){
                printf("Cannot open file to read.\n");
            }
            else{
            	do {
            		ch = fgetc(fp1);
            		printf("%c", ch); //displays values of file
            	} while (ch != EOF);
            }
}


void loadNewImage(){
	int i = 0;
	int testArray[MAX];
	char ch;
	char fileName[MAX];
	
	printf("What is the name of your file? NOTE: Case sensitive. Please include file type (example: SAMPLE.txt)\n");
        scanf("%s", fileName); //takes user input for file name
            
        FILE *fp2;
        fp2 = fopen(fileName, "r"); //opens file to read
            
        if(fp2==NULL){
        	printf("Cannot open file to read.\n");
        }
        else{
        	do {
            		ch = fgetc(fp2);
           		printf("%c", ch); //displays values of file
           		
            	} while (ch != EOF);
        }
}

int mainMenu(){
	int menuChoice;
	printf("Welcome to Erinstagram!");
        printf("\nMAIN MENU:");
        printf("\n1. Load a new image.");
        printf("\n2. Display the current image.");
        printf("\n3. Edit the current image.");
        printf("\n4. Exit the program.\n");
        scanf("%d", &menuChoice);
        
        if(menuChoice==1){
        	loadNewImage();
        }
        else if(menuChoice==2){
        	displayImage();
        }
        else if(menuChoice==3){
        	editMenu();
        }
        
        return menuChoice; 
}

/*int main(){
    int menuChoice;
    
    do {    
    
    mainMenu();
    
    saveImage();
    
    } while ((menuChoice == 1)||(menuChoice == 2)||(menuChoice == 3)); //not functioning properly..come back to this
        

    return 0;
}*/

/*
int LoadImage(FILE *fin, int maxrows, int cols, int image[][cols]);
void DisplayImage(int rows, int cols, int image[][cols]);
int DimImage(int strindex, int subtractedPixels, int rows, int cols, int image[][cols]);
int BrightenImage(int strindex, int addedPixels, int rows, int cols, int image[][cols]);
*/
//int main()

    //int numimage;
    //int image[MAX_ROWS][MAX_COLUMNS];s
    //int pixelvalues[PIXEL];
    
    //FILE *fptr;
    //fptr = fopen (FILE_NAME, "r");
    
    //if (fptr !=NULL){
        
        //numimage = LoadImage(fptr, MAX_ROWS, MAX_COLUMNS,image);
    //return 0;
    //}
//}


/*
int LoadImage(FILE *fin, int maxrows, int cols, int image[][cols])
//{
    int index=0;
    while (fscanf(fin, "%d", &image[index][PIXEL]) == 3)
    index ++;
    return index;
//}
    
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
*/
