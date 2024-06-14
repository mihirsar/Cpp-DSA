#include <bits/stdc++.h>
#include <algorithm>

std::vector<int> sortedArray(std::vector<int> a, std::vector<int> b) {
    std::map<int, int> mpp;
    std::vector<int> ans;

    for (auto i : a)
        mpp[i]++;
    for (auto i : b)
        mpp[i]++;

    for (auto i : mpp) {
        if (i.second == 2)
            ans.push_back(i.first);
    }

    std::sort(ans.begin(), ans.end()); // Corrected sorting

    return ans;
}

