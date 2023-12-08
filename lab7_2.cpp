//Dialog of the first example is given below.

/*
Fahsai: Sawadee ka...Can you tell me your name?
?????: Luke Skywalker
Fahsai: Wow!!! Luke Skywalker is a really cool name.
Fahsai: I think you are an Engineering student. What is your student ID?
Luke Skywalker: 590610999
Fahsai: I think you may be GEAR 47. I have a free movie ticket for you.
Fahsai: Let's go to the cinema together!!!
Fahsai: What movie do you want to watch?
Luke Skywalker: Star Wars VII
Fahsai: So....which day are you free to go with me?
Luke Skywalker: Next Monday
Fahsai: Next Monday....that is OK!!! I'm looking forward to watching Star Wars VII with you.
Luke Skywalker: May the Force be with you krub
Fahsai: 555+ see you Next Monday. Bye Bye \(^ ^)/
*/

#include <iostream>
using namespace std;
int main()
{
    string your_name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin, your_name);
    cout << "Fahsai: Wow!!! " << your_name << " is a really cool name.\n";
    int student_ID;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << your_name <<": ";
    cin >> student_ID;
    cin.ignore();
    cout << "Fahsai: I think you may be GEAR " <<  student_ID/10000000 - 12  <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    string movie_n;
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << your_name <<": ";
    getline(cin, movie_n);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << your_name <<": ";
    string date;
    getline(cin, date);
    cout << "Fahsai: " << date <<"....that is OK!!! I'm looking forward to watching "<< movie_n <<" with you.\n";
    string the_end;
    cout << your_name <<": ";
    cin >> the_end;
    cout << "Fahsai: 555+ see you "<< date <<". Bye Bye \\(^ ^)/";

}

