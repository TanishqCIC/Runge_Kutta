//Author -> TanishqCIC and VivekPatle
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double(x), double(y))
{
   return (y-x);
}

int main()
{
   int n,i,j;
   double h;
   cout<<"Enter the number of solutions: ";
   cin>>n;
   cout<<"Enter the value of step size: ";
   cin>>h;
   long double y[n],e[n],x[n],Y[n],L[n],k[n][n];
   cout<<"Enter the value of x0: ";
   cin>>x[0];
   cout<<"Enter The Value of y0: ";
   cin>>y[0];
   for(i=1;i<=n;i++)
   {
      x[i]=x[i-1]+h;
   }

   cout<<"Solution of Second Order Runga Kutta Method is "<<endl;

   for(j=1;j<=n;j++)
   {
      k[1][j]=h*f(x[j-1],y[j-1]);
      cout<<"K[1] = "<<k[1][j]<<"\t";
      k[2][j]=h*f(x[j-1]+h,y[j-1]+k[1][j]);
      cout<<"K[2] = "<<k[2][j]<<"\t";
      y[j]=y[j-1]+((k[1][j]+k[2][j])/2);
      cout<<"y["<<h*j<<"] = "<<setprecision(4)<<y[j]<<endl;
   }
   return 0;
}
