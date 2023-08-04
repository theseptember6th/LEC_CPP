//exceptions specification for function

#include<iostream>
using std::cin;
using std::cout;
class DAYERR{};
class MONTHERR{};
class YEARERR{};
class Date{
   private:
     int day,month,year;
     public:
     void read_date() throw (DAYERR,MONTHERR);
     void show_date();

};
void Date::read_date() throw(DAYERR,MONTHERR)
 {
    cout<<"Enter day: ";
    cin>>day;
    if(day>31)
      throw DAYERR();
    cout<<"enter month: ";
    cin>>month;
    if(month>12)
     throw MONTHERR();
    cout<<"Enter year: ";
    cin>>year;
    if(year<0)
    throw YEARERR();//unspecified exception
 }
 void Date::show_date(){
    cout<<"Date of birth is "<<day<<"/"<<month<<"/"<<year;
 }
    
int main(){
   Date d1;
   try{
    cout<<"Enter your date of birth\n";
    d1.read_date();
    d1.show_date();
   }
   catch(DAYERR){
    cout<<"Exception:day cannot be greater than 31";
   }
   catch(MONTHERR){
    cout<<"Exception:month cannot be greater than 12";

   }
   catch(YEARERR){
    cout<<"Exception: year cannot be negative";
   }
return 0;
}