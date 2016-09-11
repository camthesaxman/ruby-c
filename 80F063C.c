int __fastcall sub_80F063C(int a1)
{
  signed int v1; // r0@1
  unsigned int v2; // r5@1
  signed __int16 v3; // r1@3
  int v4; // r6@6
  int v5; // r2@6
  int v6; // r0@6
  int v8; // [sp+10h] [bp-4h]@0

  v1 = a1 << 16;
  v2 = (unsigned int)v1 >> 16;
  v200877C = 16 * HIWORD(v1);
  if ( v1 >> 16 != 1 && v1 >> 16 != -1 )
    v3 = 8;
  else
    v3 = 4;
  v200877A = v3;
  if ( SHIWORD(v1) >= 0 )
  {
    v4 = (v2008778 + 16) & 0xFFFF;
    v5 = (v2008772 + 1) & 0xFFFF;
  }
  else
  {
    v200877A = -v200877A;
    v4 = (2 * SHIWORD(v1) + v2008778) & 0xFFFF;
    v5 = (SHIWORD(v1) + v2008770) & 0xFFFF;
    v6 = (signed __int16)(HIWORD(v1) + v2008770);
    if ( v6 < 0 )
      v5 = (v6 + 1 + v2008774) & 0xFFFF;
    v2 = 0xFFFF * (signed __int16)v2 & 0xFFFF;
  }
  if ( (signed __int16)v5 > v2008774 )
    v5 = 0;
  sub_80F0954(v5, v4 & 0x1F, v2);
  return v8;
}
