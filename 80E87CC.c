int __fastcall sub_80E87CC(unsigned __int8 a1)
{
  int v1; // r4@1
  char v2; // r3@1
  int v4; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 0;
  if ( !a1 )
    v2 = 1;
  *(_BYTE *)(v20010A8 + 62) = *(_BYTE *)(v20010A8 + 62) & 0xFB | 4 * v2;
  sub_80E87A4(a1);
  if ( v1 )
    v20011B9 = 1;
  return v4;
}
