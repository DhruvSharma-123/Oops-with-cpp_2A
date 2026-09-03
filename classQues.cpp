                                                            //Destructors    
// #include <iostream>
// using namespace std;
// class obj{
// public:
// string name;
// obj(){
//     cout<<"I am constructre"<<endl;
// }
// ~obj(){
//     cout<<"I am Destructer";
// }
// };

// int main(){
//     obj a;
//     a.name="Dhruv";
//     cout<<a.name<<endl;
// }

     //                                               Static KeyWord
// #include <iostream>
// using namespace std;
// class sta{
//     public:
//     static int count;

// };  

// int sta::count=56;
// int main(){
//     stat s;

//     cout<<sta::count<<endl;
// }


                                     //  Copy constructer
// #include <iostream>
// using namespace std;                                     
// class student{
//     public:
//     string name;
//     int marks;
//     student(string name,int marks){
// this->name=name;
// this->marks=marks;
//     }
//     student(const student& s){
// name=s.name;
// marks=s.marks;
//     }

//     void display(){
// cout<<name<<endl;
// cout<<marks<<endl;
//     }
// };

// int main(){
//     student s1("Dhruv",100);
// student s2(s1);
// s2.display();
// }


#include <iostream>
using namespace std;                                     
class student{
     double* cgpa;
    public:
    string name;
    int marks;

    student(string name, int marks, double cgpa) {
    this->name = name;
    this->marks = marks;

    this->cgpa = new double;
    *(this->cgpa) = cgpa;
}


    student(const student& s){
name=s.name;
marks=s.marks;
this->cgpa=s.cgpa;
    }

    void display(){
cout<<name<<endl;
cout<<marks<<endl;
    }
};

int main(){
    student s1("Dhruv",90 ,9.5);
student s2(s1);
s2.display();
}