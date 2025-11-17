#include <stdio.h>
#include <stdlib.h>
int main() {
int a[4] = {0,0,1,1};
int b[4] = {0,1,0,1};
int i, ans;
for(i = 0; i < 4; i++) {
ans = !(a[i] || b[i]); // NOR
printf("%d NOR %d = %d\n", a[i], b[i], ans);
}
return 0;
}