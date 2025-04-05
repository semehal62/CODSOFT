#include <iostream>
using namespace std;
#include<cstdlib>
int main()
{
    back:
    char choice;
    cout<<"Do you want to play number guessing Game?(Y/N)"<<endl;
    cin>>choice;
        while (cin.fail() ) {  
        cin.clear(); // Clear input error  
        cin.ignore(); // Discard invalid input  
        cout << "Invalid input! Please enter y to start.\n";  
        goto back;  
    }
    if(choice == 'Y'choice == 'y'){
        goto lable;
    }
    else if(choice =='N'  choice == 'n'){
        return 0;
    }else{
        cout<<"Please choice Y for Yes or N for NO!"<<endl;
        goto back;
    }
    lable:
    int number;
    cout<<"Guess a number less than 10,000 exlusive of 10,000"<<endl;
    cin>>number;
    int random_number = std::rand() % 10000; 
    
    while(number != random_number){
        
        if(number> random_number){
            cout<<"Too high"<<endl;
        }
        if(number< random_number){
            cout<<"Too low"<<endl;
        }
        cout<<"Try again "<<endl;
        cin>>number;
    }
    if (number == random_number){
        cout<<"Well done you have found the number!!!🎉"<<endl;
    }
    return 0;
}
