#include <iostream>
#include <unistd.h> 
using namespacestd;
void displayTime(int hours, int minutes, int seconds) {
   cout << hours << ":"
        << minutes << ":"
        << seconds << endl;
}

int main() {
  int hour = 0;
  int min = 0;
  int sec = 0;
  while(true) {
    sleep(1);
      millisec++;
    if(millisec > 59) 
    {
        sec++;
        millisec = 0;
    }
 if(sec > 59) {
      min++;
      sec = 0;
    } 

    if(min > 59) {
      hour++;
      sec = 0;
      min = 0;
    }

    displayTime(hour, min, sec);
  }
}
