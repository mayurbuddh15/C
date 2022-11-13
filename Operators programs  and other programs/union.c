
void main(){
int pos;
union u1 u;
u.f=23.5;
for(pos=31;pos>=0;pos--)
printf("%d",u.i>>pos&1);

}
