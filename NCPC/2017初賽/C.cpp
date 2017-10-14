#include<bits/stdc++.h>
using namespace std;

#define rep(a,b) for(int i = a;i<b;i++)
#define pb push_back
#define P 65537
typedef long long lld;

lld x[3],y[3],ans0,ans1,ans2;
lld lcm(lld a,lld b)
{
    return b?lcm(b,a%b):a;
}
struct equ
{
    lld y,a0,a1,a2;
};

lld fff(lld x, lld p)
{
    if(x < 0 )
        x += p;
    lld tmp = x, ans = 1, pp = p - 2;
    while(pp > 0)
    {
        if(pp & 1)
        {
            ans = (ans % p) * (tmp % p) % p;
        }
        tmp = (tmp % p) * (tmp % p) % p;
        pp >>= 1;
    }

    return ans;
}


equ inf[3];
int gcd(lld a,lld b)
{
    if(b>a)
    {
        swap(a,b);
    }
    return (((a * b) % P) * fff(lcm(a,b), P))%65537;
}
void slove()
{
    lld c[2],d[2],e[2];
    for(int i=0;i<2;i++)
    {
        lld m=gcd(inf[i].a2,inf[i+1].a2);
        lld m1=m * fff(inf[i].a2, P) ,m2=m* fff(inf[i+1].a2, P);
        c[i]=((m1*inf[i].a1-m2*inf[i+1].a1 ) + P) % P;
        d[i]=((m1*inf[i].a0-m2*inf[i+1].a0) + P )% P;
        e[i]=((m1*inf[i].y-m2*inf[i+1].y) + P) % P;
    }
  //  cout<<c[0]<<" "<<d[0]<<e[0]<<endl;
    ans1=(((((e[0]*d[1]-e[1]*d[0])) + P) % P) * fff( ((c[0]*d[1]-c[1]*d[0])) , P)) % 65537;
    ans0=(((((e[0]*c[1]-e[1]*c[0])) + P) % P)* fff( ((c[1]*d[0]-c[0]*d[1])) , P)) % 65537;

    ans2=(((inf[0].y-(ans0+ans1*(inf[0].a1))) + P) * fff(inf[0].a2, P))%65537;

    cout<<(ans0+ P) % P<<" "<< (ans1 + P) % P<<" "<<(ans2 + P ) % P;
}
int main()
{

    int ncase;
    cin>>ncase;
    while(ncase--)
    {
        for(int i=0;i<3;i++)
        {
            cin>>x[i]>>y[i];
            inf[i].a1=x[i]%65537;
            inf[i].a2=(x[i]*x[i])%65537;
            inf[i].y=y[i]%65537;
            inf[i].a0=1;
        }
slove();
if(ncase)
    cout<<endl;
    }
    return 0;
}



