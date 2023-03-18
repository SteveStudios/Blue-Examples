#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <any>
#include <string>
#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>

namespace ArrayTools
{
    class DynamicType
    {
    public:
        std::any varToCast;
        std::vector<DynamicType> vect = {};

        DynamicType(std::any castedVar, std::vector<DynamicType> initlist = {})
        {
            varToCast = castedVar;
            vect = initlist;
        }

        auto operator==(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) == std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) == std::any_cast<double>((std::any)val));
            }
            if (varToCast.type() == typeid(const char *) && ((std::any)val).type() == typeid(const char *))
            {

                return (std::any_cast<const char *>(varToCast) == std::any_cast<const char *>((std::any)val));
            }
            if (varToCast.type() == typeid(char *) && ((std::any)val).type() == typeid(char *))
            {

                return (std::any_cast<char *>(varToCast) == std::any_cast<char *>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) == std::any_cast<bool>((std::any)val));
            }
        }
        auto operator!=(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) != std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) != std::any_cast<double>((std::any)val));
            }
            if (varToCast.type() == typeid(const char *) && ((std::any)val).type() == typeid(const char *))
            {

                return (std::any_cast<const char *>(varToCast) != std::any_cast<const char *>((std::any)val));
            }
            if (varToCast.type() == typeid(char *) && ((std::any)val).type() == typeid(char *))
            {

                return (std::any_cast<char *>(varToCast) != std::any_cast<char *>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) != std::any_cast<bool>((std::any)val));
            }
        }
        auto operator+(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) + std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) + std::any_cast<double>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) + std::any_cast<bool>((std::any)val));
            }
        }
        auto operator-(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) - std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) - std::any_cast<double>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) - std::any_cast<bool>((std::any)val));
            }
        }
        auto operator*(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) * std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) * std::any_cast<double>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) * std::any_cast<bool>((std::any)val));
            }
        }
        auto operator/(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) / std::any_cast<int>((std::any)val));
            }
            if (varToCast.type() == typeid(double) && ((std::any)val).type() == typeid(double))
            {

                return (std::any_cast<double>(varToCast) / std::any_cast<double>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) / std::any_cast<bool>((std::any)val));
            }
        }
        auto operator%(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) % std::any_cast<int>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) % std::any_cast<bool>((std::any)val));
            }
        }
        auto operator^(auto val) const
        {
            if (varToCast.type() == typeid(int) && ((std::any)val).type() == typeid(int))
            {

                return (std::any_cast<int>(varToCast) ^ std::any_cast<int>((std::any)val));
            }
            if ((varToCast.type() == typeid(bool) && ((std::any)val).type() == typeid(bool)))
            {

                return (std::any_cast<bool>(varToCast) ^ std::any_cast<bool>((std::any)val));
            }
        }
        auto operator[](int val)
        {
            if (varToCast.type() == typeid(std::nullptr_t))
                return vect[val];
        }
    };

    template <typename... T>
    auto nestedVec(T &&...args)
    {
        std::vector<DynamicType> vec;
        ([&]
         { vec.push_back(DynamicType((std::any)args)); }(),
         ...);
        return vec;
    }

    auto pop(auto array)
    {
        array.pop_back();
        return array;
    }

    auto shift(auto array)
    {
        array.pop_front();
        return array;
    }

    auto addElement(auto array, auto element)
    {
        array.push_back(DynamicType((std::any)element));
        return array;
    }

    auto arraySize(auto array)
    {
        return (int)array.size() + 1;
    }
}