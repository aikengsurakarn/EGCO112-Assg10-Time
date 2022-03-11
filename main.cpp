#include <iostream>
#include <iomanip>
using namespace std;

struct Time{
	int h,m,s;
};

void getTime(struct Time &t)
{
  cin >> t.h >> t.m >> t.s;
}
struct Time subtract( struct Time t2, struct Time t1 )
{
  struct Time t3;
  int time3, time2, time1;
  time2 = t2.h*3600 + t2.m*60 + t2.s;
  time1 = t1.h*3600 + t1.m*60 + t1.s;

  time3 = time2 - time1;

  t3.s = time3%60;
  t3.m = ((time3-t3.s)/60)%60;
  t3.h = (time3-t3.s-t3.m*60)/3600;
  
  return t3;
}
// t3=t2-t1



int main(){
    struct Time t1,t2,t3;
    cout<<"What time was it? ";
    getTime(t1); // รับค่าเวลาเข้ามา 
    cout<<"What time is it now? ";
    getTime(t2); // รับค่าเวลาเข้ามา 
    t3=subtract(t2,t1); //t3=t2-t1
    cout<<"Time diff is ";
    cout<<setfill('0')<<setw(2)<<t3.h<<":";
    cout<<setfill('0')<<setw(2)<<t3.m<<":";
    cout<<setfill('0')<<setw(2)<<t3.s<<endl;

}
