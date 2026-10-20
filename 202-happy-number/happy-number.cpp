class Solution {
public:
    bool isHappy(int n) {
        vector<int> v;

        while (true) {
            long long int sum = finddigits(n);

            if (sum == 1)
                return true;

            if (find(v.begin(), v.end(), sum) != v.end())
                return false;

            v.push_back(sum);
            n = sum;
        }
    }

    long long int finddigits(int n) {
        int lastdigit;
        vector<int> v;

        while (n > 0) {
            lastdigit = n % 10;
            v.push_back(lastdigit);
            n = n / 10;
        }

        long long int sum = 0;

        for (auto &value : v) {
            sum = sum + (value * value);
        }

        return sum;
    }
};