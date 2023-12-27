
(1). 當主詞是 He, She, Mary, John 時，動詞要加 s.
(2). 當主詞和受詞是同一類人稱代名詞時，受詞要改成反身代名詞 .
I -- me -- myself
HeJohn -- him -- himself
SheMary -- her -- herself
They -- them -- themselves
測資會出現的主詞、動詞、受詞如下列：
主詞：I 、 He 、 She 、 They 、 Mary 、 John
及物動詞：love 、 like 、 see 、 find
受詞：me 、 him 、 her 、 them 、 Mary 、 John


#include iostream

using namespace std;

string aa[6]={I, He, She, They,Mary,John};
string bb[4]={love, like, see, find};
string cc[6]={me, him, her, them,Mary,John};
string dd[14]={I, He, She, They, love, like, see, find,me, him, her, them,Mary,John};
int main()
{
    int n; cin  n;
    while(n--){
        string s,a,b,c;
        for(int i=0;i3;i++){
            cin  s;
            for(int i=0;i14;i++){
                if(s==dd[i]){
                    if(i=4 && i=7)
                        b=dd[i];
                    else if(i7 && c==0)
                        c=dd[i];
                    else
                        a=dd[i];
                }
            }

        }
        if((a==John  a==Mary) && (a==John  a==Mary)){
            string tame=a;
            a=c;c=tame;
            string tame_b=b;
            if(a==He  a==She  a==Mary  a==John)
                b+=s;
            if(a==I && c==me)
                c=myself;
            if((a==He  a==John)&& c==him)
                c=himself;
            if((a==She  a==Mary)&& c==her)
                c=herself;
            if(a==They && c==them)
                c=themselves;
            cout  a     b      c   or ;
            tame=a;
            a=c;c=tame;
            b=tame_b;
        }

            if(a==He  a==She  a==Mary  a==John)
                b+=s;
            if(a==I && c==me)
                c=myself;
            if((a==He  a==John)&& c==him)
                c=himself;
            if((a==She  a==Mary)&& c==her)
                c=herself;
            if(a==They && c==them)
                c=themselves;
            cout  a     b      c  n;
        



        
    }

    return 0;
}