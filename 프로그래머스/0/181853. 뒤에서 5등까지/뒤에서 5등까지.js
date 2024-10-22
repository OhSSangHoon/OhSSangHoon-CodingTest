function solution(num_list) {
    let temp;
    
    for(let i = 0; i < num_list.length; i++){
        for(let j = 0; j < num_list.length; j++){
            if(num_list[i] < num_list[j]){
                temp = num_list[i];
                num_list[i] = num_list[j];
                num_list[j] = temp;
            }
        }
    }
    
    return num_list.splice(0, 5);
}