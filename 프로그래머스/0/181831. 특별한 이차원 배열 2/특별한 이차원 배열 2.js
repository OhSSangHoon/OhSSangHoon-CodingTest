// arr[i][j] === arr[j][i]이고

function solution(arr) {
    
    for(let i = 0; i < arr.length; i++){
        for(let j = 0; j < arr.length; j++){
            // console.log(arr[i][j], arr[j][i])
            if(arr[i][j] != arr[j][i]){
                return 0;
            }
        }
    }
    return 1;
}