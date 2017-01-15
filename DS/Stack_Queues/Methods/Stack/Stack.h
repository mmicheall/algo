#include <LinkedList.h>


template<typename T>
class Stack {
 public:
  Stack(){}

  void push(const T&& value) {
    container_.push_back(std::move(value));
  }

  auto pop() {
    auto value(std::move(container_.back())); // auto -> implicitly RValue
    container_.pop_back();
    return value; // RVO still applies to reduce two moves to one
  }

  bool empty() const { return container_.empty(); }
  std::size_t size() const { return container_.size(); }

 private:
  DS::LinkedList<T>  container_;
};
