#Big O Notation

*Big O notation* uses a function to describe how the algorithm’s worst-case performance relates to the problem size as the size grows very large.



There are five basic rules for calculating an algorithm’s Big O notation:

1. If an algorithm performs a certain sequence of steps f(N) times for a mathematical function f, it takes O(f(N)) steps.

2. If an algorithm performs an operation that takes O(f(N)) steps and then performs a second operation that takes O(g(N)) steps for functions f and g, the algorithm’s total performance is O(f(N) + g(N)).

3. If an algorithm takes O(f(N) + g(N)) and the function f(N) is greater than g(N) for large N, the algorithm’s performance can be simplified to O(f(N)).

4. If an algorithm performs an operation that takes O(f(N)) steps, and for every step in that operation it performs another O(g(N)) steps, the algorithm’s total performance is O(f(N) × g(N)).

5. Ignore constant multiples. If C is a constant, O(C × f(N)) is the same as O(f(N)), and O(f(C × N)) is the same as O(f(N)).



O(f(N)) = f(N)

O(f(N) + g(N)) = f(N) + g(N)

O(f(N) + g(M)) => f(N)>g(N) ? f(N) : g(N)

O(f(N) x g(N)) = f(N) x g(N)

O(C + f(N)) = f(N)