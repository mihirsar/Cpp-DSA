#include<bits/stdc++.h>
using namespace std;

/* PS1- Fountains are installed at every position along a one-dimensional garden of length n. Array locations[] represents the coverage limit of these fountains. The ith fountain (where 1sisn) has a coverage limit of locations[i] that can range from the position max((i – locations[i]), 1) to min((i + locations[i]), n ). In other words, the h fountains do not reach outside the boundaries of the garden. In the beginning,all the fountains are switched off. Determine the minimum number of fountains that need to be activated to cover the n length garden by water.*/

int fountainactivation(vector<int> &fountains, int n) {
    vector<int> range(n, 0); // Initialize a vector to store the maximum range each fountain can cover

    // Calculate the maximum range each position can cover
    for (int i = 0; i < n; ++i) {
        int left = max(0, i - fountains[i]); // Calculate the leftmost position that can be covered by the fountain at position i
        int right = min(n - 1, i + fountains[i]); // Calculate the rightmost position that can be covered by the fountain at position i
        range[left] = max(range[left], right); // Update the range array to store the farthest right position each left position can cover
    }

    // Initialize variables for the greedy approach
    int cnt = 0; // Count of fountains activated
    int farthest = 0; // The farthest point we can cover so far
    int currentEnd = 0; // The end of the current segment we are covering

    // Traverse the garden to find the minimum number of activated fountains
    for (int i = 0; i < n; ++i) {
        if (i > farthest) {
            // If we are at a point beyond the farthest we can cover, it means the garden cannot be fully covered
            return -1; // Return -1 to indicate it's not possible to cover the garden
        }
        if (i > currentEnd) {
            // If we reach the end of the current segment, we need to activate another fountain
            cnt++; // Increment the count of fountains activated
            currentEnd = farthest; // Move the current end to the farthest point we can cover so far
        }
        farthest = max(farthest, range[i]); // Update the farthest point we can cover
    }

    // For the last segment
    if (currentEnd < n - 1) {
        cnt++; // If the last segment is not covered, activate one more fountain
    }

    return cnt; // Return the total count of fountains activated
}

int main(){
    int n=3;
    vector<int> locs = {0, 2, 13};
    int ans = fountainactivation(locs, n);
    cout<<"Ans : "<<ans<<endl;
    return 0;
}