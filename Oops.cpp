#include <iostream>
using namespace std;
class student{
public:
string name;
int rollno;
void display(){
    cout<<name<<endl;
    cout<<rollno<<endl;
}
};

int main(){
    student s;
    cout<<"Enter your name:";
    cin>>s.name;
    
    cout<<"Enter rollno :";
    cin>>s.rollno;
    s.display();
}