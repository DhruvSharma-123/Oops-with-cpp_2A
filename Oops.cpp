// #include <iostream>
// using namespace std;
// class student{
// public:
// string name;
// int rollno;
// void display(){
//     cout<<name<<endl;
//     cout<<rollno<<endl;
// }
// };

// int main(){
//     student s;
//     cout<<"Enter your name:";
//     cin>>s.name;
    
//     cout<<"Enter rollno :";
//     cin>>s.rollno;
//     s.display();
// }


// #include <iostream>
// using namespace std;
// class employee{
// private:
// string name;
// int salary;
// int EmployeeId;
// public:
// void input(string name,int salary,int EmployeeId );
// void display();
// };

// void employee::input(string name,int salary,int EmployeeId ){
//     this->name=name;
//     this->salary=salary;
//     this->EmployeeId=EmployeeId;
// }

// void employee::display(){
//     cout<<"Name:"<<name<<endl;
//     cout<<"Salary:"<<salary<<endl;
//     cout<<"EmployeeId:"<<EmployeeId<<endl;
// }

// int main(){
//     employee e;
//     e.input("Dhruv",25000,68);
//     e.display();
// }


//Ques-3
#include <iostream>
using namespace std;
void callByV(int a,int b){
    int c=a;
    a=b;
    b=c;
    cout<<"After swapping:"<<a<<" "<<b<<endl;
}

void callByR(int& a,int& b){
    int c=a;
    a=b;
    b=c;
    cout<<"After swapping:"<<a<<" "<<b<<endl;
}

int main(){
    int a;
    cout<<"Enter first No:";
    cin>>a;
    int b;
    cout<<"Enter Second No:";
cin>>b;
cout<<"Call By Value"<<endl;
cout<<"Before Swapping:"<<a<<" "<<b<<endl;
callByV(a,b);
cout<<a<<" "<<b<<endl;

cout<<"Call By Reference"<<endl;
cout<<"Before Swapping:"<<a<<" "<<b<<endl;
callByR(a,b);
cout<<a<<" "<<b<<endl;

}