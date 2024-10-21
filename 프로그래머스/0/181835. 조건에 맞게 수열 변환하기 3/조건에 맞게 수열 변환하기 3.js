function solution(arr, k) {
    
    if(k % 2 === 1)
       return arr.map(num => num * k);
    else
        return arr.map(num => num + k);
}

console.log(solution([1,2,3,100,99,88]), 3)
console.log(solution([1,2,3,100,99,88]), 2)