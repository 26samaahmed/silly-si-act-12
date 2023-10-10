#include <vector>

template <typename T>
class Queue
{
public:
    Queue() : container_({}), size_(0) {}

    // ⭐TODO: Using a container_, make the following functions O(1) time efficiency
    // 💡REMEMBER: you are using a vector, check out std::vector's functions in cppreference to check their time complexity if you dont remember

    void push(T value)
    {
        if (container_.size() == container_.capacity()) {
            container_.push(value);
        } else {
            auto i = (container_.front() + container_.size_()) % container_.capacity();
            container_[i] = value;
            ++size_;
        }
        
    }

    void pop()
    {
        container_.pop();
    }

    // 💡TIP: in this implementation lets return the value so that we can print it in main.cpp
    T front()
    {
        
    }

    T back()
    {
        return container_.back();
    }

private:
    std::vector<T> container_;
    std::size_t size_;
    std::size_t front_;
};