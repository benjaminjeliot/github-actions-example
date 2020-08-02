// Copyright 2020 Jim Eliot

#ifndef SRC_EXAMPLE_H_
#define SRC_EXAMPLE_H_

class Example {
 public:
  void SetValue(int value);
  int GetValue();
 private:
  int value_{0};
};

#endif  // SRC_EXAMPLE_H_
