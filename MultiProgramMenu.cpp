#include <iostream>
#include <cstring>
using namespace std;

void LOOP_1() {
    int value, i;

    cout << "Input a value between 1 - 7: ";
    cin >> value;

    for (i = 1; i <= 7; i++) {
        if (i == value)
            break;

        cin >> i;
    }
    cout << "YeePee! I'm out of the loop!\n";
}

void REVERSE_2() {
    #include <iostream>
    #include <cstring>

    string inputString;

    cout << endl << "Enter a string: ";
    getline(cin, inputString);

    string reversedString = " ";

    for (int i = inputString.length() - 1; i >= 0; i--) {
        reversedString += inputString[i];
    }
    cout << "Reversed string: " << reversedString << endl;
}

void AVERAGE_3() {
    int num, average;

    cout << "Enter the number of elements: ";
    cin >> num;

    float numbers[num], sum = 0;

    cout << "Enter " << num << " numbers: ";

    for (int i = 0; i < num; i++) {
        cin >> numbers[i];
        sum += numbers[i];
    }
    average = sum / num;

    cout << "Average is " << average << "." << endl;
}

void PRIME_4() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    bool isPrime = true;

    {
        if (num <= 1){
            isPrime = false;
        } 
        else{
            for (int i = 2; i <= num / 2; i++){
                if (num % i == 0){
                    isPrime = false;
                    break;
                }
            }
        }
    }
    if (isPrime){
        cout << "Prime" << endl;
    } 
    else{
        cout << "Not Prime" << endl;
    }
}

void exit_5(){
    cout << "M.MarkAndrei" << endl;
}

int main(){
    int choice;

    do{
        cout << "Select a program: \n";
        cout << "1 - LOOP \n";
        cout << "2 - REVERSE \n";
        cout << "3 - AVERAGE \n";
        cout << "4 - PRIME \n";
        cout << "4 - EXIT \n";
        cout << "Enter an integer number 1-5: \n";
        cin >> choice;
    } while (choice < 1 || choice > 5);

    switch (choice){
        case 1:
            cout << "You select " << choice << " - LOOP";
            LOOP_1();
            break;

        case 2:
            cout << "You select " << choice << " - REVERSE";
            REVERSE_2();
            break;

        case 3:
            cout << "You select " << choice << " - AVERAGE";
            AVERAGE_3();
            break;

        case 4:
            cout << "You select " << choice << " - PRIME";
            PRIME_4();
            break;

        case 5:
            cout << "You select " << choice << " - EXIT";
            exit_5();
            break;

        default:
            cout << "Invalid input, ";
    }

    return 0;
}
