function solution(strArr) {
    
    for(let i = 0; i < strArr.length; i++){
        if(i % 2 === 0){
            for(let j = 0; j < strArr.length; j += 2){
                strArr[j] = strArr[j].toLowerCase();
            }
        }else{
            for(let j = 1; j < strArr.length; j += 2){
                strArr[j] = strArr[j].toUpperCase();
            }
        }
    }
    
    return strArr;
    
}