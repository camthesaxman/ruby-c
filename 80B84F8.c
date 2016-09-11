int ContestEffect_27()
{
  int v0; // r8@1
  signed int v1; // r6@1
  signed int v2; // r5@1
  int v4; // [sp+14h] [bp-4h]@0

  v0 = 0;
  v1 = 0;
  v2 = 33657453;
  do
  {
    if ( *(_BYTE *)(v20192E1 + 0x20192D0) > (unsigned int)*(_BYTE *)(v1 + 33657552)
      && (signed int)*(_BYTE *)v2 > 0
      && sub_80B90C0((unsigned __int8)v1) << 24 )
    {
      *(_BYTE *)v2 = 0;
      *(_BYTE *)(v2 + 3) = *(_BYTE *)(v2 + 3) & 0xCF | 0x20;
      sub_80B13EC(v1, 13);
      v0 = (v0 + 1) & 0xFF;
    }
    v2 += 28;
    ++v1;
  }
  while ( v1 <= 3 );
  sub_80B13EC(v20192E1, 12);
  if ( !v0 )
    sub_80B1404(v20192E1, 57);
  return v4;
}
