#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

const unsigned short N = 5;
struct scores {
    double sc[N];
    string grade;
};
struct grade {
    string first;
    string last;
    string ssn;
    scores score;
};
grade g;


int main() {
    ifstream ifso;
    ifso. open ("grades.txt", fstream::in);
    ofstream ofso;
    ofso.open ("grades.bin", fstream::out);
    if(!ifso || !ofso)
string name1;
string name2;
string ssn;
double g1,g2,g3,g4;
string grade;
ff >> line;
stringstream contents(line);
contents>>namef1>>name2>>ssn>>g1>>g2>>g3>>g4>>grade;
scores s{{g1,g2,g3,g4,grade}}
grade g{name1,name2,ssn,s};
f.write(reinterpret_cast<char*>(8g), sizeof(grade));
}
{
ss.clear();
ofso.write((char*)&g,sizeof(g));
cout <<i << "::" <<sizeof(g)<<"bytes writing";

i++;
return 0;

}

