
#include <iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

struct mate{
  string ID;
  double a,b,c;
  double ans;
};


bool cmp(mate a, mate b){
    return a.ID<b.ID;
}
int main()
{
    int n;  cin >> n;
    vector<mate> num(n);

    for(int i=0;i<n;i++){
        cin >> num[i].ID >> num[i].a >> num[i].b >> num[i].c;
        num[i].ans=(num[i].a+num[i].b)*0.3+num[i].c*0.4;
    }


    int m;  cin >> m;
    for(int i=0;i<m;i++){
        string t;
        int ti;
        cin >> t >> ti;
        if(ti>6)
        for(int i=0;i<n;i++)
                if(t==num[i].ID)
                    num[i].ans-=(ti-6);
        
    }

    sort(num.begin(),num.end(),cmp);    
    for(auto &v:num)
        cout << v.ID << " " << round(v.ans) << "\n";
    // cout << "\n";
   

        // cout << num[i].ID << " " <<  num[i].ans << "\n";
    return 0;
}

    