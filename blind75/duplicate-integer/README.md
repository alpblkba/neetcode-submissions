## 0217 contains duplicate

pattern: sorting + adjacent comparison

mistake:
I confused vector indexing with vector size access.

fix:
use v[i] for element access and v.size() for container length.

complexity:
time: O(n log n)
space: O(n)
