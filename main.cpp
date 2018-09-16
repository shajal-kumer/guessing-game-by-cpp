#include<iostream>
#include<cmath>
#include<ctime>
#include<string>
#include<windows.h>

using namespace std;

int main() {
    int num, numrand;
    char yn;
    string name;
    srand(time(NULL)); // important for random number
    cout<<"Welcome  and please enter your name: "; cin>>name;
    while(true) {
        cout<<"Hello "<< name <<" do you want to play a game (y/n): ";cin>>yn;
        if(yn == 'n' || yn == 'N')
            return 0;
        if(yn == 'y' || yn == 'Y')
            break;
    }

    while(true) {
        cout<<"Computer will imagine one number from 0 to 5 and you should guess it: ";
        cin>>num;
        if(!num) {
            break;
        } else {
            numrand = rand() % 6;
            if(num == numrand) {
                cout<<"You win!"<<endl;
            } else if(num == -1) {
                break;
            } else {
                cout<<"You lose! The computer imagined number is "<<numrand<<endl;
            }
        }
    }


//    for(int i =0; i < 10; i++) {
//        cout<< (rand() % 6) + 5 <<endl;// This generate a random number between 5 to 10
//    }


return 0;
}
