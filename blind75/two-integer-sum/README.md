# 0001 two sum

pattern: hash map + complement lookup

mistake:
I used nordered_map without fully separating lookup and insertion.

fix:
Check whether the complement exists with find().
If it exists, read its stored index and return the pair.
if it does not exist, insert the current value with its index.

key insight:
seen[value] = index stores previous numbers so each future number can search for its complement in O(1) average time.

complexity:
time: O(n)
space: O(n)
