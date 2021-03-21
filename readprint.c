//Author name : Archit Gandotra
//Creation Date: 21st March 2021
//Purpose :To read and print elements in two dimensional array 
#include<stdio.h>//Preprocessive directive to include input output functions header file
//Start of the main body function
int main(){
   /* 2D array declaration*/
   int disp[2][3];
   /*Counter variables for the loop*/
   int i, j;
   //Start of for loop
   for(i=0; i<2; i++) {//For loop for rows
      for(j=0;j<3;j++) {//For loop for columns
         printf("Enter value for disp[%d][%d]:", i, j);//Printf function calling to print the value for disp
         scanf("%d", &disp[i][j]);//Scanf function calling to read the user  input
      }
   }
   //Displaying array elements
   printf("Two Dimensional array elements:\n");//Printf function calling to print the two dimensional array elements
   for(i=0; i<2; i++) {//For loop for rows
      for(j=0;j<3;j++) {//For loop for columns
         printf("%d ", disp[i][j]);//Printf function calling 
         //if statement
         if(j==2){//If statement
            printf("\n");//Printf function calling to print the number 
         }
      }
   }
   return 0;//Return statement
} //End of the main body function