consteval int surely_static_fib(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return surely_static_fib(n - 1) + surely_static_fib(n - 2);
}

constinit auto size = surely_static_fib(5);

int main() { static_assert(size == 13) }
