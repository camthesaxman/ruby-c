int __fastcall sub_80A9E80(unsigned __int8 a1)
{
  int *v1; // r4@1
  int (*v2)(); // r0@5
  int v4; // [sp+4h] [bp-4h]@0

  v1 = &dword_3004B20[10 * a1];
  if ( (signed int)*((_WORD *)v1 + 4) > 9 )
  {
    if ( (unsigned __int8)GetLinkPlayerCount_2() > 3u )
    {
      *((_WORD *)v1 + 4) = 0;
      if ( IsLinkMaster() << 24 )
        v2 = sub_80A9ED8;
      else
        v2 = sub_80A9F10;
      *v1 = (int)v2;
    }
  }
  else
  {
    ++*((_WORD *)v1 + 4);
  }
  return v4;
}
