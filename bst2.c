#include <stdio.h>
#include <stdlib.h>
#include "bst2.h"
// 이진 탐색 트리에서 키값이 x인 노드의 위치를 탐색하는 연산
// [예제 7-5] 실행을 위해 "탐색성공, count" 출력 추가
treeNode* searchBST(treeNode* root, element x) {
  treeNode* p;
  int count = 0;
  p = root
