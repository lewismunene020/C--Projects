#include<iostream>
#include<string>


using namespace std;

int main(int argc, char const *argv[])
{
   int b[3] = {12 , 12 , 12};
   int sum=0;
   int  x =0;
   while(x < 3){
        sum+=b[x];
        x++;
   }
    cout << sum;
    return 0;
}
