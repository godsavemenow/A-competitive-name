class Solution {
    solve(num) {
        for (var i = 0; i < num.toString().length/2; i++){
            if(num.toString()[i] != num.toString()[num.toString().length-i-1]){
                return false
            }
        }
        return true
    }
}