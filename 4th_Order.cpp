//Author -> TanishqCIC and VivekPatle
#include <iostream>
using namespace std;

double dydx(double x, double y)
{
   return((x - y)/2);
}

double rungeKutta(double x0, double y0, double x, double h)
{

   int n = (int)((x - x0) / h);

   double k1, k2, k3, k4, k5;

   double y = y0;
   for (int i=1; i<=n; i++)
    {

      k1 = h*dydx(x0, y);
      k2 = h*dydx(x0 + 0.5*h, y + 0.5*k1);
      k3 = h*dydx(x0 + 0.5*h, y + 0.5*k2);
      k4 = h*dydx(x0 + h, y + k3);

      y = y + (1.0/6.0)*(k1 + 2*k2 + 2*k3 + k4);;

      x0 = x0 + h;
    }

   return y;
}

int main()
{
   double x0, y, x, h;
   cout<<"Enter the value of x0: ";
   cin>>x0;
   cout<<"Enter the value of x: ";
   cin>>x;
   cout<<"Enter the value of h: ";
   cin>>h;
   cout<<"Enter the value of y: ";
   cin>>y;
   cout<<"\nThe value of y at x is : "<<rungeKutta(x0, y, x, h)<<endl;
   return 0;
}
