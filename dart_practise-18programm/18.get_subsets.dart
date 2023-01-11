void main(){
    function getAllSubsets(array) {
    const subsets = [[]];
    
    for (const el of array) {
        const last = subsets.length-1;
        for (let i = 0; i <= last; i++) {
            subsets.push( [...subsets[i], el] );
        }
    }
    
    return subsets;
}
}