#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstring>
using namespace std;
#define endl "\n"
const int mod = 1e9 + 7;
const long long INF = 1e18;
#define FAST_IO                           \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(0);                       \
    }

int binexp( int a,int b){ int ans=1; a=a%mod; while(b){if(b&1){ans=(ans*a)%mod;}a=(a*a)%mod;b>>=1;}return ans;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i=i+6)if(n%i==0||n%(i+2)==0)return false;return true;}

#define vi      vector<int>
#define int     long long int
#define yes     cout << "YES\n";
#define no      cout << "NO\n"; 

void sol() {
int n, m;
cin >> n >> m;
vi v(n), pre(n+5, 0);
for(int i = 0; i < n; i++) {
    cin >> v[i];
}
sort(v.begin(), v.end());
for(int i = 0; i < n; i++) {
    pre[i+1] = pre[i] + v[i];
}
while(m--) {
    int x, y;
    cin >> x >> y;
    cout << pre[n-x+y] - pre[n-x] << endl;
}
}

int32_t main()
{
    FAST_IO
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // int t;
    // cin >> t;
    // while(t--)
    sol();
}
// /*
// /*
// Write a program to implement a shift reducing parsing.
// */
// #include <bits/stdc++.h>
// using namespace std;

// // map<string, string> rules = {{"E+E", "E"}, {"E*E", "E"}, {"(E)", "E"}, {"a", "E"}};
// map<string, string> rules;
// string stk = "", input;

// void reduce() {
//     for (auto rule : rules) {
//         if (stk.find(rule.first) != std::string::npos) {
//             int position = stk.find(rule.first);
//             stk.erase(position); // Remove the right side of the production
//             stk += rule.second; // Add the left side of the production
//             cout << left << setw(13) << "$" + stk<< right << setw(13) << input + "$" <<right<< "         Reduce " << rule.second << "-->" << rule.first << "\n";
//             reduce();
//             return;
//         }
//     }
// }

// int main()
// {
//     freopen("10.input.txt", "r", stdin);
//     string production;
//     int n; // Number of production rules
//     cin>>n;
//     cin.ignore();
//     for(int k = 0; k < n; k++) // Read the grammar from file
//     {
//         getline(cin, production);
//         rules[production.substr(3)] = production[0]; // Left side of the production is key
//     }                                                // Right side is the value

//     cin >> input; // a+a*(a+a)+a
//     cout<<"Stack              "<<"Input            "<<"Action\n";
//     cout << left << setw(13) << "$" + stk<< right << setw(13) << input + "$"<<endl;
//     for(int i = 0; !input.empty(); i++) {
//         stk += input[0]; // Push the terminal into stack
//         input.erase(0, 1); // Remove first character from the input
//         cout << left << setw(13) << "$" + stk<< right << setw(13) << input + "$" << right<< "         Shift " << stk.back() << "\n";
//         reduce();
//     }
//     if(stk == "E") cout<<"Accepted";
//     else cout<<"Rejected";
// }
// */