function solution(n, control) {
    var answer = 0;
    
    for(let char of control){
        if(char === 'w'){
            n++;
        }else if(char === 's'){
            n--;
        }else if(char === 'd'){
            n += 10;
        }else if(char === 'a'){
            n -= 10;
        }
        
        answer = n;
    }
    
    return answer;
}