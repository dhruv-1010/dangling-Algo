#include <iostream>
using namespace std;
union money
{//use union when we want to use any one of the following values 
    int rice;
    char car;
    float pounds;
};
int main(){
    union money m1;
    m1.rice =34;
    m1.car='c';
    cout<<m1.rice<<endl;
    cout<<m1.car;
    return 0;
}