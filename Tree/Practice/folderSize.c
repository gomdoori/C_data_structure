#include <stdlib.h>
#include "folderSize.h"

// size�� ��Ʈ ����� ������ �ʵ�� �Ͽ� ���ʰ� ������ ���� Ʈ���� �����ϴ� ����
treeNode* makeRootNode(int size, treeNode* leftNode, treeNode* rightNode) {
	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
	root->size = size;
	root->left = leftNode;
	root->right = rightNode;
	return root;
}

// �� ���� ũ�⸦ ����ϱ� ���� ���� ��ȸ ����
int postorder_FolderSize(treeNode* root) {
	



}