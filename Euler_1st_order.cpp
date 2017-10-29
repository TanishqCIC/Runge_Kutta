//Author -> TanishqCIC and VivekPatle
#include <iostream>
using namespace std;

double fun(double  x,float y)
{
    float f;
    f=x+y;
    return f;
}
int main()
{
   float a,b,x,y,h,t,k;
   cout<<"Enter the value of x0: ";
   cin>>a;
   cout<<"Enter the value of x: ";
   cin>>t;
   cout<<"Enter the value of h: ";
   cin>>h;
   cout<<"Enter the value of y0: ";
   cin>>b;

   x=a;
   y=b;
   cout<<"\nValue of x\tValue of y\n";
   while(x<=t)
   {
      k=h*fun(x,y);
      y=y+k;
      x=x+h;
      cout<<x<<"\t \t"<<y<<endl;
   }
   return 0;
}
