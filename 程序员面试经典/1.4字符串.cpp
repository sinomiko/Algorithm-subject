/*
��Ŀ����
���дһ�����������ַ����еĿո�ȫ���滻Ϊ��%20�����ٶ����ַ������㹻�Ŀռ����������ַ�������֪���ַ�������ʵ����(С�ڵ���1000)��ͬʱ��֤�ַ����ɴ�Сд��Ӣ����ĸ��ɡ�
����һ��string iniString Ϊԭʼ�Ĵ����Լ����ĳ��� int len, �����滻���string��

sample:
"Mr John Smith��,13
���أ�"Mr%20John%20Smith"
��Hello  World��, 12
���أ���Hello % 20 % 20World��*/
class Replacement {
public:
	string replaceSpace(string iniString, int length) {
		// write code here
		string str = "%20";
		string result;
		for (int i = 0; i < length; i++)
		{
			if (iniString[i] != ' ')
				result += iniString[i];
			else
				result += str;
		}
		return result;
	}
};