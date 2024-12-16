#include <iostream>
using namespace std;
int incrementBy1(int a){
   return  ++a;

}
int main(){
    int a=10;
    cout<<incrementBy1(a)<<endl;
        cout<<a<<endl;
}