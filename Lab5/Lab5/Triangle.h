//Triangle.h
//Charlie Ang 
//02/15/16
//Header file that includes the interface specifications for the triangle class

#ifndef _TRIANGLE_H
#define _TRIANGLE_H

class Triangle {
public:
	//Default constructor prototype that provides default values for the ADT's data. 
	//Uses (3, 4, 5) as default sides.
	Triangle();

	//Takes in double const for sideA, sideB, and sideC and uses client-supplied 
	//values for the ADT's data. Checks and verifies the validity
	//of the triangle data to validate if the three sides form a trianlge. 
	//If three sides do not form a valid triangle, default will be set.
	Triangle(const double sideA, const double SideB, const double SideC);

	//Access method that returns the value of SideA.
	double getSideA() const;

	//Access method that returns the value of SideB.
	double getSideB() const;

	//Access method that returns the value of SideC.
	double getSideC() const;

	//Determines whether the triangle is a right triangle. 
	//Returns true if it is a right triangle, false otherwise.
	bool isRightTriangle() const;

	//Determines whether the triangle is an equilateral triangle. 
	//Returns true if it is an equilateral triangle, false otherwise.
	bool isEquilateralTriangle() const;

	//Determines if the triangle is an isosceles triangle.
	//Returns true if it is a isosceles triangle, false otherwise.
	bool isIsoscelesTriangle() const;

	//Computes and returns the area of the triangle.
	double TriangleArea() const;

private:
	double a, b, c;	//private variables for side lengths of triangle
};

#endif



