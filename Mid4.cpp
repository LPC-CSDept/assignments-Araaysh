#include <iostream>
#include <ctime>
using namespace std;
int getRnum() {
    srand ( time(NULL) );
    return rand() % 101;
}
int getRnum(int n1){
    srand ( time(NULL) );
    return rand() % (101-n1)+n1;
}
int getRnum(int n1, int n2){
    srand ( time(NULL) );
    return rand() % (n2-n1)+n1;
}
int main(){
    cout<<getRnum()<<endl;
    cout<<getRnum(50)<<endl;
    cout<<getRnum(80, 90)<<endl;
    
}