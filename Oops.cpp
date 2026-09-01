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
// #include <iostream>
// using namespace std;
// void callByV(int a,int b){
//     int c=a;
//     a=b;
//     b=c;
//     cout<<"After swapping:"<<a<<" "<<b<<endl;
// }

// void callByR(int& a,int& b){
//     int c=a;
//     a=b;
//     b=c;
//     cout<<"After swapping:"<<a<<" "<<b<<endl;
// }

// int main(){
//     int a;
//     cout<<"Enter first No:";
//     cin>>a;
//     int b;
//     cout<<"Enter Second No:";
// cin>>b;
// cout<<"Call By Value"<<endl;
// cout<<"Before Swapping:"<<a<<" "<<b<<endl;
// callByV(a,b);
// cout<<a<<" "<<b<<endl;

// cout<<"Call By Reference"<<endl;
// cout<<"Before Swapping:"<<a<<" "<<b<<endl;
// callByR(a,b);
// cout<<a<<" "<<b<<endl;

// }


// Ques 4
// #include <iostream>
// using namespace std;
// class funOR{
// public:
// void area(int l,int b,int s){
//     cout<<"Area of Square:"<<s*s<<endl;
// cout<<"Area of Rectangle:"<<l*b<<endl;
// }

// void area(double l,int b,double s){
//     cout<<"Area of Square:"<<s*s<<endl;
// cout<<"Area of Rectangle:"<<l*b<<endl;
// }

// void Si(int p,int r,int t){
//     cout<<"Simple Interest:"<<(p*r*t)/100<<endl;
// }

// };

// int main(){
//     funOR f;
//     f.area(1,2,3);
//         f.area(1.5,2.6,3.5);
// f.Si(100,50,1);
// }


// QUES 5
#include <iostream>
using namespace std;
class Product{
    public:
string name;
int price;
Product(string name,int price){
this->name=name;
this->price=price;
}
};

void HigherPrice(Product& p,Product& q){
    if(p.price>q.price){
        cout<<"First product is more expensive:"<<p.price<<endl;
    }else{
             cout<<"Second product is more expensive:"<<q.price<<endl;
    }
}

int main(){
    Product p("T-v",25000);
    Product q("Fridge",35000);
    HigherPrice(p,q);
}
