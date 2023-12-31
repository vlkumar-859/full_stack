#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <stack>
 
#define in std::cin
#define out std::cout
#define endl std::endl
#define MAX(a, b) std::max(a, b)
#define MAX3(a, b, c) std::max(a, std::max(b, c))
#define MIN(a, b) std::min(a, b)
#define MIN3(a, b, c) std::min(a, std::min(b, c))
#define MAXE(a, b) a = std::max(a, b)
#define MINE(a, b) a = std::min(a, b)
#define GETBIT(a, n) ((a >> n) & 1)
#define BITCOUNT(a) __builtin_popcount(a)
#define S std::string
#define Ss std::stringstream
#define VI std::vector<int>
#define VS std::vector<std::string>
#define MP(a, b) std::make_pair(a, b)
#define PII std::pair<int, int>
#define PSI std::pair<std::string, int>
#define PIS std::pair<int, std::string>
#define PSS std::pair<std::string, std::string>
#define SI std::set<int>
#define SS std::set<std::string>
#define SPII std::set<std::pair<int, int> >
#define SPSI std::set<std::pair<std::string, int> >
#define SPIS std::set<std::pair<int, std::string> >
#define SPSS std::set<std::pair<std::string, std::string> >
#define MSI std::multiset<int>
#define MSS std::multiset<std::string>
#define VII std::vector<int>::iterator
#define VSI std::vector<std::string>::iterator
#define SII std::set<int>::iterator
#define SPIII std::set<std::pair<int, int> >::iterator
#define SPSII std::set<std::pair<std::string, int> >::iterator
#define SPISI std::set<std::pair<int, std::string> >::iterator
#define SPSSI std::set<std::pair<std::string, std::string> >::iterator
#define MSIII std::multiset<int>::iterator
#define MSSI std::multiset<std::string>::iterator
#define MAPII std::map<int, int>
#define MAPSS std::map<std::string, std::string>
#define MAPIS std::map<int, std::string>
#define MAPSI std::map<std::string, int>
using namespace std;
typedef long long ll;

int main()
{ 
    int test;
    cin>>test;
    while (test-->0)
    {
        int res = 0;
        int a,b,qx,qy,kx,ky;
        cin>>a>>b>>qx>>qy>>kx>>ky;
        // cout<<a<<" "<<b<<" "<<qx<<" "<<qy<<" "<<kx<<" "<<ky<<endl;
        vector<int> l = {1,1,-1,-1};
        vector<int> r = {-1,1,-1,1};
        
        for(int i=0;i<4;i++)
        {
            int x = qx+(a*l[i]);
            int y = qy+(b*r[i]);
            for(int i=0;i<4;i++)
            {
                if (x+(a*l[i])==kx && y+(b*r[i])==ky)
                    res++;
                if (a==b)   continue;
                if (x+(b*l[i])==kx && y+(a*r[i])==ky)
                    res++;
            }
            
            
            x = qx+(b*l[i]);
            y = qy+(a*r[i]);
            for(int i=0;i<4;i++)
            {
                if (a==b)    break;
                if (x+(a*l[i])==kx && y+(b*r[i])==ky)
                    res++;
                if (x+(b*l[i])==kx && y+(a*r[i])==ky)
                    res++;
            }
            // for(int i=0;i<4;i++)
            // {
            //     if (x+(b*l[i])==kx && y+(a*r[i])==ky)
            //         res++;
            //     if (x+(a*l[i])==kx && y+(b*r[i])==ky)
            //         res++;
            // }
            
        }
        
        cout<<res<<endl;
    }
    return 0;
}
