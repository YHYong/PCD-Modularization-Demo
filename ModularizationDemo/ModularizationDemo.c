/*
Description: Modularization for Tutorial 12 Q6
*/

#include<stdio.h>
#include<stdlib.h>
#define PI 3.14159

double getRadius();
double getCircumference(double radius);
double getArea(double radius);
void   displayCircleInfo(double circumference, double area);

void main()
{
	double radius = getRadius();
	double circumference = getCircumference(radius);
	double area = getArea(radius);

	displayCircleInfo(circumference, area);
}

double getRadius()
{
	double radius;

	printf("Enter radius >");
	scanf("%lf", &radius);

	return radius;
}

double getCircumference(double radius)
{
	return 2 * PI * radius;
}

double getArea(double radius)
{
	return PI * radius * radius;
}

void displayCircleInfo(double circumference, double area)
{
	printf("Circumference = %.3f\n", circumference);
	printf("Area = %.3f\n", area);
}