let ran = 0;
let time = prompt("How many times should I flip the coin");
let head = 0;
let tail = 0;
let dif = 0;
//flipping coin
for(let i = 0; i < time; i++){
    ran = Math.round(Math.random()); // random num (0 or 1)
    if( ran == 1){
    head ++;
    }
    else{
        tail ++;
    }
}
console.log("Number fo heads: " + head);
console.log("Number of tails: " + tail);
if(head > tail){
    console.log("head wins");
    dif = head - tail;
}
else if(tail > head){
    console.log("tail wins")
    dif = tail - head;
}
else{
    console.log("draw");
}
console.log("The difference is: " + dif)