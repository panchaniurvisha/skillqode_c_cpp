
let x=150
if(x>100)
{
        let x=1;
}

console.log(x)

// let point=[1,3],a=[point,[5,5]],triangle=[...a,[1,8]]
// console.log(triangle)

// let num1=[1,2,3]
// let num2=[4,5,6,...num1,7,8,9]
// console.log(num2)

const obj={
    outer:function(){
        const self1=this
        const inner1=()=>{
            const self2=this
            const inner2=()=>{
                const self3=this
            }
        }
    }
}

console.log(obj)