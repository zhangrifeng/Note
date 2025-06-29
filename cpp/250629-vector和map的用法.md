# 1、vector
### 定义和初始化
```
#include <vector>
using namespace std;
vector<int> v1; // 空vector
vector<int> v2(5,10); //包含5个值为10的元素
vector<int> v3 = {1,2,3,4} // 列表初始化
```

### 插入元素
```
v1.push_back(100)
```

### 访问元素
```
int x = v1[0]
int y = v1.at(0)
```

### 遍历
```
for(int i = 0; i < v3.size(); ++i){
    cout << v3[i] << " ";
}

for(int val : v3){
    cout << val << " ";
}
```

### 删除元素
```
v3.pop_back(); // 删除最后一个元素
v3.erase(v3.begin() + 1); //删除第二个元素
v3.clear(); //清空vector
```

### 其他操作
```
int sz = v3.size();
bool empty = v3.empty();
```


# 2、map
### 定义和插入
```
#include <map>
map<string, int> m;
m["apple"] = 3;
m["banana"] = 5;
```
### 访问元素
```
cout << m["apple"]; //输出3
```

### 遍历map(自动按key升序)
```
for(auto &pair : m){
    cout << pair.first << "=>" << pair.second <<endl;
}
```

### 查找与删除
```
if(m.find("banana") != m.end){
    cout << "有香蕉" << endl;
}

m.erase("apple"); // 删除key为apple的元素
```

### std::unordered_map用法（无序哈希映射，效率更高）
```
#include <unordered_map>

unordered_map<string, int> um;

um["a"] = 10;
um["b"] = 20;

for(auto &p : um){
    cout << p.first << ":" << p.second << endl;
}
```
