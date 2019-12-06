//Range Sum Query
const ll N_ = (1 << 18);
ll seg[2*N_-1];
void add(ll k, ll x){
  k += N_-1;
  seg[k] += x;
  while(k > 0){
    k = (k-1)/2;
    seg[k] = seg[2*k+1] + seg[2*k+2];
  }
}

ll get_sum(ll x, ll y, ll k = 0, ll left = 0, ll right = N_){
  if(right <= x || y <= left) return 0;
  if(x <= left && right <= y) return seg[k];
  ll mid = (left + right) / 2;
  ll l = get_sum(x, y, 2*k+1, left, mid);
  ll r = get_sum(x, y, 2*k+2, mid, right);
  return l + r;
}
