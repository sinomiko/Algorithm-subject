/*
��Ŀ����

�ٶ����Ƕ�֪���ǳ���Ч���㷨�����һ�������Ƿ�Ϊ�����ַ������Ӵ����뽫����㷨��д��һ�����������������ַ���s1��s2�����д������s2�Ƿ�Ϊs1��ת���ɣ�Ҫ��ֻ�ܵ���һ�μ���Ӵ��ĺ�����
���������ַ���s1,s2,�뷵��boolֵ����s2�Ƿ���s1��ת���ɡ��ַ������ַ�ΪӢ����ĸ�Ϳո����ִ�Сд���ַ�������С�ڵ���1000��
����������
"Hello world","worldhello "
���أ�false
"waterbottle","erbottlewat"
���أ�true
*/
class ReverseEqual {
public:
	bool checkReverseEqual(string s1, string s2) {
		// write code here
		string temp;
		int i, j, len;
		if (s1.size() != s2.size())
			return false;
		len = s1.size();
		for (i = 0; i < len; i++)
		{
			if (s1[i] == s2[0])
			{
				temp = s1.substr(i, len - i) + s1.substr(0, i);
				if (temp.compare(s2) == 0)//��ȷ���0
					return true;
			}
		}
		return false;
	}
};