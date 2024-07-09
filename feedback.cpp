#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream fio;
    fio.open("Feedback.txt",ios::app);
    int choice=0;
    string review,feedback;
    while( choice!=1 && choice!=2 && choice!=3 )
    {
        cout<<" 1.Good \n 2.Average \n 3.Bad";
        cout<<"\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1:
                review="Good";
                break;
            case 2:
                review="Average";
                break;
            case 3:
                review="Bad";
                break;
            default:
                cout<<"Invalid choice.Please Re enter:\n";
        }
    }

    fio<<review<<"\t";
    cout<<"Enter your feedback:";
    cin.ignore();
    getline(cin,feedback);
    fio<<feedback<<endl;
    cout<<"Thank you for entering your feedback";
    return 0;
}
