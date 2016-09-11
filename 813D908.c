int __fastcall sub_813D908(int a1)
{
  int v1; // r3@1
  int v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = LOWORD(dword_3004B20[10 * *(_WORD *)(a1 + 46) + 2]);
  if ( v2 )
  {
    if ( v2 == 4 )
      DestroySprite(v1);
    else
      *(_BYTE *)(v1 + 62) &= 0xFBu;
  }
  else
  {
    *(_BYTE *)(v1 + 62) |= 4u;
  }
  return v4;
}
