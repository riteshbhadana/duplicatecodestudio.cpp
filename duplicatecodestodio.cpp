{
int ans =0;
for(int i=0; i<arr.size();i++){
ans=ans^ans[i];
}
fotr(int i=1;i<arr.size();i++){
ans = ans^i;
}
return ans;
}
