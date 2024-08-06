#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int suneet_wins = 0;

        int suneet_cards[2] = {a1, a2};
        int slavic_cards[2] = {b1, b2};

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (i == j) continue;  

                for (int k = 0; k < 2; ++k) {
                    for (int l = 0; l < 2; ++l) {
                        if (k == l) continue;  

                        int suneet_round_wins = 0;
                        int slavic_round_wins = 0;

                        if (suneet_cards[i] > slavic_cards[k]) {
                            ++suneet_round_wins;
                        } else if (suneet_cards[i] < slavic_cards[k]) {
                            ++slavic_round_wins;
                        }

                        if (suneet_cards[j] > slavic_cards[l]) {
                            ++suneet_round_wins;
                        } else if (suneet_cards[j] < slavic_cards[l]) {
                            ++slavic_round_wins;
                        }

                        if (suneet_round_wins > slavic_round_wins) {
                            ++suneet_wins;
                        }
                    }
                }
            }
        }

        cout << suneet_wins << endl;
    }

    return 0;
}
