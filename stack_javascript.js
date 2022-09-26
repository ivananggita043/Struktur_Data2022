// Program Stack Dalam Javascript
class Stack {
    constructor() {
        this.items = [];
    }
    
    // add element to the stack
    add(element) {
        return this.items.push(element);
    }
    
    // remove element from the stack
    remove() {
        if(this.items.length > 0) {
            return this.items.pop();
        }
    }
    
    // view the last element
    peek() {
        return this.items[this.items.length - 1];
    }
    
    // check if the stack is empty
    isEmpty(){
       return this.items.length == 0;
    }
   
    // the size of the stack
    size(){
        return this.items.length;
    }
 
    // empty the stack
    clear(){
        this.items = [];
    }
}

console.log("Program Stack Javascript");
console.log("=========================")

let stack = new Stack(); //TAMBAH DATA
stack.add(1);
stack.add(2);
stack.add(4);
stack.add(8);
stack.add(16);
console.log(stack.items); //PRINT DATA

stack.remove(); //MENGHAPUS DATA TERAKHIR
console.log(stack.items);

console.log(stack.peek()); //MELIHAT DATA TERAKHIR

console.log(stack.isEmpty()); //MENGECEK JIKA DATA KOSONG

console.log(stack.size()); //MENGECEK JUMLAH DATA

stack.clear(); //MENGHAPUS SELURUH DATA
console.log(stack.items);
console.log("=========================")