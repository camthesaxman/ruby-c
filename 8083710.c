int __fastcall sub_8083710(unsigned __int8 a1)
{
  unsigned int v1; // r1@1
  _WORD *v2; // r4@1
  int v4; // [sp+4h] [bp-4h]@0

  v1 = 40 * a1;
  v2 = &byte_3004B28[v1];
  if ( *(_WORD *)&byte_3004B28[v1] )
  {
    if ( (signed int)*(_WORD *)&byte_3004B28[v1] > 9 )
      dword_3004B20[v1 / 4] = (int)sub_8083760;
  }
  else
  {
    OpenLink();
    ResetLinkPlayers();
    CreateTask((int)sub_8083C50, 80);
  }
  ++*v2;
  return v4;
}
