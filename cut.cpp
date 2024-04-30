#include <iostream>
#include <vector>
#include <set>

using namespace std;

int minInvitations(vector<int>& p) {
    int n = p.size();
    vector<int> invitations(n, 0); // 0: not invited, 1: invited

    int invited_count = 0;
    for (int i = 0; i < n; ++i) {
        if (invitations[i] == 0 && invitations[p[i] - 1] == 0) { // If neither friend nor best friend is invited
            invitations[i] = 1;
            invitations[p[i] - 1] = 1;
            invited_count += 2;
        }
    }

    int additional_invitations = 0;
    while (invited_count < 2) {
        additional_invitations++;
        for (int i = 0; i < n; ++i) {
            if (invitations[i] == 0 && invitations[p[i] - 1] == 1) {
                invitations[i] = 1;
                invited_count++;
            }
        }
    }

    return additional_invitations;
}

int main() {
    // Example usage
    int t;
    cin>>t;
    while(t--)
    {
    vector<int> p;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push_back(x);
    }

    cout << minInvitations(p) << endl; // Output: 1
    return 0;
}