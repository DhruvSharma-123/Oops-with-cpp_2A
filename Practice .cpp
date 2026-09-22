#include <iostream>
using namespace std;

class Student{
public:
string name;
int roolno;
double rln;
Student(string name,int roolno){
this->name=name;
this->roolno=roolno;
cout<<name<<" "<<roolno<<endl;
cout<<"int"<<endl;
}

Student(string name,double roolno){
this->name=name;
rln=roolno;
cout<<name<<" "<<rln<<endl;
cout<<"double"<<endl;
}

Student(Student& s){
    name=s.name;
    roolno=s.roolno;
cout<<name<<" "<<roolno<<endl;
cout<<"CopyConstructer"<<endl;
}
};

int main(){
    Student s1("Dhruv",68);
    Student s2("Dhruv",68.5);
    Student s3(s1);
    return 0;
}