/*
��Ŀ����

���������ַ��������д����ȷ������һ���ַ������ַ��������к��ܷ�����һ���ַ���������涨��СдΪ��ͬ�ַ����ҿ����ַ����ص�ո�
����һ��string stringA��һ��string stringB���뷵��һ��bool�����������Ƿ��������к����ͬ����֤�����ĳ��ȶ�С�ڵ���5000��
����������
"This is nowcoder","is This nowcoder"
���أ�true
"Here you are","Are you here"
���أ�false
*/

class Same {
public:
	bool checkSam(string stringA, string stringB) {
		// write code here
		map<char, int> str_a;
		map<char, int> str_b;
		int i;
		for (i = 0; i < stringA.size(); i++)
		{
			str_a[stringA[i]]++;
		}
		for (i = 0; i < stringB.size(); i++)
		{
			str_b[stringA[i]]++;
		}
		map<char, int>::iterator it1 = str_a.begin();
		map<char, int>::iterator it2 = str_b.begin();
		for (; it1 != str_a.end(), it2 != str_b.end(); it1++, it2++)
		{
			if (it1->second != it2->second)
				return false;
		}
		return true;
	}
};