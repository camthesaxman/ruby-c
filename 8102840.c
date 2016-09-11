int sub_8102840()
{
  int v0; // r5@1
  int v1; // r4@1
  unsigned __int8 v2; // r0@1
  signed int v3; // r1@1
  int v4; // r1@4
  int v5; // r5@5
  int v6; // r4@5
  unsigned __int8 v7; // r0@5
  signed int v8; // r1@5
  int v9; // r1@8
  int v11; // [sp+8h] [bp-4h]@0

  v0 = (unsigned __int8)sub_8102BA4(0, 1);
  v1 = (unsigned __int8)sub_8102BA4(1, 1);
  v2 = sub_8102BA4(2, 1);
  v3 = (unsigned __int8)sub_81029D4(v0, v1, v2);
  if ( v3 != 9 )
  {
    if ( !v3 )
      v3 = 1;
    v4 = 2 * v3;
    v200000E += *(_WORD *)((char *)&gUnknown_083ECE6C + v4);
    v2000008 |= *(_WORD *)((char *)&gUnknown_083ECE5A + v4);
    sub_8103E04(1);
  }
  v5 = (unsigned __int8)sub_8102BA4(0, 3);
  v6 = (unsigned __int8)sub_8102BA4(1, 3);
  v7 = sub_8102BA4(2, 3);
  v8 = (unsigned __int8)sub_81029D4(v5, v6, v7);
  if ( v8 != 9 )
  {
    if ( !v8 )
      v8 = 1;
    v9 = 2 * v8;
    v200000E += *(_WORD *)((char *)&gUnknown_083ECE6C + v9);
    v2000008 |= *(_WORD *)((char *)&gUnknown_083ECE5A + v9);
    sub_8103E04(2);
  }
  return v11;
}
