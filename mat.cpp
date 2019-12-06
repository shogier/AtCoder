typedef vector<ll> vec;
typedef vector<vec> mat;

mat mul_mat(mat A, mat B){
  mat res(A.size(), vec(B[0].size(), 0));
  rep(i, A.size())rep(k, B.size())rep(j, B[0].size()){
    res[i][j] = (res[i][j] + A[i][k] * B[k][j]) % MOD;
  }
  return res;
}

mat pow_mat(mat A, ll n){
  mat res(A.size(), vec(A.size(), 0));
  rep(i, A.size()) res[i][i] = 1;
  while(n > 0){
    if(n&1) res = mul_mat(res, A);
    A = mul_mat(A, A);
    n >>= 1;
  }
  return res;
}
