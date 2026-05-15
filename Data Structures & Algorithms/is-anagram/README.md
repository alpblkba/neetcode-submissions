## 0242 valid anagram

pattern: sorting + equality comparison

mistake:
I expected std::sort and std::transform to return a new container, like python-style functions.

fix:
std::sort mutates the container in-place and returns void. for this problem, sort both strings directly and compare them.

complexity:
time: O(n log n)
space: O(1)
