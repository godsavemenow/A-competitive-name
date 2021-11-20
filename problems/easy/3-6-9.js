class Solution {
    solve(n) {
        let array = []
        for (var i = 1; i <= n; i++){
            if(i%3 == 0 || 
            i.toString().includes(3) || 
            i.toString().includes(6)||
            i.toString().includes(9)){
                array.push("clap")
            }else{
                array.push(i.toString())
            }
        }
        return array
    }
} 
// https://binarysearch.com/problems/3-6-9