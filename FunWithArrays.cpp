#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>

using namespace std;

int main(){

    //Initialize and declare all variables to be used
    int num1, num2, choice, i, j, k;
    int firstArray[3][3] = {
                    {7,21,4},
                    {3, 0,1},
                    {6, 236,10}
                    };
    int secondArray[2][3][2] = {
                            {
                                {8,46},
                                {6,2},
                                {9,4}
                            },
                            {
                                {10,7},
                                {0,3},
                                {45,2}
                            }
                        };
    int numbers[2][3];
    int fourthArray[2][3][2];
    int randomNoun, randomVerb, randomObject;
    const int MAX_SIZE = 10;
    const int ARRAY_SIZE = 4;
    string words[MAX_SIZE] = {"apple", "puppy", "Dave","yellow", "Chicago", "pencil", "Java", "Hello", "swim", "cold"};
    string namesArray[ARRAY_SIZE];
    string nounArray[4] = {"John", "Lucy", "Mary", "Walter"};
    string verbArray[4] = {"jogs", "swims", "dances", "eats"};
    string objectArray[4] ={"weirdly", "with friends", "in yellow underpants", "only on Sundays"};

    //Output menu and welcome message
    cout <<"Welcome to fun with arrays!" <<endl;
    cout << "Choose an option below: " << endl;
    cout << "----------------\n" << endl;
    cout << "- 1) Two Dimensional Array\n- "
            "2) Three Dimensional Array\n- "
            "3) Two Dimensional Array w/ User Input\n- "
            "4) Three Dimensional Array w/ User Input\n- "
            "5) String Array\n- "
            "6) String Array w/ User Input\n- "
            "7) Random Sentence Generator\n- "
            "8) Exit\n" << endl;
    cout << "----------------\n" << endl;
    cin >> choice ;

    //Begin switch case
    switch(choice){
            case 1:

            // Use a nested for loop to access rows of the array
            for (i = 0; i < 3; ++i) {

            // Again for the columns of the array
            for (j = 0; j < 3; ++j) {

            //Print out array
            cout << "Two Dimensional Array:[" << i << "][" << j << "] ="<< firstArray[i][j] << endl;
            break;//exit program
                }
            }
            case 2:
            // Using a loop to iterate through the columns and rows and dimensions
            for (i = 0; i < 2; ++i) {
                for (j = 0; j < 3; ++j) {
                    for (k = 0; k < 2; ++k) {

            //Print out array
            cout << "Three Dimensional Array: [" << i << "][" << j << "][" << k << "] = " << secondArray[i][j][k] << endl;
                    }
                }
            }
            break;


            case 3:
            //Ask user for input
            cout << "Enter 6 numbers: \n" << endl;
            //Using loop to iterate through array
            for(i = 0; i <2; ++i){
                for(j = 0; j<3; ++j){
                //Take user input and store as variable
            cin >> numbers [i][j];
                }
            }
            //Output users' numbers
            cout << "Your numbers and their index positions are: " << endl;
            for(i=0; i<2; ++i){
                for(j=0; j<3; ++j){

            cout << "numbers[" << i << "][" << j << "]: " << numbers[i][j] << endl;
                }
            }
            break;

            case 4:
            cout << "Enter 12 numbers: \n" << endl;
            for (i = 0; i < 2; ++i) {
                for (j = 0; j < 3; ++j) {
                    for (k = 0; k < 2; ++k) {
            cin >> fourthArray[i][j][k];
                    }
                }
            }
            cout << "Your numbers and their index positions are: " << endl;
              for (i = 0; i < 2; ++i) {
                    for (j = 0; j < 3; ++j) {
                        for (k = 0; k < 2; ++k) {
                //Print out array
            cout << "Three Dimensional Array: [" << i << "][" << j << "][" << k << "] = " << fourthArray[i][j][k] << endl;
                    }
                }
            }
            break;

            case 5:
            //Using max size rather than specific number of items, looping through array
            for (int i = 0; i < MAX_SIZE; i++)
            cout  << "String Array of random words: ["<<i<<"] = " << words[i] << endl;
            cout << "\n" << endl;
            break;

            case 6:
            //User input for names
            cout << "Enter 4 names:" << endl;
            for(int i = 0; i < ARRAY_SIZE; i++)
            cin >> namesArray [i];


            for (int i = 0; i < ARRAY_SIZE; i++)
            cout << "Names entered: " << namesArray[i] << endl;
            break;

            case 7:
            //Loop through array of static nouns, verbs and random words/phrases
            for (int i = 0; i < 4; i++)
            cout  << "Array of random nouns: ["<<i<<"] = " << nounArray[i] << endl;
            cout <<"\n" <<endl;

            for(int j = 0; j<4; j++)
            cout << "Array of random verbs: [" <<j<<"] = " <<verbArray[j]<<endl;
            cout << "\n" << endl;

            for(int k = 0; k<4; k++)
            cout << "Array of random words: [" <<k<<"] = " <<objectArray[k]<<endl;
            cout <<"\n" <<endl;

            //using random seed generator to generate a random number 1-4, which will pull from array to produce random sentence
            srand(time(NULL));
            randomNoun = rand()%4;
            randomVerb = rand()%4;
            randomObject = rand()%4;

            cout << "Random Sentence generating..." <<nounArray[randomNoun] << " " << verbArray[randomVerb] <<" " <<objectArray[randomObject]<< endl;
            break;

            case 8:
            break;//exit

            default:
            //in case of invalid entry. Not having this might cause program to break
            cout << "Invalid entry\n" <<endl;
            break;
    }
    return 0;



}
