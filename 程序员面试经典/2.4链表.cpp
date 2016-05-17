/*
��Ŀ����

��д���룬�Ը���ֵxΪ��׼������ָ�������֣�����С��x�Ľ�����ڴ��ڻ����x�Ľ��֮ǰ
����һ�������ͷָ�� ListNode* pHead���뷵���������к�������ͷָ�롣ע�⣺�ָ��Ժ󱣳�ԭ��������˳�򲻱䡣
*/

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
class Partition {
public:
	ListNode* partition(ListNode* pHead, int x) {
		// write code here
		ListNode *lessNode = new ListNode(0);
		ListNode *lessHead = lessNode;
		ListNode *biggerNode = new ListNode(0);
		ListNode *biggerHead = biggerNode;
		while (pHead != NULL) {
			if (pHead->val >= x) {
				biggerNode->next = pHead;
				biggerNode = pHead;
			}
			else {
				lessNode->next = pHead;
				lessNode = pHead;
			}
			pHead = pHead->next;
		}

		biggerNode->next = NULL;
		lessNode->next = biggerHead->next;

		return lessHead->next;
	}
};