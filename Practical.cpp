// #include <iostream>
// using namespace std;

// class Product{
// public:
// string name;
// int price;
// int productID;
// Product(string name,int price,int productId){
//     this->name=name;
//     this->price=price;
//     this->productID=productID;
// }

// friend void ComparepPrice(Product& p,Product& p2);
// };

// void ComparepPrice(Product& p,Product& p2){
//     if(p.price>p2.price){
//         cout<<"Product first is more expensive";

//     }else if(p.price==p2.price){
//         cout<<"Both product is price is same";
//     }
//     else{
//      cout<<"Product second is more expensive";
//     }
//     };

//     int main(){
//         Product p1("T.V",5000,101);
//         Product p3("A.C",5000,102);
//         ComparepPrice(p1,p3);
//     }




// #include <iostream>
// using namespace std;

// class BankAccount{
// private:
// int AccountNo;
// string customeerName;
// int balance;
// public:
// BankAccount(int A,string N,int B){
//     AccountNo=A;
//     customeerName=N;
//     balance=B;
// }

// friend void compareBalance(BankAccount& b1,BankAccount& b2);

// };

// void compareBalance(BankAccount& b1,BankAccount& b2){
//     if(b1.balance>b2.balance){
//         cout<<b1.customeerName<<" has more Bank-Balance:"<<b1.balance<<endl;
//     }else if(b1.balance==b2.balance){
//         cout<<"In boyh account has same balance";
//     }else{
//         cout<<b2.customeerName<<" has more balance:"<<b2.balance<<endl;
//     }
// };

// int main(){
//     BankAccount b1(68,"Dhruv",80000);
//     BankAccount b2(25,"Bhaskar",500);
//     compareBalance(b1,b2);
// }


// #include <iostream>
// using namespace std;
// class Patient{
// public:
// int patientID;
// string name;
// int count=0;
// static int activePatient;
// Patient(int ID,string n){
//     patientID=ID;
//     name=n;
//     activePatient++;
// }
// ~Patient(){
//     activePatient--;
// }



// };

// int Patient::activePatient=5;

// int main(){
// Patient p1(21,"Akshit");
// Patient p2(22,"Aksaht");
//     cout<<"Active patient:"<<Patient::activePatient<<endl;

// }



// #include <iostream>
// using namespace std;
// class University{
//     private:
//     string UniName="AKTU";
//     public:
//     class Department{

//         public:
//         string DeptName;
//         int StudentCount;
//         Department(string n,int c){
//         DeptName=n;
//         StudentCount=c;
       
//         }
//          void display(University& u){
//             cout<<u.UniName<<endl;
//             cout<<DeptName<<endl;
//             cout<<StudentCount<<endl;
//         }

//     };
// };

// int main(){
//     University u1;
// University::Department d1("AIML",21);
// d1.display(u1);
// }



#include <iostream>
using namespace std;
class Employee{
public:
string name;
int employeeid;
int salary;
Employee(){
    cout<<"Obj is created";
}

Employee(string n,int id,int s){
    name=n;
    employeeid=id;
    salary=s;
}

Employee(Employee& e){
    name=e.name;
    employeeid=e.employeeid;
    salary=e.salary;
}

void  display()const{
    cout<<name<<endl;
    cout<<employeeid<<endl;
    cout<<salary<<endl;
}
};

int main(){
    const Employee e("Sihna",68,10000);
    e.display();
    Employee e1("Satti",65,1000);
Employee e2(e1);
e2.display();
}