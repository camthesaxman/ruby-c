int __fastcall sub_807E6F0(int a1, signed __int16 a2)
{
  int v2; // r7@1
  int v3; // r0@1
  int v4; // r8@1
  signed int v5; // r4@1
  int v6; // r6@1
  unsigned int v7; // r4@1
  int i; // r6@1
  int j; // r4@4
  signed __int16 v10; // r0@6
  int v12; // [sp+14h] [bp-4h]@0

  v2 = a1;
  v3 = 2 * v202FEC4;
  v4 = gUnknown_0839AAC4[v3];
  v5 = gUnknown_0839AAC4[v3 + 1] + v4;
  v6 = (unsigned __int16)a2 / v5 & 0xFFFF;
  v7 = (unsigned __int16)a2 % v5 & 0xFFFF;
  for ( i = (v6 - 1) & 0xFFFF; i != 0xFFFF; i = (i - 1) & 0xFFFF )
    sub_807E4EC(v2);
  if ( v7 >= v4 )
  {
    *(_WORD *)(v2 + 46) = v7 - v4;
    *(_BYTE *)(v2 + 62) |= 4u;
    v10 = 1;
  }
  else
  {
    for ( j = (v7 - 1) & 0xFFFF; j != 0xFFFF; j = (j - 1) & 0xFFFF )
      sub_807E5C0(v2);
    v10 = 0;
  }
  *(_WORD *)(v2 + 58) = v10;
  return v12;
}
