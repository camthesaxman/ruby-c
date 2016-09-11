int __fastcall sAB_unknown(int a1)
{
  unsigned __int8 *v1; // r2@1
  unsigned __int8 v2; // r3@1
  unsigned __int8 v3; // r1@1

  v1 = *(unsigned __int8 **)(a1 + 8);
  v2 = *v1++;
  *(_DWORD *)(a1 + 8) = v1;
  v3 = *v1;
  *(_DWORD *)(a1 + 8) = v1 + 1;
  sub_8064990(v2, v3);
  return 0;
}
