#include<iostream>

using namespace std;

class Employee{

	int salary;


public:

	Employee(){
	
		cout << "Employee() cons called... " << endl;
		this -> salary = 1000;
	
	}

	~Employee(){
	
	
		cout << "~Employee() dest called... " << endl;
	}

	void setSalary(int salary){
	
		this -> salary = salary;

	}

	int getSalary(){
	
	
		return salary;
	}



};

int main(int argc , char ** argv){

	Employee employee;

	employee.setSalary(5000);

	cout << "The salary of employee is :: " << employee.getSalary() << endl;

}




