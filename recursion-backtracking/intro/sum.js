const sum= (n)=>{
    if(n===1){
        return 1;
    }
    else if(n===0){
        return 0;
    }
    return n + sum(n-1)
}
console.log(sum(4))