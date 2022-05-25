#include<iostream>
using namespace std;
class mybase{
	
	public:
		void show(){
			cout<<"inside base class"<<endl;
		}
		 virtual void print(){
			cout<<"base class print function called"<<endl;
		}
};
class der:public mybase{
	void show(){
			cout<<"inside derived class"<<endl;
		}
	virtual void print(){
			cout<<"derived class print function called"<<endl;
		}	
};
int main(){
	mybase *ptr;
	der obj;
	ptr=&obj;
	ptr->print();
	ptr->show();
}
