//
// Created by Johan on 31/07/2022.
//
#include <iostream>
#include <string>
using namespace std;


int set_settings(int maxNumber){
    int maxNumberIn;

    cout << "What do you want as you maximum number?" << endl;
    cin >> maxNumberIn;

    return maxNumberIn;
}

int main(){
    char input;
    int guess;
    int randomNumber;
    int maxNumber = 50;

    while (1){
        cout << "Hello! Please enter p to play the game, s for the settings or q to quit." << endl;
        cin >> input;

        if(input == 'q') {
            return 0;
        } else if(input == 's'){
            maxNumber = set_settings(maxNumber);
        } else if (input == 'p'){
            randomNumber = rand() % maxNumber;
            for(int i = 0; i <= 10; i++){
                cout << "What is you guess?" << randomNumber << endl;
                cin >> guess;
                if(guess == randomNumber){
                    cout << "You Won! " << randomNumber << " was the random number!"<< endl;
                    break;
                } else{
                    cout << "I am sorry, " << guess << " is not my number!"<< endl;
                    if(guess > randomNumber){
                        cout << "my number is smaller than you guess!"<< endl;
                    }else {
                        cout << "my number is larger than you guess!"<< endl;
                    }
                }
            }

        } else {
            cout << "Invalid input, please try again!"<< endl;
        }
    }

}

