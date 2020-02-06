#include<bits/stdc++.h>
using namespace std;

bool lazy[1000005];
int seg_tree[1000005]={0};

void build_tree(int seg_tree[], int node, int a, int b)
{
	if(a>b) return ;
	if(a==b) { seg_tree[node]=0; return ;}
	build_tree(seg_tree, 2*node, a, (a+b)/2);
	build_tree(seg_tree, 2*node+1, (a+b)/2 + 1, b);
	seg_tree[node] = seg_tree[2*node] + seg_tree[2*node+1];
	return ;
}

void update_tree(int seg_tree[], int node, int a, int b, int start, int end)
{
	if(a>b) return ;
	if(lazy[node] == 1)
	{
		seg_tree[node] = (b-a+1) - seg_tree[node];
	}
}


int main(){
	int n, q, x, a, b, ans;
	scanf("%d%d",&n,&q);

	build_tree(seg_tree,1,0,n-1);
	memset(lazy, 0, sizeof(lazy));
	while(q--)
	{
		scanf("%d%d%d", &x, &a, &b);
		if(x == 0)
			update_tree(seg_tree,1,0,n-1,a,b);
		else if(x == 1)
		{
			ans = query_tree(seg_tree,1,0,n-1,a,b);
			printf("%d\n", ans);
		}
	}

	return 0;
}