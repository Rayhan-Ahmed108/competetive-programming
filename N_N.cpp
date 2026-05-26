#include<bits/stdc++.h>
#define int long long
using namespace std;

pair<pair<int, int>, pair<int, int>> binsearch(int l1, int r1, int l2, int r2){
    cout << "? " << l1 << ' ' << r1 << ' ' << l2 << ' ' << r2 << "\n";
    cout.flush();
    int x;
    cin >> x;
    int conne = 1LL * (l2 - l1 + 1) * (r2 - r1 + 1);
    if(conne == x) return {{-1, -1}, {-1, -1}};
    int slow = x - conne;
    pair<pair<int, int>, pair<int, int>>ans;
    while(r1 <= r2){
        int mid = (r1 + r2) >> 1LL;
        cout << "? " << l1 << ' ' << r1 << ' ' << l2 << ' ' << mid << "\n";
        cout.flush();
        cin >> x;
        conne = 1LL * (l2 - l1 + 1) * (mid - r1 + 1);
        if(x == conne) r1 = mid+1;
        else if(x - conne == 1){
            pair<pair<int, int>, pair<int, int>>p = binsearch(l1, r1, l2, mid);
            if(p.first.first == -1){
                ans.first = p.second;
                ans.second = {-1, -1};
            }
            else{
                ans.first = p.first;
                ans.second = {-1, -1};
            }
            if(slow == 1) return ans;
        }
        else if(x - conne == 2){
            r2 = mid;
            continue;
        }
        cout << "? " << l1 << ' ' << mid+1 << ' ' << l2 << ' ' << r2 << "\n";
        cout.flush();
        cin >> x;
        conne = 1LL * (l2 - l1 + 1) * (r2 - mid);
        if(x == conne) r2 = mid;
        else if(x - conne == 1){
            pair<pair<int, int>, pair<int, int>>p = binsearch(l1, mid+1, l2, r2);
            if(p.first.first == -1){
                ans.second = p.second;
                ans.first = {-1, -1};
            }
            else{
                ans.second = p.first;
                ans.first = {-1, -1};
            }
            if(slow == 1) return ans;
        }
        else if(x - conne == 2){
            r1 = mid + 1;
            continue;
        }
    }
    return ans;
}
void solve(){
    int l1 = 1LL, r2 = 1LL * 1e9;
    int r1 = (l1+r2)*1LL/2LL;
    int l2 = (r2 - r1 + 1) * 1LL;

    int l3 = 1LL, r4 = 1LL * 1e9;
    int r3 = (l3+r4)*1LL/2LL;
    int l4 = (r4 - r3 + 1)*1LL;

    vector<int>best;

    pair<pair<int, int>, pair<int, int>>temp1 = binsearch(l1, l3, r1, r3);
    if(temp1.second.first != -1 && temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }
    else if(temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
    }
    else if(temp1.second.first != -1){
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }

    if(best.size() == 4){
        cout << "! ";
        for(auto c: best){
            cout << c << ' ';
        }
        cout.flush();
        return;
    }

    temp1 = binsearch(l1, l4, r1, r4);
    if(temp1.second.first != -1 && temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }
    else if(temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
    }
    else if(temp1.second.first != -1){
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }

    if(best.size() == 4){
        cout << "! ";
        for(auto c: best){
            cout << c << ' ';
        }
        cout.flush();
        return;
    }

    temp1 = binsearch(l2, l3, r2, r3);
    if(temp1.second.first != -1 && temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }
    else if(temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
    }
    else if(temp1.second.first != -1){
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }

    if(best.size() == 4){
        cout << "! ";
        for(auto c: best){
            cout << c << ' ';
        }
        cout.flush();
        return;
    }

    temp1 = binsearch(l2, l4, r2, r4);
    if(temp1.second.first != -1 && temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }
    else if(temp1.first.first != -1){
        best.push_back(temp1.first.first);
        best.push_back(temp1.first.second);
    }
    else if(temp1.second.first != -1){
        best.push_back(temp1.second.first);
        best.push_back(temp1.second.second);
    }
    if(best.size() == 4){
        cout << "! ";
        for(auto c: best){
            cout << c << ' ';
        }
        cout.flush();
        return;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int test = 1;
    // cin>>test;
    for(int t = 1; t <= test; t++){
        solve();
    }
}