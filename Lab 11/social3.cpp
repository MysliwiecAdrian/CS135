//Author: Adrian Mysliwiec
//Course: CSCI-135
//Instructor: Minh Nguyen
//Assignment: Lab 11
//
//
//

#include <iostream>
using namespace std;

class Profile {
private:
    string username;
    string displayname;
public:
    // Profile constructor for a user (initializing 
    // private variables username=usrn, displayname=dspn)
    Profile(string usrn, string dspn);
    // Default Profile constructor (username="", displayname="")
    Profile();
    // Return username
    string getUsername();
    // Return name in the format: "displayname (@username)"
    string getFullName();
    // Change display name
    void setDisplayName(string dspn);
};

Profile::Profile(string usrn, string dspn){
    username = usrn;
    displayname = dspn;
}

Profile::Profile(){
    username = "";
    displayname = "";
}

string Profile::getUsername(){
    return username;
}

string Profile::getFullName(){
    return(displayname + " (@" + username + ")");
}

void Profile::setDisplayName(string dspn){
    displayname = dspn;
}

class Network {
private:
  static const int MAX_USERS = 20; // max number of user profiles
  int numUsers;                    // number of registered users
  Profile profiles[MAX_USERS];     // user profiles array: // mapping integer ID -> Profile
  bool following[MAX_USERS][MAX_USERS]; // friendship matrix:
 // following[id1][id2] == true when id1 is following id2

  // Returns user ID (index in the 'profiles' array) by their username
  // (or -1 if username is not found)
  int findID (string usrn);
public:
  // Constructor, makes an empty network (numUsers = 0)
  Network();
  // Attempts to sign up a new user with specified username and displayname
  // return true if the operation was successful, otherwise return false
  bool addUser(string usrn, string dspn);
  // Make 'usrn1' follow 'usrn2' (if both usernames are in the network).
  // return true if success (if both usernames exist), otherwise return false
  bool follow(string usrn1, string usrn2);
  // Print Dot file (graphical representation of the network)
  void printDot();
};

Network::Network(){
    numUsers = 0;
    for(int row = 0; row < MAX_USERS; row++){
        for(int col = 0; col < MAX_USERS; col++){
            following[row][col] = false;
        }
    }
}

int Network::findID(string usrn){;
    for(int i = 0; i < 20; i++){
        if(profiles[i].getUsername() == usrn){
            return i;
        }
    }
    return -1;
}

bool Network::addUser(string usrn, string dspn){
    int x;
    for(int i = 0; i < usrn.length(); i++){
        x = (int)usrn[i];
        if (!((x >= 48 && x <= 57) || (x >= 65 && x <= 90) || (x >= 97 && x <= 122))){
            return false;
        }
    }
    if(findID(usrn) != -1 || numUsers >= 20){
        return false;
    }

    Profile user(usrn, dspn);
    profiles[numUsers] = user;
    numUsers++;
    return true;
}

bool Network::follow(string usrn1, string usrn2){
    if(findID(usrn1) != -1 && findID(usrn2) != -1){
        following[findID(usrn1)][findID(usrn2)] = true;
        return true;
    }
    return false;
}

void Network::printDot(){
    cout << "digraph {" << endl;
    for(int i = 0; i < numUsers; i++){
        cout << "\t \"@" << profiles[i].getUsername() << "\"" << endl;
    }
    cout << endl;

    for(int row = 0; row < MAX_USERS; row++){
      for(int col = 0; col < MAX_USERS; col++){
        if(following[row][col]){
          cout << "\t \"@" << profiles[row].getUsername() << "\"" << " -> " << "\"@" << profiles[col].getUsername() << "\"" << endl;
        }
      }
    }
    cout << "}";
}

int main() {
    Network nw;
    // add three users
    nw.addUser("mario", "Mario");
    nw.addUser("luigi", "Luigi");
    nw.addUser("yoshi", "Yoshi");

    // make them follow each other
    nw.follow("mario", "luigi");
    nw.follow("mario", "yoshi");
    nw.follow("luigi", "mario");
    nw.follow("luigi", "yoshi");
    nw.follow("yoshi", "mario");
    nw.follow("yoshi", "luigi");

    // add a user who does not follow others
    nw.addUser("wario", "Wario");
    
    // add clone users who follow @mario
    for(int i = 2; i < 6; i++) {
        string usrn = "mario" + to_string(i);
        string dspn = "Mario " + to_string(i);
        nw.addUser(usrn, dspn);
        nw.follow(usrn, "mario");
    }
    // additionally, make @mario2 follow @luigi
    nw.follow("mario2", "luigi");

    nw.printDot();
}