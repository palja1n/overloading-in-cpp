#include <iostream>
using namespace std;
class Product{
public:
    Product(float CP, float SP, int sold){
        cout << "Profit/Loss: "<<(SP-CP) *sold<<endl;
    }
    Product(int Avai, int sold){
        cout << "Inventory left: "<<Avai - sold <<endl;
    }
};
int main() {
    Product p(134.6f,25.05f,10);
    Product p1(130,10);
    return 0;
}

/*
Output:
Profit/Loss: -1095.5
Inventory left: 120
  */
