# range-Sum
Sum of i * countDigits(i)^2 for all i in range [L, R]


Given a range [L, R], the task is to find the sum i * countDigits(i)2 for all i ∈ [L, R] where countDigits(i) is the count of digits in i.

That is, find:


L * countDigits(L)^2 + (L + 1) * countDigits(L + 1^)2 + ….. + R * countDigits(R)^2.


Input: L = 8, R = 11
Output: 101
8 * 12 + 9 * 12 + 10 * 22 + 11 * 22 = 8 + 9 + 40 + 44 = 101

Input: L = 98, R = 102
Output: 2
98 * 22 + 99 * 22 + 100 * 32 + 101 * 32 + 102 * 32 = 3515

We break the segment [L, R] into several segments of the numbers with the same number of digits.
[1 – 9], [10 – 99], [100 – 999], [1000 – 9999], [10000 – 99999], [100000 – 999999], [10000000 – 99999999] and so on.
When L and R are of the same length then the required sum will be countDigits(L)2 * (L + R) * (R – L + 1) / 2
