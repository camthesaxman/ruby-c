int __fastcall sC3_unknown(int a1)
{
  unsigned __int8 *v1; // r1@1
  unsigned __int8 v2; // r2@1

  v1 = *(unsigned __int8 **)(a1 + 8);
  v2 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  sav12_xor_increment(v2);
  return 0;
}
