int __fastcall sub_810065C(unsigned __int8 a1)
{
  int v1; // r4@1
  int *v2; // r0@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = a1;
  MenuZeroFillWindowRect(0, 0, 0x1Du, 0x13u);
  *(_WORD *)&gSprites[68 * v20391A8 + 60] = 0;
  v2 = &dword_3004B20[10 * v1];
  *((_WORD *)v2 + 14) = 0;
  *v2 = (int)sub_8100494;
  return v4;
}
