int __fastcall sub_8133D50(unsigned __int8 a1)
{
  int v1; // r7@1
  unsigned int v2; // r8@1
  char *v3; // r1@1
  unsigned int v4; // r6@1
  int v5; // r2@4
  int v6; // r4@4
  int *v7; // r4@8
  int v8; // r2@8
  int v10; // [sp+1Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)&gSprites[68 * v2001001 + 46] & 0xFF;
  v3 = &gSprites[68 * v2001002];
  v4 = *((_WORD *)v3 + 23) & 0xFF;
  if ( v2 <= 5 && v4 <= 5 )
  {
    v201C000 = &dword_3004360[25 * *((_WORD *)v3 + 23)];
    v6 = (unsigned __int16)GetMonData(v201C000, 57, (int)dword_3004360);
    if ( v6 && v2 != v4 && GetMonData(v201C000, 58, v5) != v6 )
    {
      audio_play(1u);
      v201C005 = *(_WORD *)&gSprites[68 * v2001001 + 46];
      v201C000 = &dword_3004360[25 * v201C005];
      v201C006 = 0;
      v201C00C = -32768;
      v201C010 = sub_8133EF8;
      v7 = &dword_3004B20[10 * v1];
      *((_WORD *)v7 + 14) = GetMonData(v201C000, 58, (int)dword_3004360);
      *((_WORD *)v7 + 15) = GetMonData(v201C000, 57, v8);
      *((_WORD *)v7 + 16) = *((_WORD *)v7 + 14) / 5;
      sub_806D5A4();
      *v7 = (int)sub_806FA18;
      v201B282 = *((_WORD *)v7 + 15);
    }
    else
    {
      sub_8133EB8(v1);
    }
  }
  else
  {
    sub_806CD44(a1);
  }
  return v10;
}
