#include "../../catch.hpp"
#include "../BST/BinarySearchTree.h"

TEST_CASE("BST Basic Tests")
{
	BinarySearchTree<int> bst;

	bst.insertNode(3);
	bst.insertNode(1);
	bst.insertNode(6);
	bst.insertNode(5);
	bst.insertNode(4);
	bst.insertNode(8);
	bst.insertNode(7);
	bst.insertNode(9);
	bst.insertNode(11);
	bst.insertNode(10);
	bst.insertNode(12);
	bst.insertNode(13);

	REQUIRE(bst.inorderTraversal() == "1 3 4 5 6 7 8 9 10 11 12 13");


	SECTION("Delete Leaf Node")
	{
		bst.deleteNode(1);
		REQUIRE(bst.inorderTraversal() == "3 4 5 6 7 8 9 10 11 12 13");
	}

	SECTION("Delete Node With Left Child")
	{
		bst.deleteNode(4);
		REQUIRE(bst.inorderTraversal() == "1 3 5 6 7 8 9 10 11 12 13");
	}

	SECTION("Delete Node With Right Child")
	{
		bst.deleteNode(12);
		REQUIRE(bst.inorderTraversal() == "1 3 4 5 6 7 8 9 10 11 13");
	}

	SECTION("Delete Node With Two Children")
	{
		bst.deleteNode(3);
		REQUIRE(bst.inorderTraversal() == "1 4 5 6 7 8 9 10 11 12 13");
	}

}