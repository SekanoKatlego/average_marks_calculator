#include <iostream>
using namespace std;
int getScore()
{
    int testScoreP;
    cout << "Enter a single test score: ";
    cin >> testScoreP;
    while(testScoreP > 100 || testScoreP <0)
    {
        cout << "Enter a singe test score between 0 and 100: ";
        cin >> testScoreP;
    }
    return testScoreP;
}
int findLowest(int testScore1P, int testScore2P, int testScore3P, int testScore4P, int testScore5P)
{
    int lowest = testScore1P;
    if(testScore2P < lowest)
        lowest = testScore2P;
    if(testScore3P < lowest)
        lowest = testScore3P;
    if(testScore4P < lowest)
        lowest = testScore4P;
    if(testScore5P < lowest)
        lowest = testScore5P;
    return lowest;
}

float calcAverage(int testScore1P, int testScore2P, int testScore3P, int testScore4P, int testScore5P)
{
    float dropScore = findLowest(testScore1P, testScore2P, testScore3P, testScore4P, testScore5P);
    float sumScoresP = testScore1P + testScore2P + testScore3P + testScore4P + testScore5P - dropScore;
    float averageScoresP = sumScoresP / 4;
    return averageScoresP;
}
void displayOutput(float averageScores1)
{
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << endl;
    cout << "After dropping the lowest test score, ";
    cout << " the test average is " << averageScores1;
}
int main()
{
    int testScore1, testScore2, testScore3, testScore4, testScore5;
    testScore1 = getScore();
    testScore2 = getScore();
    testScore3 = getScore();
    testScore4 = getScore();
    testScore5 = getScore();
    float averageScore = calcAverage(testScore1, testScore2, testScore3, testScore4, testScore5);
    displayOutput(averageScore);


    return 0;
}
