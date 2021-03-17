
#include <stdio.h> 
int main(){
    float side, areaofSquare, areaofCircle,radius,length,breadth,areaofRectangle,perimeterofRectangle,circumference,perimeterofSquare;
    printf("Enter the side of square : ");
    scanf("%f", &side);
    areaofSquare = side * side; 
   perimeterofSquare=4*side;
	 printf("\nEnter the radius of Circle : ");
	scanf("%f", &radius);
	areaofCircle = 3.14 * radius * radius;
	circumference=2*(3.14*radius);
	printf("\nEnter the Length of Rectangle : ");
   scanf("%f", &length);
  printf("\nEnter the Breadth of Rectangle : ");
   scanf("%f", &breadth);
 
   areaofRectangle = length * breadth;
   
   perimeterofRectangle=2*(length+breadth); 
   printf("Area of square : %f\n", areaofSquare);
   printf("Perimeter of Square :%f\n",perimeterofSquare);
	printf("\n Area of Circle : %f", areaofCircle);
	printf("\nCircumferene of circle is : %f",circumference);
	 printf("\nArea of Rectangle : %f", areaofRectangle);
   printf("\nPerimeter of Rectangle : %f", perimeterofRectangle);

	return 0;
}