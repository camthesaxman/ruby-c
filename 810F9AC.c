int sub_810F9AC()
{
  char *v0; // r4@4
  signed int v1; // r5@9
  unsigned __int8 v2; // r0@9
  signed int v3; // r5@10
  unsigned __int8 v4; // r0@10
  int v6; // [sp+8h] [bp-4h]@0

  if ( v202E8DC <= 0x270Fu )
  {
    if ( v202E8DC <= 0x3E7u )
    {
      if ( v202E8DC <= 0x63u )
      {
        if ( v202E8DC <= 9u )
        {
          gStringVar1 = -95;
          byte_20231CD = -95;
          byte_20231CE = -95;
          byte_20231CF = -95;
          v3 = v202E8DC;
          v4 = sub_80BF0B8(v202E8DC);
          ConvertIntToDecimalStringN(&byte_20231D0, v3, 0, v4);
          return v6;
        }
        gStringVar1 = -95;
        byte_20231CD = -95;
        byte_20231CE = -95;
        v0 = &byte_20231CF;
      }
      else
      {
        gStringVar1 = -95;
        byte_20231CD = -95;
        v0 = &byte_20231CE;
      }
    }
    else
    {
      gStringVar1 = -95;
      v0 = &byte_20231CD;
    }
    v1 = v202E8DC;
    v2 = sub_80BF0B8(v202E8DC);
    ConvertIntToDecimalStringN(v0, v1, 0, v2);
  }
  else
  {
    sub_80BF088(0, v202E8DC);
  }
  return v6;
}
