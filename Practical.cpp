// // #include <iostream>
// // using namespace std;

// // class Product{
// // public:
// // string name;
// // int price;
// // int productID;
// // Product(string name,int price,int productId){
// //     this->name=name;
// //     this->price=price;
// //     this->productID=productID;
// // }

// // friend void ComparepPrice(Product& p,Product& p2);
// // };

// // void ComparepPrice(Product& p,Product& p2){
// //     if(p.price>p2.price){
// //         cout<<"Product first is more expensive";

// //     }else if(p.price==p2.price){
// //         cout<<"Both product is price is same";
// //     }
// //     else{
// //      cout<<"Product second is more expensive";
// //     }
// //     };

// //     int main(){
// //         Product p1("T.V",5000,101);
// //         Product p3("A.C",5000,102);
// //         ComparepPrice(p1,p3);
// //     }




// // #include <iostream>
// // using namespace std;

// // class BankAccount{
// // private:
// // int AccountNo;
// // string customeerName;
// // int balance;
// // public:
// // BankAccount(int A,string N,int B){
// //     AccountNo=A;
// //     customeerName=N;
// //     balance=B;
// // }

// // friend void compareBalance(BankAccount& b1,BankAccount& b2);

// // };

// // void compareBalance(BankAccount& b1,BankAccount& b2){
// //     if(b1.balance>b2.balance){
// //         cout<<b1.customeerName<<" has more Bank-Balance:"<<b1.balance<<endl;
// //     }else if(b1.balance==b2.balance){
// //         cout<<"In boyh account has same balance";
// //     }else{
// //         cout<<b2.customeerName<<" has more balance:"<<b2.balance<<endl;
// //     }
// // };

// // int main(){
// //     BankAccount b1(68,"Dhruv",80000);
// //     BankAccount b2(25,"Bhaskar",500);
// //     compareBalance(b1,b2);
// // }


// // #include <iostream>
// // using namespace std;
// // class Patient{
// // public:
// // int patientID;
// // string name;
// // int count=0;
// // static int activePatient;
// // Patient(int ID,string n){
// //     patientID=ID;
// //     name=n;
// //     activePatient++;
// // }
// // ~Patient(){
// //     activePatient--;
// // }



// // };

// // int Patient::activePatient=5;

// // int main(){
// // Patient p1(21,"Akshit");
// // Patient p2(22,"Aksaht");
// //     cout<<"Active patient:"<<Patient::activePatient<<endl;

// // }



// // #include <iostream>
// // using namespace std;
// // class University{
// //     private:
// //     string UniName="AKTU";
// //     public:
// //     class Department{

// //         public:
// //         string DeptName;
// //         int StudentCount;
// //         Department(string n,int c){
// //         DeptName=n;
// //         StudentCount=c;
       
// //         }
// //          void display(University& u){
// //             cout<<u.UniName<<endl;
// //             cout<<DeptName<<endl;
// //             cout<<StudentCount<<endl;
// //         }

// //     };
// // };

// // int main(){
// //     University u1;
// // University::Department d1("AIML",21);
// // d1.display(u1);
// // }



// // #include <iostream>
// // using namespace std;
// // class Employee{
// // public:
// // string name;
// // int employeeid;
// // int salary;
// // Employee(){
// //     cout<<"Obj is created";
// // }

// // Employee(string n,int id,int s){
// //     name=n;
// //     employeeid=id;
// //     salary=s;
// // }

// // Employee(Employee& e){
// //     name=e.name;
// //     employeeid=e.employeeid;
// //     salary=e.salary;
// // }

// // void  display()const{
// //     cout<<name<<endl;
// //     cout<<employeeid<<endl;
// //     cout<<salary<<endl;
// // }
// // };

// // int main(){
// //     const Employee e("Sihna",68,10000);
// //     e.display();
// //     Employee e1("Satti",65,1000);
// // Employee e2(e1);
// // e2.display();
// // }




// #include <iostream>
// using namespace std;

// class ResultAnalyzer;  // Forward declaration

// class StudentResult {
// private:
//     int rollNo;
//     string name;
//     int marks[3];
//     static int totalStudents;

// public:
//     // Parameterized constructor
//     StudentResult(int r, string n, int m1, int m2, int m3) {
//         rollNo = r;
//         name = n;
//         marks[0] = m1;
//         marks[1] = m2;
//         marks[2] = m3;
//         totalStudents++;
//     }

//     // Friend class declaration
//     friend class ResultAnalyzer;

//     // Static function to display total students
//     static void showTotalStudents() {
//         cout << "Total Students: " << totalStudents << endl;
//     }

//     // Destructor
//     ~StudentResult() {
//         cout << "Destructor called for " << name << endl;
//     }
// };

// // Initialize static member
// int StudentResult::totalStudents = 0;

// class ResultAnalyzer {
// public:
//     void analyze(StudentResult &s) {
//         int total = s.marks[0] + s.marks[1] + s.marks[2];
//         float percentage = total / 3.0;

//         cout << "\n--- Student Result ---\n";
//         cout << "Roll No: " << s.rollNo << endl;
//         cout << "Name: " << s.name << endl;
//         cout << "Total Marks: " << total << endl;
//         cout << "Percentage: " << percentage << "%" << endl;

//         if (percentage >= 40)
//             cout << "Result: Pass<<endl";
//         else
//             cout << "Result: Fail<<endl";
//     }
// };

// int main() {
//     StudentResult s1(101, "Dhruv", 85, 90, 80);
//     StudentResult s2(102, "Riya", 35, 40, 30);

//     ResultAnalyzer analyzer;
//     analyzer.analyze(s1);
//     analyzer.analyze(s2);

//     StudentResult::showTotalStudents();
// return 0;
// }




    // #include <iostream>
    // using namespace std;
    // class Student{
    // public:
    // int rollno;
    // string name;
    // double cgpa;
    // Student(int rollno,string name){
    //     this->name=name;
    //     this->rollno=rollno;
    // }
    // Student(int rollno,string name,double cgpa){
    //     this->rollno=rollno;
    //     this->name=name;
    //     this->cgpa=cgpa;
    // }
    // void UpdateCGPA(double cgpa){
    //     this->cgpa=cgpa;
    // }
    // class Adress{
    //     public:
    //     string state;
    //     string city;
    //     Adress(string state,string city,Student& s){
    //         this->state=state;
    //         this->city=city;
    //         cout<<state<<" "<<city<<endl;
    //         cout<<s.name<<" "<<s.rollno<<" "<<s.cgpa<<endl;
    //     }
    //     void Display(){
    //         cout<<state<<" "<<city<<endl;
    //     }
    // };
    // };


    // int main(){
    // Student S[5]={Student(68,"Dhruv"), Student(98,"Keshav"),Student(66,"Bhaskar",7.5),Student(67,"Divyansh",8.5),Student(62,"Sheetal",8.5)};
    // S[0].UpdateCGPA(9.5);
    // S[1].UpdateCGPA(9.8);
    // for(int i=0;i<5;i++){
    // Student::Adress a("UttarPradesh","Modinagar",S[i]);
    // }
    // }



    #include <iostream>
    using namespace std;
    class Product{
        public:
        int Productid;
        string ProductName;
        int price;
        Product(int p,string pn){
            Productid=p;
            ProductName=pn;
            
        }
        int CalculatePrice(int price){
return price;
        }
        int CalculatePrice(int Price,int disP,int deliverycharge){
            int calculate=Price-((Price*disP)/100)+deliverycharge;
            return calculate;
        }
    };

    int main(){
        Product* ptr=new Product(68,"AC");
cout<<ptr->CalculatePrice(100,5,10)<<endl;
cout<<ptr->CalculatePrice(1000);
    }