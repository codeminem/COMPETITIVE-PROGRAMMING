//more optimised code
#include <iostream>
using namespace std;
class gfg{
    public:
        float power(float x,int y) //(2,-3)
    {
        float temp;
        if(y==0)
        {
            return 1;
        }
        temp=power(x,y/2); 
        if(y%2==0)
        {
            return temp*temp;
        }
        else{
            if(y>0){
                return x*temp*temp;
            }
            else{
                return (temp*temp)/x; // for negative y
            }
            
        }
    }

};
int main()
{
    gfg g;
    float x=2;
    int y=-3;
    cout<<g.power(x,y);
    return 0;
}

