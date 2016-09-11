int __fastcall sub_810D74C(unsigned int a1, unsigned __int8 a2)
{
  unsigned int v2; // r7@1
  unsigned int v3; // r6@1
  signed __int16 v4; // r4@7
  unsigned int v5; // r0@17
  unsigned __int8 v6; // r0@18
  int v8; // [sp+10h] [bp-4h]@0

  v2 = a1;
  v3 = a2;
  if ( a2 > 0x63u )
  {
    StringCopy(&gStringVar1, &gUnknown_0841078A);
  }
  else
  {
    ConvertIntToDecimalStringN(&gStringVar1, a2, 0, 2);
    StringAppend(&gStringVar1, &gUnknown_084107A9);
  }
  if ( v2 > 0xE0F )
  {
    StringCopy(gStringVar2, &gUnknown_08410795);
  }
  else
  {
    ConvertIntToDecimalStringN(gStringVar2, v2 / 0x3C, 1, 2);
    byte_20232CE = -83;
    ConvertIntToDecimalStringN((char *)&unk_20232CF, 100 * (v2 % 0x3C) / 0x3C, 2, 2);
    StringAppend(gStringVar2, &gUnknown_084107A0);
  }
  v4 = 0;
  if ( v3 )
  {
    if ( v3 > 3 )
    {
      if ( v3 > 9 )
      {
        if ( v3 > 0x13 )
        {
          if ( v3 <= 0x63 )
            v4 = 1;
        }
        else
        {
          v4 = 2;
        }
      }
      else
      {
        v4 = 3;
      }
    }
    else
    {
      v4 = 4;
    }
  }
  else
  {
    v4 = 5;
  }
  v5 = v2 / 0x3C;
  if ( v2 / 0x3C <= 0xA )
  {
    v6 = v4 + 5;
_0810D848:
    v4 = v6;
    goto _0810D84C;
  }
  if ( v5 <= 0xF )
  {
    v6 = v4 + 4;
    goto _0810D848;
  }
  if ( v5 <= 0x14 )
  {
    v6 = v4 + 3;
    goto _0810D848;
  }
  if ( v5 <= 0x28 )
  {
    v6 = v4 + 2;
    goto _0810D848;
  }
  if ( v5 <= 0x3B )
  {
    v6 = v4 + 1;
    goto _0810D848;
  }
_0810D84C:
  v202E8DC = v4;
  return v8;
}
