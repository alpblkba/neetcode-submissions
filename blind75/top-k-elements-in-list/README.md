# top k elements in list

solution for neetcode / blind 75 **top k frequent elements**.

## idea

count how many times each number appears, then use a max heap to always take the number with the highest frequency.

## approach

1. use `unordered_map<int, int>` to store frequencies.
2. push `{count, num}` pairs into a `priority_queue`.
3. pop from the heap `k` times.
4. return the extracted numbers.

## complexity

- time: `O(n log n)`
- space: `O(n)`

## key pattern

```
unordered_map<int, int> freq;

for (int n : nums) {
    freq[n]++;
}
```
then:

```
priority_queue<pair<int, int>> pq;

for (const auto& [num, count] : freq) {
    pq.push({count, num});
}
```

