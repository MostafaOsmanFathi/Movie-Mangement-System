//
// Created by mo528 on 5/11/2023.
//

#ifndef MOVIEMANGEMENTSYSTEM_MOVIE_H
#define MOVIEMANGEMENTSYSTEM_MOVIE_H
#include "string"
using namespace std;
class Movie{
private:
    friend class MangeMovie;
    string *MovieName;
    string *Rate;
    int *Watch_Time;
    static int ActiveMovies;
public:
    //getters
    string get_Movie_name()const{return *MovieName;}
    string get_Movie_Rate()const{return *Rate;}
    int get_Movie_watchTime()const{return *Watch_Time;}
///    friend void test();
    //setters
    void set_Movie_Name(string &New_Name){*MovieName=New_Name;}
    void set_Movie_Rate(string &New_Rate){*Rate=New_Rate;}
    void set_Movie_Name(int &New_WatchTime){*Watch_Time=New_WatchTime;}
    //insulize a new Movie
    Movie(string MovieName="None",string Rate="+18",int Watch_Time=0);
    //Deep copy constructor
    Movie(const Movie &source);
    //Move constructor
    Movie(Movie &&source)noexcept;
    //Deconstructor
    ~Movie();
};


#endif //MOVIEMANGEMENTSYSTEM_MOVIE_H
