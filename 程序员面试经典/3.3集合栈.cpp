/*
��Ŀ����

��ʵ��һ�����ݽṹSetOfStacks���ɶ��ջ��ɣ�����ÿ��ջ�Ĵ�СΪsize����ǰһ��ջ����ʱ���½�һ��ջ�������ݽṹӦ֧������ͨջ��ͬ��push��pop������
����һ����������int[][2] ope(C++Ϊvector<vector<int>>)��ÿ�������ĵ�һ��������������ͣ���Ϊ1����Ϊpush��������һ����ΪӦpush�����֣���Ϊ2����Ϊpop��������һ���������塣�뷵��һ��int[][](C++Ϊvector<vector<int>>)��Ϊ������в������SetOfStacks��˳��ӦΪ���µ��ϣ�Ĭ�ϳ�ʼ��SetOfStacksΪ�ա���֤���ݺϷ���
*/
class SetOfStacks {
public:
	vector<vector<int> > setOfStacks(vector<vector<int> > ope, int size) {
		// write code here
		vector<vector<int> > sint;
		vector<int> temp;
		for (int i = 0; i < ope.size(); i++)
		{
			if (ope[i][0] == 1)//push
			{
				if (temp.size() < size)
					temp.push_back(ope[i][1]);
				else
				{
					sint.push_back(temp);
					while (temp.size())
						temp.pop_back();
					temp.push_back(ope[i][1]);
				}
			}
			else//pop
			{
				if (temp.size())
				  temp.pop_back();
				else if (!sint.empty())
				{
					temp = sint[sint.size()-1];
					sint.pop_back();
		         
					temp.pop_back();
				}
			}
		}
		if (temp.size())
			sint.push_back(temp);
		return sint;
	}
};