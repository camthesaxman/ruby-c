int __fastcall sub_80FE758(int a1)
{
  unsigned int v1; // r0@1
  unsigned int v2; // r4@1
  int *v3; // r5@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1 << 24;
  v2 = v1 >> 24;
  sub_8072DEC(v1);
  MenuZeroFillWindowRect(0, 0, 0xEu, 0x13u);
  v3 = &dword_3004B20[10 * v2];
  if ( *((_WORD *)v3 + 15) == 2 )
  {
    sub_80B3068(v2);
  }
  else
  {
    sub_80FE1DC();
    MenuDisplayMessageBox();
    sub_80FE394();
    *v3 = (int)sub_80FE2EC;
  }
  return v5;
}
