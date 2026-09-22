// // #include <iostream>
// // using namespace std;

// // class Student{
// // public:
// // string name;
// // int roolno;
// // double rln;
// // Student(string name,int roolno){
// // this->name=name;
// // this->roolno=roolno;
// // cout<<name<<" "<<roolno<<endl;
// // cout<<"int"<<endl;
// // }

// // Student(string name,double roolno){
// // this->name=name;
// // rln=roolno;
// // cout<<name<<" "<<rln<<endl;
// // cout<<"double"<<endl;
// // }

// // Student(Student& s){
// //     name=s.name;
// //     roolno=s.roolno;
// // cout<<name<<" "<<roolno<<endl;
// // cout<<"CopyConstructer"<<endl;
// // }
// // };

// // int main(){
// //     Student s1("Dhruv",68);
// //     Student s2("Dhruv",68.5);
// //     Student s3(s1);
// //     return 0;
// // }   



// #include <iostream>
// using namespace std;
// class Student{
//     public:
// string name;
// double*cgpa;
// Student(string name,double cgp){
// this->name=name;
//  cgpa=new double;
//  *cgpa=cgp;
// }

// Student(Student& s){
//     name=s.name;
//    cgpa=new double;
//    *cgpa=*s.cgpa;
// }


// };

// int main(){
//     Student s1("Dhruv",9.5);
//     Student s2(s1);
//     *s2.cgpa=8.5;
//     cout<<*s1.cgpa<<endl;
// }


// #include <iostream>
// using namespace std;
// class Class{
//     public:
//   string name="Dhruv Sharma";
//   int rollno=68;
// void display(){
//     cout<<name<<" "<<rollno<<endl;
// }

// };

// class student:public Class{
//     public:
// student(){
// cout<<"Copy Constructer";
// }
// };

// int main(){
//     student s;
//     s.display();
// }

//Compile time Polymorphism
// #include <iostream>
// using namespace std;
// class Student{
//     public:
// void Display(string name,int rollno,string branch){
//     cout<<name<<" "<<rollno<<" "<<branch<<endl;
// cout<<"1"<<endl;
// }
// void Diplay(string name,double rollno,string branch){
//     cout<<name<<" "<<rollno<<" "<<branch<<endl;
// cout<<"2"<<endl;
// }

// };

// int main(){
//     Student s1;
//     s1.Display("Dhruv",68,"Aiml");
//     s1.Diplay("DTA",68.5,"AIML");
// }