#include <vector>
#include <unordered_set>
#include <stdlib.h>

template <typename T>
class RandomHashSet<T> {
    public:
        std::unordered_set<T> set;
        std::vector<T> data;

        RandomHashSet();
        bool contains(T object);
        T random_element();
        void add(T object);
        void clear();
        
        T get(int index);
        void remove(int index);
        void remove(T object);
        vector<T> getData();

    private:
        int size();
};

template <typename T>
RandomHashSet::RandomHashSet() {}

template <typename T>
bool RandomHashSet::contains(T object) {
    return set.find(object) != set.end() ? true : false;
}

template <typename T>
T RandomHashSet::random_element() {
    if (set.size() > 0) return data[rand() % size()];
    return NULL;
}

template <typename T>
int RandomHashSet::size() {
    return data.size();
}

template <typename T>
void RandomHashSet::add(T object) {
    if (set.find(object) == set.end()) {
        set.insert(object);
        data.push_back(object);
    }
}

template <typename T>
void RandomHashSet::clear() {
    set.clear();
    data.clear();
}

template <typename T>
T RandomHashSet::get(int index) {
    if (index < 0 || index >= size()) return NULL;
    return data[index];
}

template <typename T>
T RandomHashSet::get(T object) {
    return data[std::find(data.begin(), data.end(), object)]
}

template <typename T>
void RandomHashSet::remove(int index) {
    if (index < 0 || index >= size()) return;
    set.erase(data[index]);
    data.erase(index);
}

template <typename T>
void RandomHashSet::remove(T object) {
    set.erase(object);
    data.erase(object)
}

std::vector<T> getData() {
    return data;
}
