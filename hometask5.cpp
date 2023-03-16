/*
q:3]Create a class named "shape" with a function that prints -
    "This is a shape."
    Create another class named "polygon".Inheriting the shape class with the same 
    function that prints ->"Polygon is a shape".
    Create two another classes named "Rectangle" & "Triangle" having the same
    function which prints ->
    "Rectangle is polygon" and "Triangle is polygon".
    Make another class named "square" which prints ->
    "Square is a rectangle".
   
    ***Try calling the function by the object of each of these classes.***
    
    */

#include<iostream>
using namespace std;

 class Shape
 {
 	public:
 	void shape()
 	{
 		cout<<"****************************************This is a Shape****************************************";
	 }
 };
 
 class polygon:public Shape
 {
 	public:
    void shape()
	{
		cout<<"****************************************Polygon is a shape****************************************";
		}	
 };
 
 class rectangle:public polygon
 {
 	public:
 	void Shape()
 	{
 	cout<<"****************************************Rectangle is polygon****************************************";
    } 
 };
 
 class triangle:public rectangle
 {
 	public:
 	void Shape()
     	{
             cout<<"****************************************Triangle is polygon****************************************"<<endl;
        }
};
 
 class square:public triangle
 {
 	void Shape()
 	{
       cout<<"****************************************Squre is rectangle****************************************"<<endl;	
    }
 };
 
 
 int main()
 {
 	Shape s;
 	s.shape();
 	cout<<""<<endl;
 	
 	polygon p;
 	p.shape();
 	cout<<""<<endl;
 	
 	rectangle r;
 	r.Shape();
 	cout<<""<<endl;
 	
 	triangle t;
 	t.Shape();
 	cout<<""<<endl;
    
 	return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
