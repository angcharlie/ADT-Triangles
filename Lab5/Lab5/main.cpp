//main.cpp
//Test program 
//Charlie Ang 
//02/15/16

#include <iostream>
using namespace std;
#include "Triangle.h"


void printTriangleDetails(const Triangle &tri)	//const parameter by reference 
{
	cout << "Triangle has sides (";
	cout << tri.getSideA() << ", ";
	cout << tri.getSideB() << ", ";
	cout << tri.getSideC() << ")" << endl;

	if (tri.isRightTriangle())
		cout << " Triangle is a right triangle" << endl;
	else
		cout << " Triangle is not a right triangle" << endl;

	if (tri.isEquilateralTriangle())
		cout << " Triangle is an equilateral triangle" << endl;
	else
		cout << " Triangle is not an equilateral triangle" << endl;

	if (tri.isIsoscelesTriangle())
		cout << " Triangle is an isosceles triangle" << endl;
	else
		cout << " Triangle is not an isosceles triangle" << endl;

	cout << " Area of triangle = " << tri.TriangleArea() << endl;	
}

int main()
{
	system("cls");

	Triangle t1;	//Default triangle 
	cout << "t1: [" << t1.getSideA() << ", " << t1.getSideB() << ", "
		<< t1.getSideC() << "]" << endl;
	cout << "Default triangle:" << endl;
	printTriangleDetails(t1);
	cout << endl;

	Triangle t2(5, 4, 3);	//convert constructor
	cout << "t2(5, 4, 3) triangle:" << endl;
	printTriangleDetails(t2);
	cout << endl;

	Triangle t3(4, 5, 3);
	cout << "t3(4, 5, 3) triangle:" << endl;
	printTriangleDetails(t3);
	cout << endl;

	Triangle t4(4, 6, 4);	//isosceles
	cout << "t4(4, 6, 4) triangle:" << endl;
	printTriangleDetails(t4);
	cout << endl;

	Triangle t5(2, 4, 2);	//invalid side combination
	cout << "t5(2, 4, 2) triangle:" << endl;
	printTriangleDetails(t5);
	cout << endl;

	Triangle t6(5, 2, 5);	//isosceles
	cout << "t6(5, 2, 5) triangle:" << endl;
	printTriangleDetails(t6);
	cout << endl;

	Triangle t7(8, 8, 8);	//equilateral
	cout << "t7(8, 8, 8) triangle:" << endl;
	printTriangleDetails(t7);
	cout << endl;

	Triangle t8(0, 0, 0);	//invalid
	cout << "t8(0, 0, 0) triangle:" << endl;
	printTriangleDetails(t8);
	cout << endl;

	Triangle t9(4, 4, 6);	//isosceles
	cout << "t9(4, 4, 6) triangle:" << endl;
	printTriangleDetails(t9);
	cout << endl;

	Triangle t10(3.5, 4.8, 6.2);
	cout << "t10(3.5, 4.8, 6.2) triangle:" << endl;
	printTriangleDetails(t10);
	cout << endl;

	Triangle t11(3.5, 3.5, 6.2);
	cout << "t11(3.5, 3.5, 6.2) triangle:" << endl;
	printTriangleDetails(t11);
	cout << endl;

	Triangle t12(3.5, 3.5, 3.5);
	cout << "t12(3.5, 3.5, 3.5) triangle:" << endl;
	printTriangleDetails(t12);
	cout << endl;

	//Trying some other usage patterns
	t1 = t4;	//assignment of triangle objects
	printTriangleDetails(t1);
	cout << endl;

	t5 = Triangle(6, 8, 10);	//create triangle "on the fly"
	printTriangleDetails(t5);
	cout << endl;
	t5 = Triangle(t5.getSideA(), t5.getSideB(), 9);	//change 3rd side of t5
	printTriangleDetails(t5);

	return(0);
}