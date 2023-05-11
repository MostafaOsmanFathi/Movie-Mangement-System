//
// Created by mo528 on 5/11/2023.
//

#ifndef MOVIEMANGEMENTSYSTEM_MANGEMOVIE_H
#define MOVIEMANGEMENTSYSTEM_MANGEMOVIE_H
#include "Movie.h"
#include "vector"
#include "iostream"
class MangeMovie {
private:
    vector<Movie>Mvec;
public:



    bool addMovie(string &MovieName,string &Rate,int &WatchTiemes);
    bool addMoreWatchTime(string &MovieName);
    bool dissplayMovie(string &MovieName);
    bool set_old_Movie(string &MovieName,string &Rate,int &WatchTime);
    int dissplay_numof_Movie()const{return Mvec.size();}
    void show_all_movies_name();
};
#endif //MOVIEMANGEMENTSYSTEM_MANGEMOVIE_H
