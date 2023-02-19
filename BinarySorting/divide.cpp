#include<iostream>
#include<vector>

using namespace std;

// binary search function
int getResult(int dividend, int divisor) {

    // create start and end indexes
    int start = 0;
    int end = dividend;

    // initialize mid
    int mid = 0;

    int ans = 0;

    // while start is less than end
    while(start <= end) {

        mid = start + (end - start) / 2;

        // return when target index is found
        if(mid * divisor == dividend) {
            return mid;
        }

        // if mid element is less than target
        if(mid * divisor > dividend) end = mid - 1;
        
        else {
            ans = mid;
            start = mid + 1;
        }
              
    }

    return ans;
} 

int main()
{


    int dividend = 22;
    int divisor = -7;

    int index = getResult(abs(dividend), abs(divisor));    

    int answer = dividend < 0 && divisor < 0 ? index : dividend < 0 || divisor < 0 ? -index : index;

    cout << "index: " << answer << endl;
    return 0;
}
