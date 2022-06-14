#include <iostream>
using namespace std;
typedef struct employee
{
    int id;
    string name;
    float salary;
}ep;
int main(){
    ep dhruv;
    dhruv.id=1;
    dhruv.name="Dhruv";
    dhruv.salary=155456;
    ep Harshit;
    Harshit.id=4;
    Harshit.name="Harshit";
    Harshit.salary=154686;
    cout<<dhruv.id<<endl;
    cout<<dhruv.name<<endl;
    cout<<dhruv.salary<<endl;
    cout<<Harshit.id<<endl;
    cout<<Harshit.name<<endl;
    cout<<Harshit.salary<<endl;
    
    return 0;
}