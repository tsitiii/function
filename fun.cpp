#include <iostream>
#include<cmath>
using namespace std;
//program to find product of number using function
/*void getproduct(int, double );
int main()
{
    int firstNum ,secondNum;
  cout<<"enter numbers: ";
  cin>>firstNum>>secondNum;
  getproduct(firstNum,secondNum);
}
void getproduct(int num1,double num2)
{
double product= num1*num2;
cout<<"product of "<<num1<<"*"<<num2<<"="<<product;
}





void summ(double, double, double);
int main()
{
    double x,y,sum;
    cout<<"enter number1: ";
    cin>>x;
    double num1= cbrt(x);
    cout<<"enter number2: ";
    cin>>y;
    double num2 = sqrt(y);
    cout<<"sum of cube root and square root of given numbers is"<<sum;
    summ(num1, num2, sum);
     cout<<"sum of cube root and square root of given numbers is"<<sum;
}
    void summ(double num1, double num2, double sum)
{
     sum= num1 + num2;
}







//void temp(int i=10, float f=8.8)//default argument fir i itts passed so not default but f correct
{
    cout<<i<<endl<<f;
}

int main()
{
    temp(6);
}





int display(int n)
{
    if (n<1)
    return 1;
    else{
        cout<<n;
        //display(n-1);
        return n* display(n-1);
    }
}
int main()
{
    int num;
    cin>>num;
   display(num);
}
  
  



  int pattern(int);
  int main()
  { int no;
  string defaultt, own;
   cout<<"enter number: ";
   cin>>no;
   //cout<<"do u want default or u want enter ur own:";
    //if (defaultt=="yes")
     pattern(no);
   }
   int pattern(int triangle)
   {
    for(int i=0; i<triangle; i++)
    {
        for(intj=0; j<triangle; j++)
    }
   }

*/

//question number 4 in the last slide
void calcQuoteint(double n1, double n2, double &answer);

int main()
{
 double num1, num2,quoteint,answer;
 cout<<"enter the numbers: ";
  cin>>num1>>num2;
  //quoteint= num1/num2;
 calcQuoteint(num1, num2, quoteint);
  cout<<&answer;
 
}
 void calcQuoteint(double n1, double n2, double &answer)
{
  
  answer = n1/n2;
  //cout<<n1<<"/"<<n2<<" is = "<<answer;
}




/*
//question number 4
int operation(int);
int main()
{
    int num;
    cout<<"enter number: ";
    cin>>num;
    operation(num);
}
int operation(int noo)
{
 
if(noo<0)
{ 
    int result= pow(noo,2);
    //return result; 
    cout<<noo<<" square is = "<<result<<endl;
}
else
{
    int product=sqrt(noo);
    //return product;
    cout<<"the square root of "<<noo<<" is = "<<product;
}
}
*/

