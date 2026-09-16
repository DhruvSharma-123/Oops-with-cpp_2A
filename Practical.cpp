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


#include <iostream>
using namespace std;
class Patient{
public:
int patientID;
string name;
int count=0;
static int activePatient;
Patient(int ID,string n){
    patientID=ID;
    name=n;
    activePatient++;
}
~Patient(){
    activePatient--;
}



};

int Patient::activePatient=5;

int main(){
Patient p1(21,"Akshit");
Patient p2(22,"Aksaht");
    cout<<"Active patient:"<<Patient::activePatient<<endl;

}
