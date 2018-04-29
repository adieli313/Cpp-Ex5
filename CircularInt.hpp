#include <iostream>
using namespace std;
#ifndef CPP_4_CIRCULATINT_H
#define CPP_4_CIRCULATINT_H

#endif

class CircularInt{
private:
     int low;
     int high;
     int modulo;
public:

    
    int get_low()const;
    int get_high()const;
    int get_hour()const;
    void set_hour(int a);

    
    friend int  Nirmul(int low,int high,int hour);
    int Nirmul(int result);

   
    CircularInt(int low,int high);
    int hour;



    void operator= (CircularInt circularInt);
    void operator= (int a);
    
    
    CircularInt operator+ (const CircularInt circularInt);
    CircularInt operator+ (const int increment);
    CircularInt operator- (const CircularInt circularInt);
    CircularInt operator- (const int decrement);
    CircularInt operator+ ();
    CircularInt operator- ();
    CircularInt operator* (const CircularInt circularInt);
    CircularInt operator* (const int multiplier);
    CircularInt operator/ (const CircularInt circularInt);
    CircularInt operator/ (const int divisor);
    CircularInt operator% (const CircularInt circularInt);
    CircularInt operator% (const int modulo);
    CircularInt& operator++ ();
    CircularInt operator++ (int increment);
    CircularInt& operator-- ();
    CircularInt operator-- (const int decrement);

    
    bool operator== (const CircularInt& circularInt);
    bool operator== (const int& a);
    bool operator!= (const CircularInt& circularInt);
    bool operator!= (const int& a);
    bool operator> (const CircularInt& circularInt) const;
    bool operator> (const int& a) const;
    bool operator< (const CircularInt& circularInt) const;
    bool operator< (const int& a) const;
    bool operator>= (const CircularInt& circularInt) const;
    bool operator>= (const int& a) const;
    bool operator<= (const CircularInt& circularInt) const;
    bool operator<= (const int& a) const;


    bool operator! () const;
    bool operator&& (const CircularInt circularInt);
    bool operator&& (const int a);
    bool operator|| (const CircularInt circularInt);
    bool operator|| (const int a);


    
    CircularInt operator<< (const CircularInt circularInt);
    CircularInt operator<< (const int a);
    CircularInt operator>> (const CircularInt circularInt);
    CircularInt operator>> (const int a);


    CircularInt& operator+= (const CircularInt circularInt);
    CircularInt& operator+= (const int increment);
    CircularInt& operator-= (const CircularInt circularInt);
    CircularInt& operator-= (const int decrement);
    CircularInt& operator*= (const CircularInt circularInt);
    CircularInt& operator*= (const int multiplier);
    CircularInt& operator/= (const CircularInt circularInt);
    CircularInt& operator/= (const int divisor);
    CircularInt& operator%= (const CircularInt circularInt);
    CircularInt& operator%= (const int divisor);
    


    friend CircularInt operator+ (const int increment, const CircularInt& circularInt);
    friend CircularInt operator- (const int decrement, const CircularInt& circularInt);
    friend CircularInt operator/ (const int divisor, const CircularInt& circularInt);
    friend bool operator== (const int& a, const CircularInt& circularInt); 
    friend bool operator!= (const int& a, const CircularInt& circularInt); 
    friend bool operator> (const int& a, const CircularInt& circularInt); 
    friend bool operator< (const int& a, const CircularInt& circularInt); 
    friend bool operator>= (const int& a, const CircularInt& circularInt); 
    friend bool operator<= (const int& a, const CircularInt& circularInt); 
    friend ostream& operator<< (ostream& os, const CircularInt& circularInt);
    friend istream& operator>> (istream& is, CircularInt& circularInt);
};