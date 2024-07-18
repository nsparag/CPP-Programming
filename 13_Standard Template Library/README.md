# STL stands for Standard Template Library

* It is a collection of C++ template classes and functions that provide essential data structures and algorithms to perform common tasks efficiently.

Components:
1. **Containers** - These are data structures that store objects of a specific type in a sequential manner.
    * **Sequence Containers** - elements are kept in ordinal sequence, stored in consecutive memory
        * `vector` - a sequence of contiguous elements; alternative to array
        * `deque` - allows insertion
        * `list` - generalizes the linked list structure
    * **Associative Structure** - elements are stored in sorted order; the positions of the elements are determined by their values
        * `set` - represents mathematical sets using union and intersection operations
        * `multiset` - similar to `set` but it accepts multiple copies of elements
        * `map` - generalizes lookup table structure
        * `multimap` - similar to `map` but it accepts multiple copies of elements
    * **Special Containers**
        * `basic_string` - generalizes the notion of character string allowing string of any type (char, wchar_t)
        * `valarray` - mathematical array of values, provides a convenient and efficient way to perform mathematical operations on arrays of numeric data
        * `bitset` - represents a fixed-size sequence of bits, providing efficient bitwise operations
2. **Algorithms**
3. **Iterators**
4. **Function Objects**
