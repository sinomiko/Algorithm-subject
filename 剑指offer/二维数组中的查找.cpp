/*��ά�����еĲ���
	��һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������ÿһ�ж�����
	���ϵ��µ�����˳�����������һ������������������һ����ά�����һ
	���������ж��������Ƿ��и�������
˼·�����°��մ�С����
*/
bool Find(vector<vector<int> > array, int target) {
	int height = array.size();
	int i = height - 1, j = 0;
	while (i >= 0 && j < array[i].size())
	{
		if (target == array[i][j])
			return true;
		if (target > array[i][j])
			j++;
		else 
			i--;
	}
	return false;
}