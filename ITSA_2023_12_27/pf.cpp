/******************************************************************************
p6
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x,y,z;
    cin >> x >> y >> z;
        long long ans=x+y;
        for(int i=x+y-1;i>0;i--)
            ans*=i;
        //cout << ans << "\n";
        for(int i=0;i<z;i++)
            ans*=(x+y-i);
        cout << ans << "\n";
        
    

    return 0;
}