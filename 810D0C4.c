int __fastcall sub_810D0C4(unsigned __int8 a1)
{
  int *v1; // r3@1
  unsigned int v2; // r1@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 6);
  if ( v2 > 0xF )
  {
    v4000052 = 4112;
    v4000050 = 15937;
    *v1 = (int)sub_810D128;
  }
  else
  {
    *((_WORD *)v1 + 6) = v2 + 2;
    LoadPalette((int)&gUnknown_083F808C + 2 * (15 - v2), 224, 2 * (v2 + 1) & 0xFFFF);
  }
  return v4;
}
