#include <ctime>
#include <cstdlib>

int getRandomNum() {
    srand(time(NULL));
    int num = rand() % (MAX - Min + 1);
    return num;
}