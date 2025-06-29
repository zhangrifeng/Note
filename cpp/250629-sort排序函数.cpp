#include <iostream>
#include <vector>
#include <algorithm>

using namespace std:

int main(){
    // 1、vector 排序
    vector<int> vec = {5, 2, 9, 1, 5, 6};
    sort(vec.begin(), vec.end());

    // 2、vector 自定义升序、降序排序
    sort(vec.begin(), vec.end(), [](int a, int b){
        return a < b;

    });

    // 3、排序普通数组
    int arr[] = {3, 1, 4, 1, 5, 9};
    sort(arr, arr + 6); // 6 是元素个数

    // 4、排序自定义结构体
    struct Person{
        string name;
        int age;
    };
    vector<Person> people = {{"Tom", 25}, {"Jerry", 22}, {"Bob", 30}};
    sort(people.begin(), people.end(), [](const Person &a, const Person &b){
        return a.age < b.age; // 按年龄升序排序
    });



    return 0;
}