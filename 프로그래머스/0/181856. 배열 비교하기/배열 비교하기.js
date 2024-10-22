function solution(arr1, arr2) {
    var answer = 0;
    
    let a = 0;
    let b = 0;
    
    if(arr1.length < arr2.length){
        return answer = -1;
    }else if(arr1.length > arr2.length){
            return answer = 1;
    }else if(arr1.length === arr2.length){
        for(let i = 0; i < arr1.length; i++){
            a = a + arr1[i];
            b = b + arr2[i];
        }
        
        if(a > b)
            return 1;
        else if(a < b){
            return -1;
        }else{
            return 0;
        }
    }
}