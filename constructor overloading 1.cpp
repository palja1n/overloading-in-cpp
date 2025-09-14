#include <iostream>
using namespace std;
class Add{
public:
    Add(int a, int b){
        cout << "a + b = "<<a+b<<endl;
    }
    Add(float a, float b){
        cout << "float a + b = "<<a+b<<endl;
    }
    Add(int a, int b,int c){
        cout << "a + b + c = "<<a+b+c<<endl;
    }
};
int main() {
    Add a(25,13);
    Add b(13.46f,25.05f);
    Add c(10,11,12);
    return 0;
}

/*
Output:
a + b = 38
float a + b = 38.51
a + b + c = 33
*/
