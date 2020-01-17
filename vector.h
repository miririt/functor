
#pragma once

#include<vector>
#include<functional>
#include<iostream>

namespace mrr{
    template<class T>
    class vector : public std::vector<T> {
        public:

        vector() : std::vector<T>() { }
        vector(const vector<T>& src) : std::vector<T>(src) { }
        ~vector() { }

        virtual vector<T> map(std::function<const T(const T&)> map_func) const;
        virtual vector<T> filter(std::function<bool(const T&)> filter_func) const;
        vector<T> reverse() const;
        template<class S>
        S reduce(const S& initial_value, std::function<const S(const S&, const T&)> reduce_func) const;
    };

    template<class T>
    vector<T> vector<T>::map(std::function<const T(const T&)> map_func) const {
        vector<T> ret;

        for(auto it = this->cbegin(); it != this->cend(); it++)
            ret.emplace_back(map_func(*it));

        return ret;
    }

    template<class T>
    vector<T> vector<T>::filter(std::function<bool(const T&)> filter_func) const {
        vector<T> ret;

        for(auto it = this->cbegin(); it != this->cend(); it++) {
            if(filter_func)
                ret.emplace_back(*it);
        }

        return ret;
    }

    template<class T>
    vector<T> vector<T>::reverse() const {
        vector<T> ret;
        for(auto it = this->crbegin(); it != this->crend(); it++)
            ret.emplace_back(*it);
        return ret;
    }

    template<class T>
    template<class S>
    S vector<T>::reduce(const S& initial_value, std::function<const S(const S&, const T&)> reduce_func) const {
        S ret(initial_value);
        
        for(auto it = this->cbegin(); it != this->cend(); it++) 
            ret = reduce_func(ret, *it);

        return ret;
    }
}