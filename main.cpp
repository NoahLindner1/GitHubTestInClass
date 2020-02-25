#include <iostream>

using namespace std;

void power(double base, int exp){
    double result = 1.0;
    for(int i = 0; i < exp;i++){
        result = result * base;
    }
    cout << result << endl;
}

int main(){

    cout << "GitHub Test" << endl;
    power(5,3);
    power(3.3,2);
    return 0;

}
