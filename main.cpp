#include <iostream>
#include "MangeMovie.h"
using namespace std;
MangeMovie Data;
char interface();
void addNewMovie();
void Dissplay();
void increement_watchs();
void changeOldMovie();
void Show_all_movie();
void credits();
int main() {
cout<<"===============Welcome to Movie system==============="<<endl;
    while (true){
        cout<<"==================== Command List ==================="<<endl;
        switch (interface()) {
            case 'a':
            case 'A':addNewMovie();
                break;
            case 'd':
            case 'D':Dissplay();
                break;
            case 'i':
            case 'I':increement_watchs();
                break;
            case 'c':
            case 'C':changeOldMovie();
                break;
            case 'm':
            case 'M':credits();
                break;
            case 's':
            case 'S':Show_all_movie();
                break;
            case 'Q':
            case 'q':cout<<"thanks for using my Application"<<endl;
                return 0;
            default:
                cout<<"undefined choice please try again or press Q,q to quit"<<endl;
        }


    }


    return 0;
}
char interface(){
    char ch;
    cout<<"Add a New Movie to the list:(A,a):"<<endl;
    cout<<"Show All Movies that you have:(S,s):"<<endl;
    cout<<"Display Movie to the list:(D,d):"<<endl;
    cout<<"Increment Movie Watches:(I,i):"<<endl;
    cout<<"Change Old Movie Info Watches:(C,c):"<<endl;
    cout<<"for credits and user manual :(M,m):"<<endl;
    cout<<"to end the program :(Q,q):";
    cin>>ch;
    return ch;
}


void addNewMovie(){
    cout<<"==============ADD New Movie=============="<<endl;
    label:
    string MovieName,Rate;int WatchTime;
    cout<<"Enter Movie Name: ";cin>>MovieName;
    cout<<"Enter Movie Rate: ";cin>>Rate;
    cout<<"Enter Movie watched times: ";cin>>WatchTime;
    if(!Data.addMovie(MovieName,Rate,WatchTime)){
        char x;
        cout<<"sorry you can't enter the same Name"<<endl;
        cout<<"if you want to enter the name again (Y,y):";cin>>x;
        if (x=='Y'||x=='y')goto label;
    }

}
void Dissplay(){
    cout<<"============== Display Movie =============="<<endl;
    label:
    string MovieName;
    cout<<"Enter Movie Name that you want to display it: ";cin>>MovieName;
    if (!Data.dissplayMovie(MovieName)){
        cout<<"this Movie name does not exist";
        cout<<"if you want to enter another name enter :(Y,y):"<<endl;
        cout<<"if you want to add this as New Movie Name enter :(A,a):"<<endl;
        char x;cin>>x;
        if (x=='Y'||x=='y')goto label;
        else if (x=='A'||x=='a')addNewMovie();
        else return;
    }


}
void increement_watchs() {
    cout << "============== Increment Movie Watch  ==============" << endl;
    label:
    string MovieName;
    cout << "Enter Movie Name that you want to display it: ";
    cin >> MovieName;
    if (Data.addMoreWatchTime(MovieName)) {
        cout << "this Movie name does not exist";
        cout << "if you want to enter another name enter :(Y,y):" << endl;
        char x;
        cin >> x;
        if (x == 'Y' || x == 'y')goto label;
    }
}
void Show_all_movie() {
    cout << "============== Display Movies ==============" << endl;
    Data.show_all_movies_name();
}
void changeOldMovie(){
    cout<<"==============change exist Movie=============="<<endl;
    label:
    string MovieName,Rate;int WatchTime;
    cout<<"Enter Movie Name: ";cin>>MovieName;
    cout<<"Enter Movie Rate: ";cin>>Rate;
    cout<<"Enter Movie watched times: ";cin>>WatchTime;
    if(!Data.set_old_Movie(MovieName,Rate,WatchTime)){

        cout<<"Sorry this Movie does not exist"<<endl;
        cout<<"if you want to enter the name again (Y,y):";char x;cin>>x;
        if (x=='Y'||x=='y')goto label;
    }
}
void credits(){
  cout<<"Name: Mostafa Osman Fathi\n"
        "collage: Ahram Candian University \n"
        "ID: 42210104\n"
        "Project Name: Movie Management System\n"
        "GitHub: https://github.com/MostafaOsmanFathi\n"
        "Project GitHub repository link:\n"
        "Codefocrcess: https://codeforces.com/profile/Mostafa_Osman24"<<endl;

}