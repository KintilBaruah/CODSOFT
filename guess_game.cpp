#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    int inputuser;
    srand(time(0));  
    int variable=rand()%10+1;

    do
    {  cout<<"ENTER ANY NUMBER IN BETWEEN RANGE 1 to 10: ";
        cin >> inputuser;
        if (inputuser == variable)
        {
            cout << "CONGRATULATIONS! You guessed it right" <<endl;
        }
        else
        {
          cout << "Sorry, WRONG ANSWER. ";
           if (inputuser < variable)
            cout << "Your guess is too LOW." <<endl;
            else
            cout << "Your guess is too HIGH." <<endl;
        }} 
     while (inputuser != variable);

    cout << "GAME OVER" <<endl;
    return 0;
}
