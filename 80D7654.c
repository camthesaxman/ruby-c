signed int __fastcall sub_80D7654(int a1, unsigned __int8 a2)
{
  int v2; // r4@1
  __int16 v3; // r5@1
  unsigned __int8 v4; // cf@1
  int v5; // r1@1
  char *v6; // r0@2
  signed int result; // r0@4

  v2 = a1;
  v3 = a2;
  v4 = __CFSHR__(*(_WORD *)(a1 + 32) << 24, 24);
  v5 = (unsigned __int8)CreateSprite((int)"5'5'4ß7\bÌ—=\b", *(_WORD *)(v2 + 34), *(_WORD *)(v2 + 36));
  if ( v5 != 64 )
  {
    dword_2020020[17 * v5] = (int)sub_80D76C4;
    v6 = &gSprites[68 * v5];
    *((_WORD *)v6 + 29) = v3;
    *((_WORD *)v6 + 30) = 10;
    ++*(_WORD *)(v2 + 28);
  }
  if ( *(_WORD *)(v2 + 36) >= (signed int)*(_WORD *)(v2 + 38) )
  {
    result = 1;
  }
  else
  {
    *(_WORD *)(v2 + 36) += 32;
    result = 0;
  }
  return result;
}
