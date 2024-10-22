function solution(myString, pat) {
    var answer = 0;
    
    myString = myString.replaceAll("A", "X").replaceAll("B", "A").replaceAll("X", "B");
    
    for(let i = 0; i < myString.length; i++){
        if(myString.includes(pat))
            return 1;
    }

    return 0;
}