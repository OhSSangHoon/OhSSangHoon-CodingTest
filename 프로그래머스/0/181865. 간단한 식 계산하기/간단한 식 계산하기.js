function solution(binomial) {
    var answer = 0;
    
    //binomial을 split(' ')으로 나눠 각각 a, op, b에 저장한다.
    const [a, op, b] = binomial.split(' ');
    
    switch(op){
        case'+':
            return parseInt(a) + parseInt(b);
        case'-':
            return parseInt(a) - parseInt(b);
        case'*':
            return parseInt(a) * parseInt(b);
        default:
            return 0;
    }
    
}