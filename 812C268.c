int __fastcall sub_812C268(int a1)
{
  int v1; // r3@1
  __int16 v2; // r0@1
  int v4; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v4000052 = ((16 - *(_WORD *)(a1 + 48)) << 8) | *(_WORD *)(a1 + 48);
  v2 = *(_WORD *)(a1 + 48) - 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 & 0x8000 )
  {
    *(_BYTE *)(v1 + 62) |= 4u;
    *(_DWORD *)(v1 + 28) = sub_812C2A4;
  }
  return v4;
}
