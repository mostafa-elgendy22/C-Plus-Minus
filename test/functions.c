print("functions");
a+1;
x(1, 2);
print("x");
int y (){
    print("y");
    return 1;
}
int x(int a, int b) {
    print("add");
    return a + b;
}
a = y();
print("y done");
// you can't define a function inside any scope
exit;