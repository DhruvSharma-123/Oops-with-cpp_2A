#include <iostream>
using namespace std;

class Product{
public:
string name;
int price;
int productID;
Product(string name,int price,int productId){
    this->name=name;
    this->price=price;
    this->productID=productID;
}

friend void ComparepPrice(Product& p,Product& p2);
};

void ComparepPrice(Product& p,Product& p2){
    if(p.price>p2.price){
        cout<<"Product first is more expensive";

    }else if(p.price==p2.price){
        cout<<"Both product is price is same";
    }
    else{
     cout<<"Product second is more expensive";
    }
    };

    int main(){
        Product p1("T.V",5000,101);
        Product p3("A.C",5000,102);
        ComparepPrice(p1,p3);
    }