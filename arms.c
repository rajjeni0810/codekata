int main() {
   int arms = 153; 
   int check, rem, sum = 0;

   check = arms;

   while(check != 0) {
      rem = check % 10;
      sum = sum + (rem * rem * rem);
      check = check / 10;
   }

   if(sum == arms) 
      printf("no", arms);
   else 
      printf("yes", arms);
      
   return 0;
}
