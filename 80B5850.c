int __fastcall task_picbox(unsigned __int8 a1)
{
  unsigned __int8 v1; // r5@1
  int *v2; // r4@1
  signed int v3; // r0@1
  int v5; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = &dword_3004B20[10 * a1];
  v3 = *((_WORD *)v2 + 4);
  if ( v3 != 1 )
  {
    if ( v3 <= 1 )
    {
      if ( *((_WORD *)v2 + 4) )
        return v5;
      goto _080B5894;
    }
    if ( v3 == 2 )
    {
      sub_8085C44((int)&gSprites[68 * *((_WORD *)v2 + 6)]);
_080B5894:
      ++*((_WORD *)v2 + 4);
      return v5;
    }
    if ( v3 == 3 )
    {
      MenuZeroFillWindowRect(
        *((_BYTE *)v2 + 14),
        *((_BYTE *)v2 + 16),
        *((_BYTE *)v2 + 14) + 9,
        *((_BYTE *)v2 + 16) + 10);
      DestroyTask(v1);
    }
  }
  return v5;
}
