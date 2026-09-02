//Destructors    
#include <iostream>
using namespace std;
class obj{
public:
string name;
obj(){
    cout<<"I am constructre"<<endl;
}
~obj(){
    cout<<"I am Destructer";
}
};

int main(){
    obj a;
    a.name="Dhruv";
    cout<<a.name<<endl;
}