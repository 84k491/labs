#include "list.h"

void CustomLinkedList::push_back(const std::string & value)
{
    m_deque.push_back(value);
}

void CustomLinkedList::push_front(const std::string & value)
{
    m_deque.push_front(value);
}

std::optional<std::string> CustomLinkedList::pop_back()
{
    if (size() == 0) {
        return {};
    }
    auto value = m_deque.back();
    m_deque.pop_back();
    return value;
}

std::optional<std::string> CustomLinkedList::pop_front()
{
    if (size() == 0) {
        return {};
    }
    auto value = m_deque.front();
    m_deque.pop_front();
    return value;
}

size_t CustomLinkedList::size() const
{
    return m_deque.size();
}
