#include <iostream>
using namespace std;

class clockType
{
  public: 
    void setTime(int,int,int);
    void getTime(int&,int&,int&);
    void printTime() const;
    void incrementSeconds();
    void incrementMinutes();
    void incrementHours();
    bool equalTime(const clockType & otherTime) const;
  private:
    int hr;
    int min;
    int sec;
};
void clockType::setTime(int hours, int minutes, int seconds)
{
  if(hours >= 0 && hours < 24)
  {
    hr = hours;
  }
  else{
    hr = 0;
  }
  if(minutes >= 0 && minutes < 60)
  {
    min = minutes;
  }
  else{
    min = 0;
  }
  if(seconds >= 0 && seconds < 60)
  {
    sec = seconds;
  }
  else{
    sec = 0;
  }
} 
void clockType::getTime(int& hours,int& minutes,int& seconds)
{
   hr = hours;
   min = minutes;
   sec = seconds;
}
void clockType::printTime() const
{
  if(hr < 10)
    cout<<"0";
    cout<<hr<<":";
  if(min < 10)
     cout<<"0";
     cout<<min<<":";
  if(sec < 10)
     cout<<"0";
     cout<<sec;
}
void clockType::incrementHours()
{
  hr++;
  if(hr > 23)
         hr = 0;
}
void clockType::incrementMinutes()
{
  min++;
  if(min > 59)
     min = 0;
     incrementHours();
}
void clockType::incrementSeconds()
{
  sec++;
  if(sec > 59)
     sec = 0;
     incrementMinutes();
}
bool clockType::equalTime(const clockType &otherTime) const
{
  return (hr == otherTime.hr
      && min == otherTime.min
      && sec == otherTime.sec);
}
int main() {
    clockType myClock;
    clockType yourClock;
    int hours;
    int minutes;
    int seconds;
    myClock.setTime(5,4,30);
    cout<<"Line 2: myClock: ";
    myClock.printTime();
    cout<<endl;
    cout<<"Line 5: yourClock: ";
    yourClock.printTime();
    cout<<endl;
    yourClock.setTime(5,45,16);
    cout<<"Line 9: After setting - yourClock: ";
    yourClock.printTime();
    cout<<endl;
    if(myClock.equalTime(yourClock))
       cout<<"Line 13: Both times are equal."
           <<endl;
    else
       cout<<"Line 15: The two times are not equal"
           <<endl;
   cout<<"Line 16: Enter hours, minutes, and "
       <<"seconds: ";
   cin>>hours>>minutes>>seconds;
   cout<<endl;
   myClock.setTime(hours,minutes,seconds);
   cout<<"Line 20: New myClock: ";
   myClock.printTime();
   cout<<endl;
   myClock.incrementSeconds();
   cout<<"Line 24: After incrementing the clock by "
       <<"one second, myClock: ";
   myClock.printTime();
   cout<<endl;
   return 0;
} 