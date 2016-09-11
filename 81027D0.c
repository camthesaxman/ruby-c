int sub_81027D0()
{
  int v0; // r5@1
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  int v3; // r1@1
  int v4; // r1@2
  int v6; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)sub_8102BA4(0, 2);
  v1 = (unsigned __int8)sub_8102BA4(1, 2);
  v2 = sub_8102BA4(2, 2);
  v3 = sub_81029D4(v0, v1, v2) & 0xFF;
  if ( v3 != 9 )
  {
    v4 = 2 * v3;
    v200000E += *(_WORD *)((char *)&gUnknown_083ECE6C + v4);
    v2000008 |= *(_WORD *)((char *)&gUnknown_083ECE5A + v4);
    sub_8103E04(0);
  }
  return v6;
}
