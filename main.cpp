#include <iostream>

using namespace std;

void power(int base, int exp){
    int result = 1;
    for(int i = 0; i < exp;i++){
        result = result * base;
    }
    cout << result << endl;
}

int main(){

    cout << "GitHub Test" << endl;
    power(5,3);
    return 0;

}
