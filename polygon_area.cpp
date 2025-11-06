//to find area of polygons and circle
#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
	float length,breadth,base,height,side,radius;
	printf("enter length of a rectangle: ");
	scanf("%f",&length);
	printf("enter breadth of a rectangle: ");
	scanf("%f",&breadth);
	printf("area of the rectangle is %f \n",length*breadth);
	printf("enter base of a triangle: ");
	scanf("%f",&base);
	printf("enter height of a triangle: ");
	scanf("%f",&height);
	printf("area of the triangle is %f \n",0.5*base*height);
	printf("enter side of a square: ");
	scanf("%f",&side);
	printf("area of the square is %f \n",pow(side,2));
	printf("radius of a circle: ");
	scanf("%f",&radius);
	printf("the area of the circle is %f",PI*(pow(radius,2)));
	return 0;
}
