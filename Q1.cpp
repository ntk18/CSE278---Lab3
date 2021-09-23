/*
Nate Elli
*/

#include<iostream>
using namespace std;

int letterCount(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        char ch = str.at(i);
        if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122)) {
            count++;
        }
    }

    return count;
}

int digitCount(string str) {
    int count = 0;
    for (int i = 0; i < str.size(); i++) {
        char ch = str.at(i);
        if (ch >= 48 && ch <= 57) {
            count++;
        }
    }

    return count;
}

int numCount(string str) {
    str = str + " ";
    int count = 0;
    for (int i = 0; i < str.size() - 1; i++) {
        char ch = str.at(i);
        if (ch >= 48 && ch <= 57) {
            char next = str.at(i + 1);
            if (!(next >= 48 && next <= 57)) {
                count++;
            }
        }
    }

    return count;
}

string miami(string str) {
    if (str.size() < 5) {
        return "false";
    }
    str = str + "     ";
    for (int i = 0; i < str.size(); i++) {
        if (str.at(i) == 'M' || str.at(i) == 'm') {
            if (str.at(i + 1) == 'I' || str.at(i + 1) == 'i') {
                if (str.at(i + 2) == 'A' || str.at(i + 2) == 'a') {
                    if (str.at(i + 3) == 'M' || str.at(i + 3) == 'm') {
                        if (str.at(i + 4) == 'I' || str.at(i + 4) == 'i') {
                            return "true";
                        }
                    }
                }
            }
        }
    }
    return "false";
}

string upper(string str) {
    for (int i = 0; i < str.size(); i++) {
        char ch = str.at(i);
        if (ch >= 97 && ch <= 122) {
            str[i] = ch - 32;
        }
    }
    return str;
}

string lower(string str) {
    for (int i = 0; i < str.size(); i++) {
        char ch = str.at(i);
        if (ch >= 65 && ch <= 90) {
            str[i] = ch + 32;
        }
    }
    return str;
}

string upOrLow (string str) {
    int button;

    do {
        cout << "Press 1 for uppercase. Press 0 for lowercase." << endl;
        cin >> button;
    } while (!(button == 1 || button == 0));
    
    if (button == 1) {
        str = upper(str);
    } else {
        str = lower(str);
    }

    return str;
}

void info(string str) {
    int let = letterCount(str);
    int dig = digitCount(str);
    int num = numCount(str);

    cout << "There are " << let << " letters in the string." << endl;
    cout << "There are " << dig << " digits in the string." << endl;
    cout << "There are " << num << " numbers in the string." << endl;
}

int main() {
    string str = "feng17@miamiOh.edu_^&*-----2055";
    info(str);

    return 0;
}