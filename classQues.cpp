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
#include <iostream>
using namespace std;
class sta{
    public:
    static int count;

};  

int sta::count=56;
int main(){
    stat s;

    cout<<sta::count<<endl;
}