int __fastcall sub_8098090(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 46) - *(_WORD *)(a1 + 48);
  *(_WORD *)(v1 + 46) = v2;
  if ( v2 & 0x8000 )
    *(_WORD *)(v1 + 46) = 0;
  v400004C = (*(_WORD *)(v1 + 46) << 12) | (*(_WORD *)(v1 + 46) << 8);
  if ( !*(_WORD *)(v1 + 46) )
  {
    *(_BYTE *)(v1 + 1) &= 0xEFu;
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
  }
  return v4;
}
