#include<stdio.h>
#include<math.h>

//Global declaration
float pi = 3.14;

//main function
int main()
{
    //Variable declaration
  int rad,height;
  float surface_area,volume;

  //Radius and Height input
  printf("Enter the Length of the Cylinder:\n");
  scanf("%d", &rad);
  printf("Enter the height of the Cylinder:\n");
  scanf("%d", &height);
  
  //Formulas for calculation
  surface_area = 2*pi*rad*(rad + height);
  volume = pi*rad*rad*height;

  //Final Output
  printf("The Surface Area of Cylinder is %0.4f.",surface_area);
  printf("\nThe Volume of Cylinder is %0.4f.",volume);

  //return
  return 0;
}
