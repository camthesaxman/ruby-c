signed int __fastcall GetBehaviorByMetatileId(unsigned __int16 a1)
{
  signed int v1; // r1@2
  int v2; // r0@2

  if ( a1 > 0x1FFu )
  {
    if ( a1 > 0x3FFu )
      return 255;
    v2 = 2 * a1 + *(_DWORD *)(*(_DWORD *)(v202E828 + 20) + 16);
    v1 = -1024;
  }
  else
  {
    v1 = *(_DWORD *)(*(_DWORD *)(v202E828 + 16) + 16);
    v2 = 2 * a1;
  }
  return *(_WORD *)(v2 + v1);
}
