#include<iostream>
using namespace std;

class Person{
	private :
		int age ;
		char name ,addres;
		
	public :
			getdata(){
				
			}
			
			setdata(){
				cout<<"enter the name = "<<name;
				
				cout<<"enter the age = "<<age;
			
				cout<<"enter the addres = "<<addres;
			
		}
};

int main(){
	
	Person p;
	
	p.getdata();
}
