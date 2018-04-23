/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

/* EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
*/

TEST(TicTacToeBoardTest, goodPlacement) {
	TicTacToeBoard testB;
	ASSERT_FALSE(testB.placePiece(1, 1) != '?');
}

TEST(TicTacToeBoardTest, badPlacement) {
	TicTacToeBoard testB;
	ASSERT_TRUE(testB.placePiece(5, 5) == '?');
}

TEST(TicTacToeBoardTest, toggleTurn) {
	TicTacToeBoard testB;
	ASSERT_TRUE(testB.toggleTurn());
}

TEST(TicTacToeBoardTest, getWinner) {
	TicTacToeBoard testB;
	ASSERT_TRUE(testB.getWinner());
}

TEST(TicTacToeBoardTest, validGetPiece) {
	TicTacToeBoard testB;
	ASSERT_FALSE(testB.getPiece(1, 1) != '?');
}

TEST(TicTacToeBoardTest, invalidGetPiece) {
	TicTacToeBoard testB;
	ASSERT_TRUE(testB.getPiece(5, 5) == '?');
}