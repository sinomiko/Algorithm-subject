/*
��Ŀ����

��һ����NxN�����ʾ��ͼ������ÿ��������һ��int��ʾ�����дһ���㷨���ڲ�ռ�ö����ڴ�ռ�������(����ʹ�û������)����ͼ��˳ʱ����ת90�ȡ�
����һ��NxN�ľ��󣬺;���Ľ���N,�뷵����ת���NxN����,��֤NС�ڵ���500��ͼ��Ԫ��С�ڵ���256��
����������
[[1,2,3],[4,5,6],[7,8,9]],3
���أ�[[7,4,1],[8,5,2],[9,6,3]]
*/
class Transform {
public:
	vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
		// write code here
		int i,j,temp;
		int temp = 0;
		for (int j = 0; j<n - 1; j++){
			for (int i = 0; i<n - j - 1; i++){
				temp = mat[j][i];
				mat[j][i] = mat[n - i - 1][n - j - 1];
				mat[n - i - 1][n -j - 1] = temp;
			}
		}

		for (int j = 0; j<(n / 2); ++j){
			for (int i = 0; i<n; ++i){
				temp = mat[j][i];
				mat[j][i] = mat[n - j - 1][i];
				mat[n - j - 1][i] = temp;
			}

		}
		return mat;
	}