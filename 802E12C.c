int __fastcall sub_802E12C(signed int a1, _BYTE *a2)
{
  signed int v2; // r6@1
  int v3; // r4@1
  char v4; // r3@1
  __int16 v5; // r0@4
  int v7; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = (v2024A60 << 9) + 33700452;
  StringCopy((_BYTE *)0x20238CC, a2);
  StringAppend((_BYTE *)0x20238CC, &gMoveNames[13 * *(_WORD *)(v3 + 2 * v2)]);
  v4 = 1;
  if ( v2 & 1 )
    v4 = 11;
  if ( v2 > 1 )
    v5 = 57;
  else
    v5 = 55;
  InitWindow((int)&unk_3004210, 33700044, (unsigned int)(1310720 * v2 + 50331648) >> 16, v4, v5);
  sub_8002F44((int)&unk_3004210);
  return v7;
}
