int sub_80BE5FC()
{
  int v0; // r4@1
  _BYTE *v1; // r0@1
  unsigned __int8 v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v0 = 36 * byte_3005D38 + 33717868;
  *(_BYTE *)v0 = 1;
  *(_BYTE *)(v0 + 1) = 1;
  v1 = StringCopy((_BYTE *)(v0 + 16), (_BYTE *)0x2024EA4);
  v2 = sub_810F87C(v1);
  *(_WORD *)(v0 + 2) = GetMonData((int)&dword_3004360[25 * v2], 11, 0);
  sub_80BE160(v0);
  *(_BYTE *)(v0 + 24) = 2;
  return v4;
}
