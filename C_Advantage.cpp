#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n;
        std::cin >> n;

        std::vector<int> strengths(n);
        for (int i = 0; i < n; ++i)
        {
            std::cin >> strengths[i];
        }

        // Find the maximum strength.
        int max_strength = *std::max_element(strengths.begin(), strengths.end());

        // Output the differences.
        for (int i = 0; i < n; ++i)
        {
            std::cout << max_strength - strengths[i] << " ";
        }

        std::cout << "\n";
    }

    return 0;
}
