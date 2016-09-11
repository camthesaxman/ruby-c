int __fastcall sub_8149020(signed int a1)
{
  __int16 *v1; // r0@7
  __int16 v2; // r1@7
  _WORD *v3; // r0@9
  int v4; // r4@9
  signed __int16 *v5; // r1@13
  signed __int16 v6; // r2@13
  int v7; // r4@15
  __int16 v9; // [sp+0h] [bp-Ch]@7
  __int16 v10; // [sp+2h] [bp-Ah]@13
  int v11; // [sp+8h] [bp-4h]@16

  a1 = (unsigned __int8)a1;
  if ( (unsigned __int8)a1 != 1 )
  {
    if ( a1 > 1 && a1 == 2 )
    {
      if ( !(dword_3001790 & 3) && !(v202F38F & 0x80) )
      {
        if ( dword_3001790 & 4 )
        {
          v9 = 15655;
          v5 = &v10;
          v6 = 661;
        }
        else
        {
          v9 = 796;
          v5 = &v10;
          v6 = 15655;
        }
        *v5 = v6;
        v7 = (int)v5;
        LoadPalette((int)&v9, 12, 2);
        LoadPalette(v7, 13, 2);
      }
    }
    else if ( !(dword_3001790 & 3) && !(v202F38F & 0x80) )
    {
      if ( dword_3001790 & 4 )
      {
        v1 = &v9;
        v9 = v202EADA;
        v2 = v202EADC;
      }
      else
      {
        v1 = &v9;
        v9 = v202EADC;
        v2 = v202EADA;
      }
      v3 = v1 + 1;
      *v3 = v2;
      v4 = (int)v3;
      LoadPalette((int)&v9, 9, 2);
      LoadPalette(v4, 10, 2);
    }
  }
  return v11;
}
