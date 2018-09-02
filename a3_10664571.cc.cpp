#include <iostream>

using namespace std;

int main()
{
    int marks;
    int studentnum;
    string studentname;
{

    cout << "Enter your name:";
    cin >>studentname;
    cout << endl;
    cout << "Enter your ID:";
    cin >>studentnum;
    cout << endl;
    cout << "Enter your mark:";
    cin >>marks;
    cout << endl;
}
   if (marks>=90&&marks<100){
    cout<< "Your grade is A"<< endl;
}
else if (marks>=80&&marks<90){
    cout << "Your grade is B+"<< endl;
}
else if (marks>=70&&marks<80){
    cout << "Your grade is B"<< endl;
}
else if (marks>=60&&marks<70){
    cout << "Your grade is C+"<< endl;
}
else if (marks>=50&&marks<60){
    cout << "Your grade is C"<< endl;
}
else if (marks>=40&&marks<50){
    cout << "Your grade is D+"<< endl;
}
else if (marks>=30&&marks <40){
    cout << "Your grade is D"<< endl;
}
else if (marks>=20&&marks<30){
    cout << "Your grade is E"<< endl;
}
else if (marks>=0&&marks<19){
    cout << "Your grade is F"<< endl;
}
    return 0;
}
