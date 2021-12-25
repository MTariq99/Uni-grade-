#include <iostream>
using namespace std;



int main() {

int M ;

cin >> M ;

if (M >= 50) {
    cout << "Pass ";

   if (M >= 50 && M < 60) {
    cout << "grade D ";
}else if (M >= 60 && M < 70) {
    cout <<"Grade C";
} else if (M >= 70 && M < 75) {
    cout << "Grade B"; 
}else if (M >= 75  && M < 80) {
    cout << "Grade B+";
}else if (M >= 80  && M < 90) {
    cout << "Grade A";
}else {
    cout <<"Grade A+";
}
} else {
    cout << "Fail";
}

return 0;
}