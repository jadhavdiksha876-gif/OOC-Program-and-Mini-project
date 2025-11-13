#include <iostream>
using namespace std;

struct student
{
	string name;
	int roll_no;
	char div;
	float marks;
};
int main(){
    
	student s;
	cout<<"enter name:";
	cin>>s.name;
	cout<<"enter roll_no:";
	cin>>s.roll_no;
	cout<<"enter div:";
	cin>>s.div;
	cout<<"enter marks:";
	cin>>s.marks;
	
	
	cout<<"name:" <<s.name <<endl;
	cout<<"roll_no:" <<s.roll_no <<endl;
	cout<<"div:" <<s.div <<endl;
	cout<<"marks:" <<s.marks <<endl;
	
	return 0;
	
}



