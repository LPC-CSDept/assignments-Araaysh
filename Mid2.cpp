#include <iostream>
using namespace std;

int main()
{
    int james = 200;
    int orlando = 185;
    int timmy = 190;
    int maxim = 190;
    int will = 200;
    int jason = 190;
    int david = 180;
    int bill = 195;
    int carmen = 200;
    int chris = 190;

    cout << "James total points was " << james << " Average of 100" << endl;

    cout << "Orlando's total points was " << orlando << " Average of 92.5" << endl;

    cout << "Timmy's total points was " << timmy << " Average of 95" << endl;

    cout << "Maxim's total points was " << maxim << " Average of 95" << endl;

    cout << "Will's total points was " << will << " Average of 100" << endl;

    cout << "Jason's total points was " << jason << " Average of 95" << endl;

    cout << "David's total points was " << david << " Average of 90" << endl;

    cout << "Bill's total points was " << bill << " Average of 97.5" << endl;

    cout << "Carmen's total points was " << carmen << " Average of 100" << endl;

    cout << "Chris's total points was " << chris << " Average of 95" << endl;

    return 0;
}
// #include <fstream>
// #include <iostream>
// using namespace std;

// int main() {
//         ifstream ifs;
//         string stname;
//         int score1, score2, sum;
//         double avg;

//         ifs.open("students.txt");
//         if (!ifs) {
//                 cerr << "File Open Error\n";
//                 exit(0);
//         }
//         while (ifs >> stname >> score1 >> score2) {
//                 cout << "Studnet name : " << stname << "\t";
//                 cout << "Score 1: " << score1 << "\t"
//                      << "Score 2: " << score2 << "\t";
//                 sum = score1 + score2;
//                 avg = sum / 2.0;
//                 cout << "Sum : " << sum << "\t"
//                      << "Avg: " << avg << "\n";
//         }
// }