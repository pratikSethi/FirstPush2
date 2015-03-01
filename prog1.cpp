#include<iostream>

using namespace std;

class Base{

	int a;

	int b;

public:

	Base(){

		cout << "Base() cons called... " << endl;

		this -> a = 5;

		this -> b = 5;
	}

	Base(int a , int b){

		cout << "Base(int , int) param called... " << endl;

		this -> a = a;

		this -> b = b;

		cout << "The value of a is :: " << a << " and b is :: " << b << endl;
	}

	~Base(){

		cout << "~Base() dest called... " << endl;
	}

	void display(){

		cout << "The value of a is :: " << a << " and b is :: " << b << endl;
	}

	


};



int main(int argc , char ** argv){

	Base def;

	Base param(10,20);

	def.display();

	param.display();


}
