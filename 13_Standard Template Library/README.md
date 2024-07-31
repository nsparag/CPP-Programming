# STL: Standard Template Library

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
2. **Algorithms** - set of algorithms that work with various containers
   * `sort` - sorting algorithm
   * `binary_search` - search if an element exists in a sorted range
   * `find` - Searches for the first occurrence of a value
   * `stack` - stack data structure
   * `queue` - queue data structure
   * and there are many algorithms
3. **Iterator** - allows to traverse and access the elements of a container, such as a vector, list, or array, in a sequential manner
   * Categories
      * Input iterator - used to read the values from the container
      * Output iterator - used to assign the values
      * Forward iterator - combination of input and output operators
      * Bidirectional iterator - similar to forward iterator, but can move in both the directions
      * Random access iterator - bidirectional iterators with random access
   * Operations
      * `begin()` - returns the beginning position of the container
      * `ens()` - returns the after position of the end position in the container
      * `advance()` - increment the iterator position
      * `next()` - returns the new iterator that the iterator would point after advancing the positions
      * `prev()` - returns the new iterator that the iterator would point after decrementing the positions
      * `inserter()` - insert the elements at any position
