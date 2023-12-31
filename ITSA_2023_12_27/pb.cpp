/******************************************************************************

p2
方式一：若是三個項目分數皆為 60 分以上 ( 包含 60 分 ) 即為通過測驗。
方式二：若三個項目中有其中一個項目分數未滿 60 分，但三個項目分數總合超過 220 分，也可算通過測驗。
        若三個項目中有其中一個項目分數未滿 60 分，而三個項目分數總合也沒能超過 220 分，可獲得補考機會。
        若是三個項目中有兩個項目不及格，但另一個項目成績高於 80 分 ( 包含 80 分 ) ，也可獲得補考的機會。其餘皆判定為無法通過。
輸入說明
第一行有 1 個正整數N（1 ≤ N ≤ 100），表示共有N筆測資。
每筆測資為一行有 3 個非負整數 (範圍皆為 0 到 100), 分別代表該名學生平時、期中考、期末考的分數。
輸出說明:
若是通過，則輸出"P"。若是需要補考，則輸出"M"。若是無法通過測驗，則輸出"F"。
5
95 86 100
30 60 80
80 55 85
20 30 60
10 80 10
*******************************************************************************/
#include <iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}
    
int main()
{
    int n;  cin >> n;
    while(n--){
        int num[3]; cin >> num[0] >> num[1] >> num[2];
        sort(num,num+3,cmp);
        //cout << num[0];
        if(num[0]>=60 && num[2]>=60 && num[2]>=60){
            cout << "P" << "\n";
        }else if(num[0]<60 && num[1]>=60){
            if(num[0]+num[1]+num[2]>=220)
                cout << "P" << "\n";
            else
                cout << "M" << "\n";
        }else if(num[1]<60 && num[2]>=80){
            cout << "M" << "\n";
        }else
            cout << "F" << "\n";
        
    }

    return 0;
}