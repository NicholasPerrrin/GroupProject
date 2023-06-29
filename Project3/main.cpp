// program name goes here
// your name goes here
// any example usage or helpful command line arguments go here

#include <iostream>
// Add any other header files here
#include <string>

using namespace std;

// This function takes a char to print and a message and prints a nice introduction 
// surrounded by the characters char. See pic in assignment.
void Introduction(char c, string message)
{
    //variable to get the length of message
    int length = message.length() + 4;
    //output the introduction
    for (int i = 0; i < length; i++) {
        cout << c;
    }
    cout << '\n' << "**" << message << "**" << endl;
    for (int i = 0; i < length; i++) {
        cout << c;
    }
}

// This function takes a file name and reads in data, storing it in a string array that is used 
// by the rest of the program. Use this function to read the team names or the corresponding dates. 
// The function should return true on success or false on failure.
bool ReadFile(string fileName, string data[], const int maxArraySize)
{
    // Work here.
    return true;
}

// This function gets the number of occurrences of a team name in the array of teams 
// and returns the count of the teams as a constant integer.
const int GetCountOfTeam(string teamName, const string teams[], const int maxArraySize)
{
    // Work here.
    return 1;
}

// This function searches the team's array for the team's name that won the world series 
// the most times and returns it as a constant string.
const string GetMostWinningTeam(const string teams[], const int maxArraySize)
{
    // Work here.
    return "true";
}

// This function returns the team that won the world series on the "date".
const string GetTeamForDate(const string date, const string teams[], const string dates[], const int maxArraySize)
{
    // Work here.
    return "true";
}

// This function changes all of the team names to either upper or lower case depending on the value of "to_upper".
void ConvertTeamNameCase(bool to_upper, string teams[], const int maxArraySize)
{
    // Work here.
}

// This function provides the menu and calls the other functions according to what the user inputs. 
// See pic in assignment for more details.
int main(int argc, char* argv[])
{
    if (argc < 3)
    {
        cout << "Error! Not enough file names. Expecting 2!" << endl;
        return -1;
    }

    // Const representing the number of lines of data in both files.
    const int SIZE_DATA = 120;


    // Work here
    //variable for introduction
    char ch = '*';
    string message = "Welcome to my World Series Program ";


    //function calls
    Introduction(ch, message);

    // Return 0 to indicate success.
    return 0;
}

// Place any unused code here so that the instructor can follow your problem solving thoughts.