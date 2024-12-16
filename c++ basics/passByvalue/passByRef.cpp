#include <iostream>

using namespace std;
int incrementByOne(int*ptr){
   ++*ptr;
}

int main(){
    int a=10;
    int *ptr =new int(10);
    incrementByOne(&a);
    cout << a << endl;


}