/*
��Ŀ����

���дһ�����򣬰������ջ�������򣨼����Ԫ��λ��ջ������Ҫ�����ֻ��ʹ��һ�������ջ�����ʱ���ݣ������ý�Ԫ�ظ��Ƶ�������ݽṹ�С�
����һ��int[] numbers(C++��Ϊvector&ltint>)�����е�һ��Ԫ��Ϊջ�����뷵��������ջ����ע������һ��ջ����ζ�������������ֻ�ܷ��ʵ���һ��Ԫ�ء�
����������
[1,2,3,4,5]
���أ�[5,4,3,2,1]
*/
class TwoStacks {
public:
	vector<int> twoStacksSort(vector<int> numbers) {
		// write code here
		vector<int> sint;
		int i = 0, len = numbers.size(),temp;
		while (numbers.size())
		{
			if (sint.empty())
			{
				temp = numbers.back();
				sint.push_back(temp);
				numbers.pop_back();
			}
			else
			{
				temp = numbers.back();
				numbers.pop_back();
				while (!sint.empty() && temp <= sint.back())
				{
					numbers.push_back(sint.back());
					sint.pop_back();
				}
				sint.push_back(temp);
			}
		}
		reverse(sint.begin(), sint.end());
		return sint;
	}
};