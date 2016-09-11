int __fastcall sub_8144514(int a1)
{
  int v1; // r8@1
  int *v2; // r2@1
  signed int v3; // r0@1
  signed __int16 v4; // r0@8
  int v5; // r2@11
  char *v6; // r0@12
  signed __int16 v7; // r1@12
  __int16 v8; // r0@15
  int *v9; // r1@17
  int v11; // [sp+18h] [bp-4h]@0

  a1 = (unsigned __int8)a1;
  v1 = a1;
  v2 = &dword_3004B20[10 * (unsigned __int8)a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 == 1 )
  {
    if ( v201C08A || LOWORD(dword_3004B20[10 * *((_WORD *)v2 + 5) + 9]) )
    {
      LOWORD(dword_3004B20[10 * *((_WORD *)v2 + 5) + 9]) = 0;
      v4 = *((_WORD *)v2 + 4) + 1;
      goto _08144656;
    }
  }
  else if ( v3 > 1 )
  {
    if ( v3 != 2 )
    {
      if ( v3 != 3 )
        return v11;
      if ( *((_WORD *)v2 + 7) )
      {
        --*((_WORD *)v2 + 7);
        return v11;
      }
      v4 = 1;
_08144656:
      *((_WORD *)v2 + 4) = v4;
      return v11;
    }
    if ( v201C088 != 68 && (int (__fastcall *)(unsigned __int8))dword_3004B20[10 * *((_WORD *)v2 + 5)] == sub_8143B68 )
    {
      v5 = sub_81456B4(
             *(_WORD *)(2 * v201C08C + 0x201C000),
             (unsigned __int8)gUnknown_0840CA00[2 * v201C08A],
             (unsigned __int8)gUnknown_0840CA00[2 * v201C08A + 1]) & 0xFF;
      if ( v201C08C >= v201C08E - 1 )
      {
        v201C08C = 0;
        v6 = &gSprites[68 * v5];
        v7 = 512;
      }
      else
      {
        ++v201C08C;
        v6 = &gSprites[68 * v5];
        v7 = 50;
      }
      *((_WORD *)v6 + 26) = v7;
      ++v201C088;
      if ( v201C08A == 2 )
        v8 = 0;
      else
        v8 = v201C08A + 1;
      v201C08A = v8;
      v9 = &dword_3004B20[10 * v1];
      *((_WORD *)v9 + 7) = 50;
      ++*((_WORD *)v9 + 4);
    }
  }
  return v11;
}
