#include <iostream>
using namespace std;
void  swap(int *p1, int *p2){
  *p1=*p1 + *p2;
  *p2=*p1 - *p2;
  *p1=*p1 - *p2;
   
 } 
int main()
{
    int a = 19;
    int b = 9;
    int* p1=&a;
    int* p2=&b;
    swap(p1,p2);
    cout<<a<<" "<<b;

}