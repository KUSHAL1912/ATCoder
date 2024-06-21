int main(){
	
	int n,k,i,a;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a);
		if(a%k==0)
		printf("%d ",a/k);
		else
		continue;
	}
}