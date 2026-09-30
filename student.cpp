#include<iostream>
using namespace std;
class student
{
private :
char name[30];
int rollno;
float marks;
public:
void getdata()
{
cout<<"enter name of the student:";
cin>>name;
cout<<"enter rollNo of the student:";
cin>>rollno;
cout<<"enter marks of the student:";
cin>>marks;
}
void display()
{
cout<<"name of the student:"<<name<<endl;
cout<<"rollNo of the student:"<<rollno<<endl;
cout<<"marks of the student:"<<marks<<endl;
}
};
int main()
{
student s;
s.getdata();
s.display();
return 0;
}
