class Solution {
    solve(num) {
        let myint = `${num}`
        for (var i = 0; i < myint.toString().length/2; i++){
            if(myint.toString()[i] != myint.toString()[myint.toString().length-i-1]){
                return false
            }
        }
        return true
    }
}
// https://binarysearch.com/problems/Palindromic-Integer
// Made by me @godsavemenow and @brenolucks