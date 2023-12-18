// Program to take a string and return assignment name
// username, file name, date and time of submission

#include <iostream>
#include <string>
#include <cassert>

using namespace std;

int main(){

    cout << "Enter file name: " << endl;
    string filename;
    getline(cin, filename);

    // verify .cpp extension
    int period_pos = filename.find('.');
    int filename_length = filename.size();
    int length_extension = filename_length - period_pos;
    string cpp = filename.substr(period_pos);
    assert(cpp = ".cpp");

    //assignment name
    int underscore_pos_1 = filename.find("_");
    string assignment_name = filename.substr(0, underscore_pos_1);

    // user name
    int underscore_pos_2 = filename.find("_", underscore_pos_1 + 1);
    string username = filename.substr(underscore_pos_1 + 1, underscore_pos_2 - underscore_pos_1 - 1);

    // submission date
    string submission_date = filename.substr(underscore_pos_2 + 9,  10);

    // submission time
    string submission_hour = filename.substr(underscore_pos_2 + 20, 2);
    string submission_minute = filename.substr(underscore_pos_2 + 23, 2);
    string submission_seconds = filename.substr(underscore_pos_2 + 26, 2);

    // assignment name
    string file_name = filename.substr(underscore_pos_2 + 29, period_pos - underscore_pos_2 - 29);

    // output
    cout << "Assignment Name: " << assignment_name << endl;
    cout << "Username: " << username;
    cout << "File name: " << file_name;
    cout << "Submission date: " << submission_date;
    cout << "Submission time: " << submission_hour <<":"<< submission_minute<<":"<<submission_seconds;


    return 0;
    
}
