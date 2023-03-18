#include<bits/stdc++.h>
using namespace std;
int parent[4];
void makeset(int v){
	parent[v]=v;
}
int find(int i){
	if(parent[i]==i){
		return i;
	}
	return find(parent[i]);
}
void uni(int a,int b){
	int ap=find(a);
	int bp=find(b);
	parent[ap]=bp;
}
void krushkal(vector<vector<int>> mat){
	for(int i=1;i<=4;i++){
		makeset(i);
	}
	sort(mat.begin(),mat.end());
	cout<<"Connections: Cost"<<endl;
	for(auto e:mat){
		int w=e[0];
		int x=e[1];
		int y=e[2];
		int xp=find(x);
		int yp=find(y);
		if(xp!=yp){
			cout<<x<<" - "<<y<<": "<<w<<endl;
			uni(xp,yp);
		}
	}
}
int main(){
	int size;
	cin>>size;
	vector<vector<int>> mat;
	int a,b,weight;
	for(int i=0;i<size;i++){
		cin>>a>>b>>weight;
		mat.push_back({weight,a,b});
	}
	krushkal(mat);
	return 0;
}