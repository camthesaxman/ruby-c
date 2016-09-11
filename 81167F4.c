int __fastcall sub_81167F4(unsigned __int8 a1)
{
  int v1; // r5@1
  int *v2; // r3@1
  char *v3; // r0@1
  int v5; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  sub_8124D3C(33657016, 0xFFFF);
  v2019170 &= 0x7Fu;
  v2019164 &= 0x7Fu;
  v2019158 &= 0x7Fu;
  v2 = &dword_3004B20[10 * v1];
  v3 = &gSprites[68 * *(_BYTE *)(*((_BYTE *)&gUnknown_083F8C00 + 20 * *((_WORD *)v2 + 16)) + 0x2019043) + 62];
  *v3 |= 4u;
  *v2 = (int)sub_8116880;
  return v5;
}
