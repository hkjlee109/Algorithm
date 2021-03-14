
### Example
```cpp
  unordered_map<int, bool> m;

  if(m.find(2) != m.end())
    m[2] = true;

  for (auto const &entry : m)
    cout << entry.first << entry.second << endl;
```
