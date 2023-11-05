class DynamicLibClass
{
public:
    DynamicLibClass(int value);

    int get_value() const;

private:
    int m_value = 0;
};
