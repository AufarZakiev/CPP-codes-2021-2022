
int fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

constexpr int static_fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return static_fib(n - 1) + static_fib(n - 2);
}
