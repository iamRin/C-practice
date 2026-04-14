#include <stdio.h>
#include <math.h>

int main(){
    int target = 1;
    int sum = 0;
    int nums[] = {-1, 2, 1, -2};
    int min = abs(nums[0] - target);

    for(int i = 0; i <= 3; i++){
        for (int j = 1; nums[j] < 4; j++){
            if(abs(nums[j] - 1) < min){
                min = nums[j];
                sum += min;
            } else {
                continue;
            }
        }
    }
}