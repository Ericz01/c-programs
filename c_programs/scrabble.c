#include "cs50.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int compute_score(string word);
int main(void)
{

	//get input words from both players
	string word1 = get_string("Player 1: ");
	string word2 = get_string("Player 2: ");

	
	//score both words
	int score1 = compute_score(word1);
	int score2 = compute_score(word2);
	//print the winner
	printf("Player1: %d\n", score1);
	printf("player2: %d\n", score2);
	if (score1 > score2)
	{
		printf("Player 1 wins!\n");
	}
	else if (score2 > score1)
	{
		printf("Player 2 wins!\n");
	}
	else
	{
		printf("Tie!\n");
	}
	
}
int compute_score(string word)
{
	//keep track of score
	int score = 0;
	// compute score for each character
	for (int i = 0, length = strlen(word); i < length; i++)
	{
		if (isupper(word[i]))
		{
			score += POINTS[word[i] - 65];
		}
		else if (islower(word[i]))
		{
			score += POINTS[word[i] - 97];
		}
	}
	return score;

}
