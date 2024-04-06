#pragma once

#include <deque>
#include <optional>
#include <string>

class CustomLinkedList
{
public:
    CustomLinkedList() = default;

    void push_back(const std::string & value);
    void push_front(const std::string & value);

    std::optional<std::string> pop_back();
    std::optional<std::string> pop_front();

    size_t size() const;

private:
    std::deque<std::string> m_deque;
};
