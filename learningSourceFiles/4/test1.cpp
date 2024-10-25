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
    string firstName,lastName;
    int age;
    char grade;
    cout<<"What is your first name? __________\b\b\b\b\b\b\b\b\b\b";
    getline(cin,firstName);
    cout<<"What is your last name? ";
    getline(cin,lastName);
    cout<<"What letter grade do you deserve? _\b";
    cin>>grade;
    cout<<"What is you age? ";
    cin>>age;
    cout<<"Name: "<<lastName<<", "<<firstName<<endl;
    cout<<"Grade: "<<(char)(grade+1)<<endl;
    cout<<"Age: "<<age<<endl;

}