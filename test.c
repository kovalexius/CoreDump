int a (int *p) {
    int y = *p;
    return y;
}
 
int main (void) {
    int *p = 0; /* null pointer */
    return a (p);
}
