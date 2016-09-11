int __fastcall sub_80C3CB8(int a1)
{
  int v1; // r3@1
  int v2; // r2@1
  int v3; // r0@1
  int v5; // [sp+0h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1536;
  v3 = *(_WORD *)(a1 + 32) - (v2 << 16 >> 24);
  *(_WORD *)(v1 + 32) = v3;
  *(_WORD *)(v1 + 48) = (unsigned __int8)v2;
  if ( (signed __int16)v3 < -32 )
  {
    *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    *(_BYTE *)(v1 + 62) |= 4u;
    v2018006 = 2;
  }
  return v5;
}
