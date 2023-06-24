#include <stdio.h>

#define PI 3.14

int main() {
  int radius, height;
  
  printf("Enter the radius of the circle: ");
  scanf("%d", &radius);
  
  printf("Enter the height of the cylinder: ");
  scanf("%d", &height);
  
  float volume = PI * radius * radius * height;
  
  printf("The volume of the cylinder is: %.2f\n", volume);
  
  return 0;
}
