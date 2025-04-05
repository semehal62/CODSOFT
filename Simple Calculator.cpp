Lucelent, [4/5/2025 12:46 PM]
#include <iostream>
using namespace std;
#include<cstdlib>
int main()
{
    b:
    int choice;
    cout<<"Which operation do you want to use ? select an option(1-4)"<<endl;
    cout<<endl;
    cout<<"***************"<<endl;
    cout<<"     MENU      "<<endl;
    cout<<"***************"<<endl;
    cout<<"1.Addition"<<endl;
    cout<<"2.Subtration"<<endl;
    cout<<"3.Multiplication"<<endl;
    cout<<"4.Division"<<endl;
    cin>>choice;
      while (cin.fail() ||  choice>4) {  
        cin.clear(); // Clear input error  
        cin.ignore(); // Discard invalid input  
        cout << "Invalid input! Please enter y to start.\n";  
        goto b;  
    }
    back:
    float num2,num1;
    cout<<"enter the first number ?"<<endl;
    cin>>num1;
    while (cin.fail() ) {  
        cin.clear(); // Clear input error  
        cin.ignore(); // Discard invalid input  
        cout << "Invalid input! Please enter y to start.\n";  
        goto back;  
    }
    back2:
    cout<<"enter the second number ?"<<endl;
    cin>>num2;
    while (cin.fail() ) {  
        cin.clear(); // Clear input error  
        cin.ignore(); // Discard invalid input  
        cout << "Invalid input! Please enter y to start.\n";  
        goto back2;  
    }
     switch(choice){
         case 1: if (choice == 1){
            cout<<"The sum of the two number is : "<<num1+num2<<endl; 
         }
         case 2:if (choice == 2){
             cout<<"The differnce of the two number is : "<<num1-num2<<endl;
         }
         case 3:if (choice == 3){
             cout<<"The product of the two number is : "<<num1* num2<<endl;
         }
         case 4:if (choice == 4){
             cout<<"The Division of the two number is : "<<num1/num2<<endl;
         }
     }
    return 0;
}

Lucelent, [4/5/2025 12:52 PM]
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
