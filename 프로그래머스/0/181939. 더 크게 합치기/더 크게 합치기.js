function solution(a, b) {
    
    let atob = String(a) + String(b);
    let btoa = String(b) + String(a);
    
    
    
    return atob > btoa ? Number(atob) : Number(btoa);
}