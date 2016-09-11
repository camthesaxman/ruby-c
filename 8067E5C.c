int __fastcall sB3_get_coin_amount(int a1)
{
  unsigned __int16 v1; // r0@1
  _WORD *v2; // r4@1

  v1 = script_read_halfword(a1);
  v2 = (_WORD *)GetVarPointer(v1);
  *v2 = GetCoins();
  return 0;
}
