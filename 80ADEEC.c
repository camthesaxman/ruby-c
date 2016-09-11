int __fastcall sub_80ADEEC(unsigned __int8 a1)
{
  int *v1; // r4@1
  __int16 v2; // r0@1
  int (*v3)(); // r0@3
  int v5; // [sp+8h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  v2 = *((_WORD *)v1 + 4);
  *((_WORD *)v1 + 4) = v2 + 1;
  if ( v2 > 49 )
  {
    *((_WORD *)v1 + 4) = 0;
    if ( v203869A & 1 )
    {
      v3 = sub_80ADF4C;
    }
    else
    {
      BeginNormalPaletteFade(-1, 0, 0, 0x10u, 0);
      v3 = sub_80ADFD8;
    }
    *v1 = (int)v3;
  }
  return v5;
}
