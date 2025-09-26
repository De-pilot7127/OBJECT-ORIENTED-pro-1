/*
Name:
Reg No:
Date:
Version
Description:c++ classes and object 
*/
#include <iostream>
using namespace std;

class Addition 
{
	public:
	float length,breadth,height; 
	
	double calculate_pro(){
		return length*breadth*height;
	}
	

};
int main(){
	//object 
	Addition addition1;
	float product;
	
	addition1.length=22;
	addition1.breadth=30;
	addition1.height=50;
	product = addition1.calculate_pro();   
    
	cout<<"The area is"<<product<<endl; 
	
	return 0;
};