
/*�滻�ո�
	��ʵ��һ����������һ���ַ����еĿո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
	˼·���������ո������Ȼ�����µ��ַ������и���
	(Ҫ����ԭ�ȵ��ַ����ϲ��������ұ�֤ԭ�ַ������㹻���Ŀռ�������滻����ַ�������ô���Ǿ͵����뷽����)
*/
void replaceSpace(char *str, int length) {
	int blanknumber = 0;
	int i;
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] == ' ') {
			blanknumber++;
		}
	}
	int k = i + 2 * blanknumber;
	if (k > length)
		return;
	str[k] = '\0';//���бز�����
	int point1 = i - 1, point2 = k - 1;
	for (; point1 >= 0 && point2 > point1; point1--) {
		if (str[point1] == ' ') {
			str[point2--] = '0';
			str[point2--] = '2';
			str[point2--] = '%';
		}
		else
			str[point2--] = str[point1];
	}

}