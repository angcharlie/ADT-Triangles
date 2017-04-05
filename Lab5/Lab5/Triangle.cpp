//Triangle.cpp
//ADT Implementation file for the Triangle.h 
//Charlie Ang 
//02/15/16

#include <iostream>
#include <cmath>
using namespace std;

#include "Triangle.h"	//implementation file includes header file 
//Triangle :: scope resolution operator 

//Default constructor prototype that provides default values for the ADT's data. 
//Uses (3, 4, 5) as default sides.
Triangle::Triangle()
{
	a = 3;
	b = 4;
	c = 5;
}

//Uses client-supplied values for the ADT's data. Checks and verifies the validity
//of the triangle data to validate if the three sides form a trianlge. 
Triangle::Triangle(const double sideA, const double sideB, const double sideC)
{
	//check to see if triangle sides for a valid triangle 
	if (((sideA + sideB) > sideC) && ((sideA + sideC) > sideB) && ((sideC + sideB) > sideA))
	{
		a = sideA;
		b = sideB;
		c = sideC;
	}
	else //output an error message and construct default triangle configuration 
	{
		cerr << "The sides given do not form a valid triangle. The triangle sides will be set to default" << endl;
		a = 3;
		b = 4;
		c = 5;
	}
}

//Access method that returns the value of SideA.
double Triangle::getSideA() const
{
	return a;
}

//Access method that returns the value of SideB.
double Triangle::getSideB() const
{
	return b;
}

//Access method that returns the value of SideC.
double Triangle::getSideC() const
{
	return c;
}

//Determines whether the triangle is a right triangle. 
//Returns true if it is a right triangle, false otherwise.
bool Triangle::isRightTriangle() const
{
	//checks to see if it is a right triangle 
	if ((pow(a, 2) == pow(c, 2) + pow(b, 2)) ||
		(pow(b, 2) == pow(c, 2) + pow(a, 2)) ||
		(pow(c, 2) == pow(a, 2) + pow(b, 2)))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Determines whether the triangle is an equilateral triangle. 
//Returns true if it is an equilateral triangle, false otherwise.
bool Triangle::isEquilateralTriangle() const
{
	//checks if all sides are equal 
	if ((a == b) && (b == c))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Determines if the triangle is an isosceles triangle.
//Returns true if it is a isosceles triangle, false otherwise.
bool Triangle::isIsoscelesTriangle() const
{
	if ((a == b) || (b == c) || (a == c))
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Computes and returns the area of the triangle.
double Triangle::TriangleArea() const
{
	//Heron's formula to calculate area of triangle 
	double s = (a + b + c) / 2;
	double area = sqrt(s * (s - a) * (s - b) * (s - c));
	return area;
}