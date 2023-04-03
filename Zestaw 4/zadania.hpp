
// szablon ogolny
template <typename T>
struct sum_traits;


// specjalizacje
template <>
struct sum_traits<char> {
    typedef int sum_type;
    static sum_type zero() {
        return 0;
    }
};

template <>
struct sum_traits<int> {
    typedef int sum_type;
    static sum_type zero() {
        return 0;
    }
};

template <>
struct sum_traits<float> {
    typedef double sum_type;
    static sum_type zero() {
        return 0.0;
    }
};

template <>
struct sum_traits<double> {
    typedef double sum_type;
    static sum_type zero() {
        return 0.0;
    }
};


// zadanie 1, 2
template<typename T>
typename sum_traits<T>::sum_type sum(T *beg,T *end) {
    typedef typename sum_traits<T>::sum_type sum_type;
    sum_type total = sum_traits<T>::zero();
    while(beg != end ) {
        total += *beg;
        beg++;
    }

    return total;
}

// zadanie 3
template<typename Traits, typename T>
typename Traits::sum_type sum(T *beg,T *end) {
    typedef typename Traits::sum_type sum_type;
    sum_type total = Traits::zero();
    while(beg != end ) {
        total += *beg;
        beg++;
    }

    return total;
}

struct sum_char {
    typedef char sum_type;
    static sum_type zero() {
        return '\0';
    }
};
