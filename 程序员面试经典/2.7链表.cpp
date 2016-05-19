/*
��Ŀ����

���дһ����������������Ƿ�Ϊ���ġ�
����һ������ListNode* pHead���뷵��һ��bool�����������Ƿ�Ϊ���ġ�
����������
{1,2,3,2,1}
���أ�true
{1,2,3,2,3}
���أ�false
*/

struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) : val(x), next(NULL) {}
};
class Palindrome {
public:
	bool isPalindrome(ListNode* pHead) {
		// write code here
		ListNode*q=pHead;
		stack<int> sint;
		while (q)
		{
			sint.push(q->val);
			q = q->next;
		}
		q = pHead;
		int temp;
		while (q)
		{
			temp = sint.top();
			if (q->val!=temp)
			{
				return false;
			}
			sint.pop();
			q = q->next;
		}
		return true;
	}
};