int __fastcall sub_80C7F64(unsigned __int8 a1, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  int v4; // r4@1
  signed int v5; // r0@1

  v2 = a1;
  v3 = a2 & 1;
  v4 = ((unsigned int)(a2 << 24) >> 25) - sub_80C7A08(a1);
  v5 = v4 + 4;
  if ( v4 + 4 < 0 )
    v5 = v4 + 7;
  return *(&Unknown_83D613C[8 * *(_BYTE *)(8 * v2 + v2038800 + 4)] + ((v4 + 4 - 4 * (v5 >> 2)) << 24 >> 23) + v3);
}
