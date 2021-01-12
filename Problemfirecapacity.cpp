/*
Problem 2 (firecapacity):
Write a program that determines whether a meeting room is in violation of fire
law regulations regarding the maximum room capacity. The program will read in
the maximum room capacity and the number of people to attend the meeting. If
the number of people is less than or equal to the maximum room capacity, the
program announces that it is legal to hold the meeting and tells how many
additional people may legally attend. If the number of people exceeds the
maximum room capacity, the program announces that the meeting cannot be held
as planned due to fire regulations and tells how many people must be excluded
in order to meet the fire regulations.
*/

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main (int argc, char **argv){

  int maxRoomCapacity;
  int peopleAtMeeting;

  int capacityDifference;

  cout << "Input maximum room capacity: ";
  cin >> maxRoomCapacity;
  cout << "Input people coming to the meeting: ";
  cin >> peopleAtMeeting;
  cout << endl;

  capacityDifference = maxRoomCapacity - peopleAtMeeting;

  if (peopleAtMeeting == maxRoomCapacity) {
    cout << "The number of people attending is the max capacity of the room. No more people may attend." << endl;
  }
  else if (peopleAtMeeting < maxRoomCapacity) {
    cout << "The room is not at capacity, there are " << capacityDifference << " spots in the room left." << endl;
  }
  else{
    cout << "The room is above capacity by " << abs(capacityDifference) << endl;
  }


  return 0;
}
