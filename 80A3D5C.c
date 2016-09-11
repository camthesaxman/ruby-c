int __fastcall sub_80A3D5C(unsigned __int8 a1)
{
  int v1; // r6@1
  _WORD *v2; // r3@1
  __int16 v3; // r0@1
  char *v4; // r2@4
  int v5; // r1@4
  int v7; // [sp+18h] [bp-4h]@0

  v1 = 4 * ((unsigned __int8)byte_3005D10[4 * v2038559 + 1] + (unsigned __int8)byte_3005D10[4 * v2038559]);
  v2 = (_WORD *)(v1 + dword_3005D24);
  v3 = *(_WORD *)(v1 + dword_3005D24 + 2) - HIWORD(dword_3004B20[10 * a1 + 2]);
  *(_WORD *)(v1 + dword_3005D24 + 2) = v3;
  if ( !v3 )
  {
    if ( v2025BCA == *v2 )
    {
      sub_80A40D0();
      v2025BCA = 0;
    }
    *(_WORD *)(v1 + dword_3005D24) = 0;
    v4 = &byte_3005D10[4 * v2038559];
    v5 = (unsigned __int8)v4[1];
    if ( v5 + 7 == (unsigned __int8)v4[2] && v4[1] )
      v4[1] = v5 - 1;
    sub_80A3CA8(v2038559);
  }
  sub_80A3D24(v2038559);
  return v7;
}
