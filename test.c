
int main(){
int m = 9;
int n = 6;
int result;

if (m >= n) {
    result = m - n;
} else if (m < n) {
    result = n % m;
} else {
    result = m * n;
}

   return 0;
}