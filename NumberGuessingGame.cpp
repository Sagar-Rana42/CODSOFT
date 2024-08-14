/* Create a program that generates a random number and asks the
user to guess it. Provide feedback on whether the guess is too
high or too low until the user guesses the correct number.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

void guessNumber(){
    srand(time(0)); // for generate difference number 

    int N = 101;
    int randomNumber = rand() % N;
   

    cout<<"Guess Number less than or equal to 100 "<<endl;
    int num;
    cin>>num;

    while(1){

        if(num == randomNumber) {
            cout<<endl<<endl;
            cout<<"******* CONGRULATION you WON !! , You choose right number **********"<<endl<<endl;;
            
            cout<<"IF you want to play again press 1 else press any button"<<endl;
            int one;
            cin>>one;
            if(one == 1){
                guessNumber();
            }
            else{
                cout<<"Thank You for playing"<<endl;
                break;
            }             
        }
        
        else if( num > randomNumber){
            cout<<"You entered large value ,  Please enter less than "<<num<<endl;
            cin>>num;
        }
        else{
             cout<<"You entered small value ,  Please enter greater than "<<num<<endl;
             cin>>num;
        }
        
    }
    return;
}


int main(){
    guessNumber();


}
