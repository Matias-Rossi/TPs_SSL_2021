int main() {
    int b = {2, 3, 4};
    int c = sumar(b);
}

int sumar(int a[]) {
    a[1] = a[1] + 1;
    return a[2];
}