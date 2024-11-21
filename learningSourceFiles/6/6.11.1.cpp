#include <bits/stdc++.h>
using namespace std;
#define GO(u,v,i) for(int i=u;i<=v;i++)
#define OG(u,v,i) for(int i=u;i>=v;i--)
#define swp(a,b) a^=b,b^=a,a^=b
template<class t>inline t fr(){
    t num=0,dis=1;
    char ch=getchar();
    while(ch<'0'||ch>'9'){if(ch=='-')dis=-1;ch=getchar();}
    while(ch<='9'&&ch>='0'){num=(num<<1)+(num<<3)+(ch^48);ch=getchar();}
    return num*dis;
}
template<class t>inline void fw(t num){
    if(num>9)fw(num/10);
    putchar(num%10+'0');
}
template<class t>inline void fw(t num,char ch){
    if(num<0)num=-num,putchar('-');
    fw(num);putchar(ch);
}

int main(){
    char ch=getchar();
    while(ch!='@'){
        if(islower(ch))putchar(toupper(ch));
        else if(isupper(ch))putchar(tolower(ch));
        else putchar(ch);
        ch=getchar();
    }
    return 0;
}