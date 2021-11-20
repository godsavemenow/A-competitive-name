class Solution {
    solve(nums) {
        let bigf = 0
        let bigs = 0
        for (var i = 0; i < nums.length; i++){
            if (nums[i] > bigf){
                bigs = bigf
                bigf = nums[i]
            } else if (nums[i] > bigs) {
                bigs = nums[i]
            }
        }
        return (bigs*2 < bigf) 
    }
}
// https://binarysearch.com/problems/Largest-Number-By-Two-Times/submissions