//
// Created by mo528 on 5/11/2023.
//

#include "Movie.h"
#include "iostream"
int Movie::ActiveMovies{0};
Movie::Movie(string MovieName, string Rate, int Watch_Time){
    //insializing the new Movie by and makeing it use heep instead of stack method
        this->MovieName=new string(MovieName),this->Rate=new string(Rate),this->Watch_Time=new int(Watch_Time);
    //make anouncement about the new object
        cout<<"you have created a new Movie with Name: "<<*this->MovieName<<" and it's Rate is: "<<*this->Rate<<" and "<<*this->Watch_Time <<" watch time"<<endl;
        ActiveMovies++;
}

Movie::Movie(const Movie &source):Movie{*source.MovieName,*source.Rate,*source.Watch_Time} {
    //copy constructor
        cout<<"copy constructor "<<endl;
        ActiveMovies++;
}
Movie::Movie(Movie &&source) noexcept:MovieName(source.MovieName),Rate(source.Rate),Watch_Time(source.Watch_Time) {
    //steeling the data form the source
        source.MovieName= nullptr,source.Watch_Time= nullptr,source.Rate= nullptr;
        ActiveMovies++;
        cout<<"Move constructor\n";
}
Movie::~Movie() {
    //freeing the data
    delete MovieName,delete Rate,delete Watch_Time;
    ActiveMovies--;
}