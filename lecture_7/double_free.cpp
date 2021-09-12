int main() {
  int *m = new int(5);
  delete m;
  delete m;
}

// Почему при -O3 поведение программы другое?