//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 10
//
//
//
//
//
//
//
//
//
//Calculates various time differences

#include <iostream>
using namespace std;

class Time { 
public:
    int h;
    int m;
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    string title;
    Genre genre;     
    int duration;    
};

class TimeSlot { 
public: 
    Movie movie;     
    Time startTime;  
};

int minutesSinceMidnight(Time time){
    int hourInMin = time.h * 60;
    int minutes = time.m;
    
    return hourInMin + minutes;
}

int minutesUntil(Time earlier, Time later){
    int hoursDiff = (later.h - earlier.h) * 60;
    int minDiff = later.m - earlier.m;

    return hoursDiff + minDiff;
}

Time addMinutes(Time time0, int min){
    Time newTime;
    newTime.h = time0.h + (time0.m + min) / 60;
    newTime.m = (time0.m + min) % 60;

    return newTime;
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

void printTimeSlot(TimeSlot ts){
    Time end = addMinutes(ts.startTime, ts.movie.duration);

    printMovie(ts.movie);

    cout << "[starts at " << ts.startTime.h << ":" << ts.startTime.m << ", ends by " << end.h << ":" << end.m << "]";
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot nextTS;
    nextTS.movie = nextMovie;
    nextTS.startTime = addMinutes(ts.startTime, ts.movie.duration);

    return nextTS;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    if(minutesSinceMidnight(ts1.startTime) < minutesSinceMidnight(ts2.startTime)){
        return ts1.movie.duration > (minutesSinceMidnight(ts2.startTime)-minutesSinceMidnight(ts1.startTime));
    }
    else{
        return ts2.movie.duration > (minutesSinceMidnight(ts1.startTime)-minutesSinceMidnight(ts2.startTime));
    }
}

int main(){
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
}