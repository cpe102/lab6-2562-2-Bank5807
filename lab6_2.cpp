#include <iostream>
using namespace std;

int main()
{
    string name, id, gear;
    cout << "Fahsai: Sawadee ka...Can you tell me your name? \n";
    cout << "?????: ";
    getline(cin, name);

    cout << "Fahsai: Wow!!! " << name << " that is a really cool name. \n";
    cout << "Fahsai: I think you are Engineering student. What is your student ID? \n";
    cout << name << ": ";
    cin >> id;
    cin.ignore();

    // GEAR CALCULATES AREA

    id[0] = id[0] - 1;
    id[1] = id[1] - 2;
    if(id[0] == '/'){
        id[0] = '0';
    }
    if(id[1] == '/'){
        id[1] = '9';
        id[0] = id[0] - 1;
    }
    if(id[1] == '.'){
        id[1] = '8';
        id[0] = id[0] - 1;
    }
    gear = gear + id[0] + id[1];

    // GEAR CALCULATES AREA END

    cout << "Fahsai: I think you may be GEAR " << gear << ".  I have a free movie tickets for you. \n" ;
    cout << "Fahsai: Let's go to cinema together!!! \n";

    string movie, date, bye;
    cout << "Fahsai: What movie do you want to watch? \n";
    cout << name << ": ";
    getline(cin, movie);

    cout << "Fahsai: So....which day are you free to go with me? \n";
    cout << name << ": ";
    getline(cin, date);

    cout << "Fahsai: " << date << "...that is OK!!! I'm looking forward to watch " << movie << " with you. \n";
    cout << name << ": ";
    getline(cin, bye);

    cout << "Fahsai: 555+ see you " << date << ". Bye Bye \\(^ ^)/ \n";
    return 0;
}
