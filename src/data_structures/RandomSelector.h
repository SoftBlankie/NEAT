#include <vector>
#include <stdlib.h>

template <typename T>
class RandomSelector {
    public:
        void add(T element, double score);
        T random();

    private:
        std::vector<T> objects;
        std::vector<double> scores;
};

template <typename T>
void RandomSelector::add(T element, double score) {
    objects.push_back(element);
    scores.push_back(score);
    total_score += score;
}

template <typename T>
T RandomSelector::random() {
    // The probability of an object being chosen is higher if the score is higher
    
    double v = rand() % total_score;

    double c = 0;
    for (int i = 0; i < objects.size(); ++i) {
        c += scores[i];
        if (c > v) return objects[i];
    }
    return NULL;
}

template <typename T>
void RandomSelector::reset() {
    objects.clear();
    scores.clear();
    total_score = 0;
}
