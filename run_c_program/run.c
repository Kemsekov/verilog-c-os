int main() {
    int a = 5;
    int b = 10;
    int flag = a<10;
    int c = a;
    if(flag){
        c+=b;
    }
    else{
        c += b/a;
    }
    return c;
}