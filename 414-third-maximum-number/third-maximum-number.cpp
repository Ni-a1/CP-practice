class Solution {
public:
    int thirdMax(vector<int>& nums) {
     long long first_max =LLONG_MIN;
     long long second_max=LLONG_MIN;
     long long  third_max=LLONG_MIN;
     for(auto &value:nums)
     {if(value>first_max)
     {third_max=second_max;
     second_max=first_max;
     first_max=value;
     }
     else if(value>second_max && value!=first_max)
     {third_max=second_max;
     second_max=value;}
     else if(value>third_max && value!=second_max && value!=first_max)
     {third_max=value;}

     }
     if(third_max==LLONG_MIN)
     return first_max;
     else
     return third_max;
     
     

    }
};