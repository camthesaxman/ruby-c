int __fastcall sub_80A425C(unsigned __int8 a1, int a2, unsigned __int8 a3)
{
  int v3; // r4@1

  v3 = a2;
  if ( LOWORD(dword_3004B20[10 * a1 + 7]) - (unsigned __int8)byte_3005D10[4 * v2038559 + 1] - 1 == a3 )
  {
    *(_BYTE *)a2 = -4;
    *(_BYTE *)(a2 + 1) = 1;
    *(_BYTE *)(a2 + 2) = 2;
    v3 = a2 + 3;
  }
  return v3;
}
