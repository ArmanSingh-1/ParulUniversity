#include<stdio.h>
#include<math.h>

//main function
int main()
{
  //Variable declaration
  int len;
  float area,perimeter;
  double diagonal;

  //Length input
  printf("Enter the Length of the Square:\n");
  scanf("%d", &len);

  //Formulas for calculation
  area = len * len;
  perimeter = 4 * len;
  diagonal = sqrt(2) * area;

  //Final Output
  printf("\nThe Area of Square is %0.4f.",area);
  printf("\nThe Perimeter of Square is %0.4f.",perimeter);
  printf("\nThe Diagonal of Square is %lf.",diagonal);

  //return
  return 0;
}
