#include "CircularInt.hpp"

    int  Nirmul(int low,int high,int hour){
        int modulo=high-low+1;
        hour=hour%modulo;
        if(hour<0)hour=hour+modulo;
        for(int i = low ; i <= high ; i++ ){
            if(i%modulo==hour){
                return i;
            }
        }
        throw string("error ranging");
    }
    int CircularInt::Nirmul(int result){
     result=result%modulo;
     if(result<0)result=result+modulo;
     for (int i = low; i <=high ; i++) {
        if(i%modulo==result){
            return i;
          }
     }   throw string("error ranging");

    }
    
    CircularInt::CircularInt(int low_point,int high_point){
        low=low_point;
        high=high_point;
        hour=low_point;
        modulo=high-low+1;

    };
    
    int CircularInt::get_low()const{
        return this->low;
    }
    int CircularInt::get_high()const{
        return this->high;
    }

    int CircularInt::get_hour()const{
        return this->hour;
    }
    void CircularInt::set_hour(int a){
        this->hour=Nirmul(a);
    }


    
    void CircularInt::operator= (CircularInt circularInt){
        this->set_hour(circularInt.get_hour());
    }
    void CircularInt::operator= (int a){
        this->set_hour( a );

    }
    CircularInt CircularInt::operator+ (const CircularInt circularInt){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(get_hour()+circularInt.get_hour());
        return *temp;

    }
    CircularInt CircularInt::operator+ (const int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(get_hour()+a);
        return *temp;

    }
    CircularInt CircularInt::operator- (const CircularInt circularInt){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(this->get_hour()-circularInt.get_hour());
        return *temp;
    }
    CircularInt CircularInt::operator- (const int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(this->get_hour()-a);
        return *temp;
    }
    CircularInt CircularInt::operator+ (){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->hour=get_hour();
        return *temp;
    }
    CircularInt CircularInt::operator- (){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(get_high()-get_hour());
        return *temp;
    }
    CircularInt CircularInt::operator* (const CircularInt circularInt){
        CircularInt *temp= new CircularInt(get_low(),get_high());
        temp->set_hour(get_hour()*circularInt.get_hour());
        return *temp;
    }

    CircularInt CircularInt::operator* (const int a){
        CircularInt *temp= new CircularInt(get_low(),get_high());
        temp->set_hour(get_hour()*a);
        return *temp;
    }
    CircularInt CircularInt::operator/ (const CircularInt circularInt){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        if(this->get_hour()%circularInt.get_hour()!=0||circularInt.get_hour()==0)throw string("division error");
        temp->set_hour(this->get_hour()/circularInt.get_hour());
        return *temp;
    }
    CircularInt CircularInt::operator/ (const int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        if(this->get_hour()%a!=0||a==0)throw string("division error");
        temp->set_hour(this->get_hour()/a);
        return *temp;
    }
    CircularInt CircularInt::operator% (const CircularInt circularInt){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        if(circularInt.get_hour()==0)throw string("division error");
        temp->set_hour(this->get_hour()%circularInt.get_hour());
        return *temp;
    }
    CircularInt CircularInt::operator% (const int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        if(a==0)throw string("division error");
        temp->set_hour(this->get_hour()%a);
        return *temp;
    }
    CircularInt& CircularInt::operator++ () {
    hour++;
    set_hour(hour);
    return *this;
    }
    CircularInt CircularInt::operator++ ( int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        int temps=get_hour();
        temp->set_hour(++temps);
        set_hour(temps++);
        return *temp;
    }
    CircularInt& CircularInt::operator-- (){
        set_hour((get_hour()-1));
        return *this;
    }
    CircularInt CircularInt::operator-- (const int a){
        CircularInt *temp= new CircularInt(this->get_low(),this->get_high());
        temp->set_hour(get_hour()-1);
        return *temp;
    }



    bool CircularInt::operator== (const CircularInt& circularInt){
        if(this->get_hour()==circularInt.get_hour()&&
                this->get_low()==circularInt.get_low()&&
                this->get_high()==circularInt.get_high())return true;
        return false;
    }
    bool CircularInt::operator== (const int& a){
        if (this->get_hour()==a)return true;
        return false;
    }
    bool CircularInt::operator!= (const CircularInt& circularInt){
        if(this->get_hour()==circularInt.get_hour()&&
           this->get_low()==circularInt.get_low()&&
           this->get_high()==circularInt.get_high())return false;
        return true;
    }
    bool CircularInt::operator!= (const int& a){
        if (this->get_hour()==a)return false;
        return true;
    }
    bool CircularInt::operator> (const CircularInt& circularInt) const{
        if(this->get_hour()>circularInt.get_hour())return true;
        return false;
    }
    bool CircularInt::operator> (const int& a) const{
        if (this->get_hour()>a)return true;
        return false;
    }

    bool CircularInt::operator< (const CircularInt& circularInt) const{
        if (this->get_hour()<circularInt.get_hour())return true;
        return false;
    }
    bool CircularInt::operator< (const int& a) const{
        if (this->get_hour()<a)return true;
        return false;
    }
    bool CircularInt::operator>= (const CircularInt& circularInt) const{
        if(get_hour()>=circularInt.get_hour())return true;
        return false;
    }
    bool CircularInt::operator>= (const int& a) const{
        if(get_hour()>=a)return true;
        return false;
    }
    bool CircularInt:: operator<= (const CircularInt& circularInt) const{
        if(get_hour()<=circularInt.get_hour())return true;
        return false;
    }
    bool CircularInt::operator<= (const int& a) const{
        if(get_hour()<=a)return true;
        return false;
    }




     int operator-( int a,CircularInt& c)  {
        int modulo=(c.get_high()-c.get_low()+1);
         a=a-c.get_hour();
         while(a<0){
             a=a+modulo;
         }
         a=a%modulo;
         for(int i=c.get_low();i<=c.get_high();i++){
             if(i%modulo==a){
                 return i;
             }
         }throw string("error negating");
    }



    bool CircularInt::operator! () const{
        return !(this->get_hour());
    }
    bool CircularInt::operator&& (const CircularInt circularInt){
        return (this->get_hour()&&circularInt.get_hour());
    }
    bool CircularInt::operator&& (const int a){
        return (this->get_hour()&&a);
    }
    bool CircularInt::operator|| (const CircularInt circularInt){
        return (this->get_hour()||circularInt.get_hour());
    }

    bool CircularInt::operator|| (const int a){
        return (this->get_hour()||a);

    }


    CircularInt CircularInt::operator<< (const CircularInt circularInt){
        CircularInt *temp=new CircularInt (get_low(),get_high());
        temp->set_hour((get_hour())<<(circularInt.get_hour()));
        return *temp;
    }
    CircularInt CircularInt::operator<< (const int a){
        CircularInt *temp=new CircularInt (get_low(),get_high());
        temp->set_hour((get_hour())<<(a));
        return *temp;
    }
    CircularInt CircularInt::operator>> (const CircularInt circularInt){
        CircularInt *temp=new CircularInt (get_low(),get_high());
        temp->set_hour((get_hour())>>(circularInt.get_hour()));
        return *temp;
    }
    CircularInt CircularInt::operator>> (const int a){
        CircularInt *temp=new CircularInt (get_low(),get_high());
        temp->set_hour((get_hour())>>(a));
        return *temp;
    }




    CircularInt& CircularInt::operator+= (const CircularInt circularInt){
        this->set_hour(get_hour()+circularInt.get_hour());
        return *this;
    }
    CircularInt& CircularInt::operator+= (const int a){
        this->set_hour(get_hour()+a);
        return *this;
    }
    CircularInt& CircularInt::operator-= (const CircularInt circularInt){
        this->set_hour(get_hour()-circularInt.get_hour());
        return *this;
    }
    CircularInt& CircularInt::operator-= (const int a){
        this->set_hour(get_hour()-a);
        return *this;
    }
    CircularInt& CircularInt::operator*= (const CircularInt circularInt){
        int temp=get_hour()*circularInt.get_hour();
        set_hour(temp);
        return *this;
    }
    CircularInt& CircularInt::operator*= (const int a){
        int temp=get_hour()*a;
        set_hour(temp);
        return *this;
    }
    CircularInt& CircularInt::operator/= (const CircularInt circularInt){
        if(circularInt.get_hour()==0||get_hour()%circularInt.get_hour()!=0)throw string("division error");
        this->set_hour(get_hour()/circularInt.get_hour());
        return *this;
    }
    CircularInt& CircularInt::operator/= (const int a){
        if(a==0||get_hour()%a!=0)throw string("division error");
        this->set_hour(get_hour()/a);
        return *this;
    }
    CircularInt& CircularInt::operator%= (const CircularInt circularInt){
        if(circularInt.get_hour()==0)throw string("division error");
        this->set_hour(get_hour()%circularInt.get_hour());
        return *this;
    }
    CircularInt& CircularInt::operator%= (const int a){
        if(a==0)throw string("division error");
        this->set_hour(get_hour()%a);
        return *this;
    }

     CircularInt operator+ (const int a, const CircularInt& circularInt){
         CircularInt *temp=new CircularInt (circularInt.get_low(),circularInt.get_high());
         temp->set_hour(circularInt.get_hour()+a);
         return *temp;
     }
     CircularInt operator- (const int a, const CircularInt& circularInt){
         CircularInt *temp=new CircularInt (circularInt.get_low(),circularInt.get_high());
         temp->set_hour(a-circularInt.get_hour());
         return *temp;
     }
     CircularInt operator/ (const int a, const CircularInt& circularInt){
         CircularInt *temp=new CircularInt (circularInt.get_low(),circularInt.get_high());
         if(circularInt.get_hour()==0||a%circularInt.get_hour()!=0)throw string("division error");
         temp->set_hour(a/circularInt.get_hour());
         return *temp;
     }
     bool operator== (const int& a, const CircularInt& circularInt){
         if(a==circularInt.get_hour())return true;
         return false;
     }

     bool operator!= (const int& a, const CircularInt& circularInt){
         if(a!=circularInt.get_hour())return true;
         return false;
     }

     bool operator> (const int& a, const CircularInt& circularInt){
         if(a>circularInt.get_hour())return true;
         return false;
     }
     bool operator< (const int& a, const CircularInt& circularInt){
         if(a<circularInt.get_hour())return true;
         return false;
     }
     bool operator>= (const int& a, const CircularInt& circularInt){
         if(a>=circularInt.get_hour())return true;
         return false;
     }
     bool operator<= (const int& a, const CircularInt& circularInt){
         if(a<=circularInt.get_hour())return true;
         return false;
     }

      istream& operator>> (istream& is, CircularInt& circularInt){
         int x;
         is>> x;
         circularInt.set_hour(x);
          return is;
     }

    ostream& operator<<(ostream& output,const CircularInt& x){
    output<<x.hour;
        return  output;
    }


