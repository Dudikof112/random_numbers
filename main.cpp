#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    int a, b, number, variable, counter, draw = 0;

    int game[5];

    int save[5];

    char letter;

    do{

    counter = 0;

    srand(time(NULL));

    cout << "Number draw game" << endl;

    cout << endl;

    cout << "*** RULES ***" << endl;

    cout << "The difference between the number should be greater than 100 and less than 500" << endl;

    cout << "Remember, the beginning cannot be longer than the end" << endl;

    cout << "You only have 5 draws. After the 5th draw, the program will automatically end" << endl;

    cout << "Numbers cannot be negative" << endl;

    cout << "Please enter the range of numbers involved in the draw: " << endl;

    cout << "Beginning: ";

    cin >> a;

    cout << "Ending: ";

    cin >> b;

    while((b - a) > 500 || (b - a) < 100  ||  a > b || a < 0 || b < 0){

            if(a < 0 || b < 0){

                cout << "Negative numbers!!!" << endl;

            }

        cout << "Please enter valid numbers" << endl;

        cout << "Beginning a: ";

        cin >> a;

        cout << "Ending b: ";

        cin >> b;

    }

    number = rand()%(b-a +1) + a;


    do{

        cout << "Give me a number: ";

        cin >> variable;

        if(variable > number){

            cout << "The given number is too large" << endl;

        }else if(variable < number){

            cout << "The given number is too small" << endl;

        }

        counter ++;

    }while(number != variable);

    cout << "*** GREAT WORK WIN ***" << endl;

    cout << endl;

    cout << "You have drawn for " << counter << " together." << endl;

    for(int i = 1; i <= counter; i++){

        cout << '#';

    }

    cout << endl;

    cout << endl;

    draw++;

    if(draw == 1){

        save[1] = 1;

        game[1] = counter;

    }else if(draw == 2){

        save[2] = 2;

        game[2] = counter;

    }else if(draw == 3) {

        save[3] = 3;

        game[3] = counter;

    }else if(draw == 4) {

        save[4] = 4;

        game[4] = counter;

    }else if(draw == 5) {

        save[5] = 5;

        game[5] = counter;

    }

    if(draw < 5){

    cout << "It is your " << draw << " game" << endl;

    cout << "There's still left " << 5 - draw << " games" << endl;

    cout << endl;

    cout << "Do you want end the game?" << endl;

    cout << "Press 'y' if yes or 'n' if you want to try again" << endl;

    cout << "Your choose: ";

    cin >> letter;

    }else if(draw == 5){

        cout << "*** THE END OF THE DRAWINGS WE'RE ENDING THE GAME ***" << endl;

        cout << "PLEASE PRESS ANY KEY" << endl;

        system("pause");

    }

    system ("cls");

    }while((letter == 'n' || letter == 'N') && draw < 5);

    cout << endl;

    cout << "*** YOUR RESULTS ***" << endl;

    for(int i = 1; i <= draw; i++){

       cout << save[i] << " GAME => YOUR RESULT: ";

       for (int j = 1; j <= game[i]; j++){

        cout << "#";

       }

       cout << endl;

    }

return 0;

}
