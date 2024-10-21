function solution(a, b) {
    var answer;
    
    if((a % 2 === 1) && (b % 2 === 1))
        return answer = (a * a) + (b * b);
    else if((a % 2 === 0 && b % 2 === 1) || (a % 2 === 1 && b % 2 === 0))
        return answer = 2 * (a + b);
    else
        return answer = Math.abs(a - b);
}

