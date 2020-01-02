#pragma once

template<typename T>
class Plane_base {
public:
    Plane_base() = default;
    Plane_base(std::size_t m, std::size_t n);

    ~Plane_base() { delete[] elem_; }

    std::size_t m() const { return m_; }
    std::size_t n() const { return n_; }

private:
    std::size_t m_ = 0;
    std::size_t n_ = 0;
    T* elem_ = nullptr;
};

template<typename T>
Plane_base<T>::Plane_base(std::size_t m, std::size_t n)
    : m_{m}, n_{n}, elem_{new T[m_*n_]}
{
}
