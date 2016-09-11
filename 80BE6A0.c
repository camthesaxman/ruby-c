int sub_80BE6A0()
{
  int v0; // r4@1
  unsigned __int8 v1; // r0@1
  char v2; // r1@1
  _BYTE *v3; // r0@1
  unsigned __int8 v4; // r0@1
  int v5; // r0@1
  unsigned __int8 v6; // r0@1
  int v8; // [sp+10h] [bp-4h]@0

  v0 = 36 * byte_3005D38 + 33717868;
  *(_BYTE *)v0 = 3;
  *(_BYTE *)(v0 + 1) = 1;
  v1 = sub_810F87C(1);
  v2 = *(_BYTE *)(v0 + 4) & 0xF0 | ((unsigned int)GetMonData((int)&dword_3004360[25 * v1], 32, 0) >> 4) & 0xF;
  *(_BYTE *)(v0 + 4) = v2;
  *(_BYTE *)(v0 + 4) = v2 & 0xF | 16 * v202E8D2;
  v3 = StringCopy((_BYTE *)(v0 + 5), (_BYTE *)0x2024EA4);
  v4 = sub_810F87C(v3);
  v5 = GetMonData((int)&dword_3004360[25 * v4], 2, v0 + 16);
  v6 = sub_810F87C(v5);
  *(_WORD *)(v0 + 2) = GetMonData((int)&dword_3004360[25 * v6], 11, 0);
  sub_80BE160(v0);
  *(_BYTE *)(v0 + 13) = 2;
  *(_BYTE *)(v0 + 14) = sub_80BDEAC(v0 + 16);
  SkipExtCtrlCodes((_BYTE *)(v0 + 16));
  return v8;
}
