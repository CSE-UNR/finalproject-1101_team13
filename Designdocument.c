Design Document
Emmanuel Gaytan/Jaya Sicard
Image Processing
Data:
Image- 2D Array of int (500 x 500)
Pixels- 2D Array of int (3 x1)
File pointers, image
MenuChoice- int
Brightnessvalue- char
Dimvalue- char
Crop- int
Editchoice- int
File name- strings
Photosize- int
SaveChoice:int
Purpose:
To be able to display a menu that gives the user the options to display, load or edit an image, or exit the program. If the user decides to edit, they should be given another menu to crop, dim or brighten an image. Once their choices have been selected they should then be prompted to save their image.

Functions:
Main()
Data: Variables for menu choice
Functionality: Display menu options and prompt users for an integer and store it. Display in a loop while the user doesn’t choose 0. Then use that integer in a switch to determine which other function or functions to access next.


LoadImage(): 
Input Parameters: file pointers, int rows, int columns, int pixels array, int image array
Returned Output: boolean
Functionality:  The program should prompt the user for a filename and then access thar file to read the contents, aka the rows and columns of pixels that make up the image and then save it to the image file


DisplayImage()
Input Parameters: int rows, int columns, int pixels array, int image array,file pointers
Functionality: Access then open the file and display each of the rows and columns of pixels that make up the image and loop until it reads each row or print that there is no image if there isn’t any image in the file


EditImage()
Input Parameters: Variables for editchoice
Functionality: Display the different options for how they want to edit the current image. Then scan and store the integer that the user inputs and use that integer to decide which of the following functions to access then use and display the save function and loop until the user saves the new image

CropImage()
Input Parameters: int rows, int columns, int pixels array, int image array, int photosize
Functionality: Prompt the user to enter how much smaller they want their image and then use that integer to then use the file data to then subtract the amount of rows as well as the same amount of columns of pixels to be displayed and then display the image

Brightenimage()
Input Parameters: int rows, int columns, int pixels array, int image array, int brightnessvalue
Fuctionality: Loop through the array and add one to each of the values that make up each of the pixels and loop until there’s no more rows or columns and the display the new image

DimImage()
Input Parameters: int rows, int columns, int pixels array, int image array, int dimvalue
Fuctionality: Loop through the array and subtract one to each of the values that make up each of the pixels and loop until there’s no more rows or columns and the display the new image

SaveImage()
Data: Variables for savechoice, file pointers
Functionality:Display a menu to prompt the user to ask whether or not to save their new image, If they select yes then write the data from the previous functions into the file and then close the file. If they select no then allow for the loop to go back to the editing menu

