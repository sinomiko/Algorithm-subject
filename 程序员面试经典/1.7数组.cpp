/*
��Ŀ����

���дһ���㷨����MxN������ĳ��Ԫ��Ϊ0���������ڵ����������㡣
����һ��MxN��int[][]����(C++��Ϊvector>)mat�;���Ľ���n���뷵����ɲ������int[][]����(C++��Ϊvector>)����֤nС�ڵ���300�������е�Ԫ��Ϊint��Χ�ڡ�
����������
[[1,2,3],[0,1,2],[0,0,1]]
���أ�[[0,0,3],[0,0,0],[0,0,0]]
*/
class Clearer {
public:
	vector<vector<int> > clearZero(vector<vector<int> > mat, int n) {
		// write code here
		if (mat.empty())
			return vector<vector<int> >();
		int len1 = mat.size();
		int len2 = mat[0].size();
		bool *sign1 = new bool[len1]();
		bool *sign2 = new bool[len2]();
		for (int i = 0; i<len1; i++)
		for (int j = 0; j<len2; j++)
		if (mat[i][j] == 0)
		{
			sign1[i] = true;
			sign2[j] = true;
		}
		for (int i = 0; i<len1; i++)
		for (int j = 0; j<len2; j++)
		if (sign1[i] || sign2[j])
			mat[i][j] = 0;
		return mat;
	}
};