#include <iostream>

using namespace std;

class Base{

	int a;

public:

	Base(){

		cout << "Base() cons called... " << endl;
	}

	~Base(){

		cout << "~Base() dest called... " << endl;

	}

	void setA(int a){

		this -> a = a;
	}

	int getA(){

		return this -> a;
	}

};


class Derived : public Base{

	int b;

public:

	Derived(){

		cout << "Dervied() cons called... " << endl;
	}

	~Derived(){


		cout << "~Derived() dest called... " << endl;
	}

	void setB(int b){

		this -> b = b;
		
	}

	int getB(){

		return this -> b;
	}


	void display(){

		cout << "The value of base is :: " << getA() << " and value of Derived is :: " << getB() <<  endl; 
	}

};


int main(){


	Base b;

	Derived d;

	b.setA(100);

	cout << "Val of b.getA() :: " << b.getA() << endl;

	d.setA(200);

	cout << "Value of d.getA() :: " << d.getA() << endl;

	d.setB(300);

	cout << "Value of d.getB() :: " << d.getB() << endl;

	d.display();

}
