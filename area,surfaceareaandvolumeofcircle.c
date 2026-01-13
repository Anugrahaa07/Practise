#include<stdio.h>
#include<math.h>
int main() {
    float r = 0.0f;
    float area = 0;
    float surface_area = 0;
    float volume = 0;
    
    printf("Enter the radius: ");
    scanf("%f", &r);
    
    area = (3.14 * pow(r, 2));
    surface_area = 4 * 3.14 * pow(r,2);
    volume = (4/3) * 3.14 * pow(r,3);
    
    printf("The area of the circle is %f\n", area);
    printf("The surface area of the sphere is %f\n", surface_area);
    printf("The volume of the sphere is %f", volume);
    
   return 0;
}