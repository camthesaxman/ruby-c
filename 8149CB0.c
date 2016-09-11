int __fastcall sub_8149CB0(unsigned __int8 a1)
{
  int v1; // r6@1
  int v2; // r5@1
  int *v3; // r1@1
  signed int v4; // r2@1
  unsigned int v5; // r4@6
  int v7; // [sp+10h] [bp-4h]@0

  v1 = a1;
  v2 = 4 * a1;
  v3 = &dword_3004B20[10 * a1];
  v4 = *((_WORD *)v3 + 19);
  if ( v4 > 127 )
  {
    *v3 = (int)sub_8149D3C;
  }
  else
  {
    if ( *((_WORD *)v3 + 19) )
    {
      if ( v4 == 32 )
      {
        BeginNormalPaletteFade(-65508, 16, 0x10u, 0, 0x7FFF);
      }
      else if ( v4 <= 49 )
      {
        Random();
        sub_81498CC();
      }
    }
    else
    {
      v5 = 0;
      do
      {
        sub_81498CC();
        v5 = (v5 + 1) & 0xFF;
      }
      while ( v5 <= 7 );
    }
    ++HIWORD(dword_3004B20[2 * (v2 + v1) + 9]);
  }
  return v7;
}
