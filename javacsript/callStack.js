const multiply = (x, y) => x * y;
const square = x => multiply(x, x);
const isRightTriangle = (a, b, c) => (
    square(a) + square(b) === square(c)
)
//isRightTriangle(3,4,5)
//square(3)+square(4)===square(5)
/* here isRightTriangle is waiting for the value of square(a) which is calucalted by calling fucntion maultiply(x,x). So is RightTriangel waits for square and multiply to execute to get value.*/
/* the callstack is created in this way*/