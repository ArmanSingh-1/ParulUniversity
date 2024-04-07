#include<stdio.h>
#include<math.h>

//main function
int main()
{
  //Variable declaration
  float len,wid,area,perimeter;
  double diagonal;

  //Length and Width input
  printf("Enter the Length of the Rectangle:\n");
  scanf("%f", &len);
  printf("Enter the Width of the Rectangle:\n");
  scanf("%f", &wid);

  //Formulas for calculation
  area = len * wid;
  perimeter = 2 * (len + wid);
  diagonal = sqrt(len * len + wid * wid);

  //Final Output
  printf("\nThe Area of the Rectangle is %0.4f.",area);
  printf("\nThe Perimeter of the Rectangle is %0.4f.",perimeter);
  printf("\nThe Diagonal of the Rectangle is %lf.",diagonal);

  //return
  return 0;
}
