#include<iostream>
using namespace std;

int main() {

    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            if(i == 5 && j == 3 || i == 4 && j == 2 || i == 3 && j == 1 || i == 4 && j == 4 || i == 3 && j == 5)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}