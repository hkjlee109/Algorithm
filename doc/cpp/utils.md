
### next, prev
```cpp
  list<int> l { 3, 1, 4 };

  auto it = l.begin();
  it = next(it, 2);
  it = prev(it, 1);

  cout << *it << endl; /* 1 */
```

### copy_if, distance
```cpp
  int array[] = {10,20,30,40,50,60,70};
  vector<int> foo (7);
  vector<int> bar (foo.size());

  copy ( array, array + 7, foo.begin() );
  auto it = copy_if(foo.begin(), foo.end(), bar.begin(), [](int i){
    return !(i<0);
  });

  bar.resize(std::distance(bar.begin(),it));
```
