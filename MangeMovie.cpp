//
// Created by mo528 on 5/11/2023.
//
#include "MangeMovie.h"

bool MangeMovie::addMovie(string &MovieName, string &Rate, int &WatchTiemes) {
    for (int i = 0; i <Mvec.size() ; ++i) {
        if (*Mvec.at(i).MovieName==MovieName){ return false;}
    }
    Mvec.push_back(Movie{MovieName,Rate,WatchTiemes});
    return true;
}
bool MangeMovie::addMoreWatchTime(string &MovieName) {
    if (Mvec.empty()){cout<<"sorry there's no movie"<<endl;return false;}
    for (int i = 0; i <Mvec.size() ; ++i) {
        if (*Mvec.at(i).MovieName==MovieName){
            Mvec.at(i).Watch_Time++;
            cout<<*Mvec.at(i).MovieName<<" watched one more now you watched "<<*Mvec.at(i).Watch_Time<<endl;
            return true;}
    }
    return false;
}
bool MangeMovie::dissplayMovie(string &MovieName) {
    if (Mvec.empty()){cout<<"sorry there's no movie"<<endl;return false;}
    for (int i = 0; i <Mvec.size() ; ++i) {
        if (*Mvec.at(i).MovieName==MovieName){
            cout<<"Movie name: "<<*Mvec.at(i).MovieName<<endl;
            cout<<"Rate is: "<<*Mvec.at(i).Rate<<endl;
            cout<<"watch times: "<<*Mvec.at(i).Watch_Time<<endl;
            return true;
        }
    }
    return false;
}
bool MangeMovie::set_old_Movie(string &MovieName,string &Rate,int &WatchTime) {
    if (Mvec.empty()){cout<<"sorry there's no movie"<<endl;return false;}

    for (int i = 0; i <Mvec.size() ; ++i) {
        if (*Mvec.at(i).MovieName==MovieName){
            Mvec.at(i).set_Movie_Name(MovieName),
            Mvec.at(i).set_Movie_Name(Rate),
            Mvec.at(i).set_Movie_Name(WatchTime);
            return true;
        }
    }
    return false;

}
void MangeMovie::show_all_movies_name() {
    if (Mvec.empty()){cout<<"there's no Movie to display"<<endl;return;}
    cout<<"you have "<<dissplay_numof_Movie()<<" Movies"<<endl;
    for (int i = 0; i <Mvec.size() ; ++i) {
        cout<<"Name: "<<*Mvec.at(i).MovieName<<" Rate: "<<*Mvec.at(i).Rate<<" Watch Time: "<<*Mvec.at(i).Watch_Time<<endl;
    }
}