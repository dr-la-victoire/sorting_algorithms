0x1B. C - Sorting algorithms & Big O

This project is to teach us about sorting algorithms and the time complexity of an algorithm, otherwise called Big O notation.


In computer science, a sorting algorithm is a method or a set of steps used to arrange a collection of elements or data items into a specific order. The order can be ascending or descending, based on certain criteria such as numerical values, alphabetical order, or any other defined key. Sorting algorithms play a crucial role in various applications and are fundamental to many computer science problems.

Sorting algorithms are designed to efficiently organize data in a way that makes it easier to search, retrieve, or perform other operations on the data. They are used in a wide range of applications, including databases, operating systems, data analysis, and more. There are numerous sorting algorithms, each with its own characteristics, advantages, and disadvantages.

Let's explore some common sorting algorithms:

Bubble Sort: This simple algorithm repeatedly compares adjacent elements and swaps them if they are in the wrong order, gradually moving larger elements toward the end of the list and smaller elements toward the beginning.

Selection Sort: This algorithm divides the input into two parts: the sorted portion and the unsorted portion. It repeatedly selects the smallest (or largest) element from the unsorted portion and places it in its correct position in the sorted portion.

Insertion Sort: This algorithm builds the final sorted array one item at a time. It considers each element in the input and inserts it into its correct position within the sorted portion of the array.

Merge Sort: This algorithm follows the divide-and-conquer approach. It divides the input into smaller subproblems, sorts them independently, and then merges the sorted subproblems to obtain the final sorted result.

Quick Sort: Similar to merge sort, quick sort also uses the divide-and-conquer technique. It selects a "pivot" element and partitions the other elements into two sub-arrays, according to whether they are less than or greater than the pivot. The sub-arrays are then recursively sorted.

Heap Sort: This algorithm uses a binary heap data structure to sort elements. It builds a max-heap (or min-heap) from the input array and repeatedly extracts the maximum (or minimum) element, placing it in the sorted portion of the array.

Radix Sort: Unlike the previous algorithms, radix sort is a non-comparative sorting algorithm. It sorts elements based on their individual digits or bits, from the least significant position to the most significant.

These are just a few examples of sorting algorithms, and there are many others with different characteristics and complexities. The choice of algorithm depends on factors such as the size of the data, the distribution of elements, memory constraints, and the desired time complexity for the sorting operation.

Efficiency is a key consideration when selecting a sorting algorithm. The efficiency of an algorithm is often measured by its time complexity, which quantifies the amount of time required for the algorithm to run as a function of the input size. Sorting algorithms can have different time complexities, ranging from O(n^2) for simple algorithms like bubble sort to more efficient ones like merge sort and quick sort, which have an average time complexity of O(n log n).


Big O notation is a mathematical notation used in computer science to describe the asymptotic behavior or growth rate of an algorithm's time complexity. It provides a way to analyze how the runtime of an algorithm increases as the input size grows.

In Big O notation, the complexity of an algorithm is expressed as a function of the input size (often denoted as "n") and represents the upper bound of the algorithm's time complexity. It characterizes the worst-case scenario, indicating how the runtime scales when the input becomes extremely large.

Here are some common Big O notations used to describe time complexity:

O(1) - Constant Time Complexity:
An algorithm with constant time complexity takes the same amount of time regardless of the input size. It executes a fixed number of operations, irrespective of the input. For example, accessing an element in an array by its index or performing a basic arithmetic operation.

O(log n) - Logarithmic Time Complexity:
An algorithm with logarithmic time complexity reduces the problem size by a constant factor in each step. Commonly seen in algorithms like binary search or certain divide-and-conquer algorithms. As the input size grows, the number of operations required increases, but at a slower rate compared to linear time complexity.

O(n) - Linear Time Complexity:
An algorithm with linear time complexity has a runtime that grows linearly with the input size. It executes a number of operations proportional to the input size. For example, iterating through each element in an array or performing a simple linear search.

O(n log n) - Linearithmic Time Complexity:
An algorithm with linearithmic time complexity exhibits a growth rate between linear and quadratic time complexities. Commonly seen in efficient sorting algorithms like merge sort and quicksort.

O(n^2) - Quadratic Time Complexity:
An algorithm with quadratic time complexity has a runtime that grows quadratically with the input size. It typically involves nested loops, causing the number of operations to increase exponentially as the input grows. Examples include bubble sort and selection sort.

O(2^n) - Exponential Time Complexity:
An algorithm with exponential time complexity has a runtime that grows exponentially with the input size. It often arises in recursive algorithms with overlapping subproblems. As the input increases even slightly, the runtime quickly becomes infeasible for large inputs.

When evaluating the time complexity of an algorithm, consider the dominant term or terms that have the most significant impact on the overall growth rate. Ignore constant factors and lower-order terms since the focus is on how the algorithm scales with large inputs.

To evaluate the time complexity of an algorithm, you can analyze the number of operations performed as a function of the input size. Look for loops, recursive calls, and other repetitive operations to determine how they contribute to the overall complexity.

Additionally, consider the best-case, worst-case, and average-case scenarios when analyzing time complexity. The Big O notation generally represents the worst-case scenario, providing an upper bound on the algorithm's runtime.

By understanding the time complexity of an algorithm, you can make informed decisions about selecting the most efficient algorithm for a given problem and estimate the runtime behavior for large input sizes.


Calculating the Big O notation for a specific algorithm involves analyzing the number of operations performed in relation to the input size. Here's a step-by-step process to help you calculate the Big O notation:

Identify the Dominant Operations: Identify the parts of the algorithm that contribute the most to the overall runtime. Look for loops, recursive calls, or any repetitive operations that scale with the input size.

Express the Number of Operations: Determine the number of times the dominant operations are executed as a function of the input size (usually denoted as "n"). This step requires careful analysis of the algorithm's logic and structure.

Simplify the Expression: Simplify the expression obtained in the previous step by removing constant factors, lower-order terms, and any non-dominant operations. Focus on the highest-order term since it provides the most significant impact on the growth rate.

Determine the Big O Notation: Finally, express the simplified expression using Big O notation by retaining only the most significant term. Remove any coefficients or lower-order terms, and choose the appropriate Big O notation based on the growth rate. For example, if the expression simplifies to "3n^2 + 2n + 5," the Big O notation would be O(n^2) since the quadratic term dominates.

When selecting the best sorting algorithm for a specific scenario, several factors come into play. Consider the following guidelines to help you make an informed decision:

Input Size: Consider the size of the input you need to sort. Some algorithms perform well for small inputs, while others are more efficient for larger datasets. For small inputs, simple algorithms like Bubble Sort or Insertion Sort might suffice, whereas for larger inputs, more efficient algorithms like Merge Sort or Quick Sort are generally preferable.

Input Characteristics: Take into account the characteristics of the input data. Is it already partially sorted, nearly sorted, or completely unsorted? Some algorithms, such as Insertion Sort or Adaptive Merge Sort, perform well with partially sorted or nearly sorted inputs, while others, like Quick Sort, may experience performance issues in such cases.

Stability: Stability refers to the preservation of the relative order of equal elements during sorting. If maintaining the order of elements with the same value is important, choose a stable sorting algorithm. Merge Sort and Insertion Sort are stable, while algorithms like Quick Sort and Heap Sort are not inherently stable.

Memory Constraints: Consider the memory resources available. Some algorithms require additional memory for their operations, while others can sort in-place, meaning they don't require much additional memory beyond the input array. If memory is limited, algorithms like Quick Sort and Heap Sort, which sort in-place, may be preferable.

Worst-case and Average-case Time Complexity: Evaluate the worst-case and average-case time complexities of the sorting algorithms. If the worst-case scenario is a concern, algorithms like Merge Sort and Heap Sort with a worst-case time complexity of O(n log n) are better options compared to algorithms like Bubble Sort with a worst-case time complexity of O(n^2).

Programming Language and Available Libraries: Consider the programming language you're using and the availability of sorting libraries or built-in functions. Most programming languages provide efficient built-in sorting functions that are optimized for general use cases. These built-in functions often implement well-performing algorithms like Merge Sort or Quick Sort.

Benchmarking and Profiling: If possible, perform benchmarking or profiling tests on the sorting algorithms you're considering. Measure their performance on sample inputs that represent your specific use case. This empirical evaluation can provide insights into the actual runtime behavior of the algorithms in your specific context.

By considering these factors, you can select a sorting algorithm that balances efficiency, stability, memory usage, and other requirements specific to your situation. It's worth noting that there is no "one-size-fits-all" sorting algorithm, as the best choice depends on the unique characteristics and constraints of the problem at hand.


A stable sorting algorithm is one that maintains the relative order of elements with equal values during the sorting process. In other words, if two elements have the same value in the input array, a stable sorting algorithm ensures that their relative order is preserved in the sorted output.

The stability of a sorting algorithm is important in certain scenarios where the original order of equal elements holds significance. For example, when sorting a list of students based on their names and then their grades, a stable sorting algorithm would ensure that students with the same grade are sorted in the same order as they appeared in the input.

Stability allows for predictable and consistent behavior, especially when sorting complex data structures or performing multi-level sorting where multiple keys are involved. It ensures that the sorting operation does not introduce any unexpected changes to the order of elements with equal values.

Some examples of stable sorting algorithms include:

Merge Sort: Merge Sort is a stable sorting algorithm that follows the divide-and-conquer approach. It repeatedly divides the input into smaller subproblems, sorts them independently, and then merges the sorted subproblems while preserving the relative order.

Insertion Sort: Insertion Sort is another stable algorithm that builds the sorted output one element at a time. It iterates through the input array, compares each element with the already sorted portion, and inserts it in the correct position, maintaining the relative order.

Bubble Sort: Although Bubble Sort is not known for its efficiency, it is a simple and stable sorting algorithm. It repeatedly compares adjacent elements and swaps them if they are in the wrong order, gradually moving larger elements toward the end of the list while preserving the order of equal elements.

It's worth noting that stability is not a consideration for all applications. In scenarios where the original order of equal elements is not important, stability may not be a crucial factor, and non-stable sorting algorithms like Quick Sort or Heap Sort may be preferred due to their efficiency or in-place sorting capabilities.

When selecting a sorting algorithm, consider the stability requirement of your specific use case and choose an algorithm accordingly.
