#include <iostream>

using namespace std;


int main() {


    int first, second, third;

    cout <<"Enter the numbers";
    cin >> first >> second >> third;

    if(first < second && first < third) {
        cout <<"The smallest number out of the three is " << first; 

    } else if (second < first && second < third) {
        cout <<"The smallest number out of the three is " << second;

    } else {
        cout <<"The smallest number out of the three is " << third; 
    }

    return 0;

}
