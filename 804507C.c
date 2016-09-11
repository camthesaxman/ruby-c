int __fastcall sub_804507C(int a1)
{
  int v1; // r4@1
  int v2; // r3@3
  unsigned int v3; // r1@3
  int v4; // r0@4
  int v5; // r0@6
  char v6; // r1@9
  int v8; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 48) <= 0 )
  {
    v2 = *(_WORD *)(a1 + 50) & 0xFF;
    v3 = (*(_WORD *)(a1 + 52) + 56) << 16;
    *(_WORD *)(a1 + 52) = (*(_WORD *)(a1 + 52) + 56) & 0xFFF0;
    if ( v2 )
    {
      v4 = (v3 >> 20) + *(_WORD *)(a1 + 36);
      *(_WORD *)(v1 + 36) = v4;
      if ( v4 << 16 > 0 )
        *(_WORD *)(v1 + 36) = 0;
    }
    else
    {
      v5 = *(_WORD *)(a1 + 36) - (v3 >> 20);
      *(_WORD *)(v1 + 36) = v5;
      if ( v5 & 0x8000 )
        *(_WORD *)(v1 + 36) = 0;
    }
    if ( !*(_WORD *)(v1 + 36) )
    {
      v6 = 63;
      if ( v2 )
        v6 = -64;
      if ( *(_WORD *)(v1 + 60) )
        sub_807552C(116, v6);
      else
        sub_80754F8(115, v6);
      *(_DWORD *)(v1 + 28) = SpriteCallbackDummy;
    }
  }
  else
  {
    --*(_WORD *)(a1 + 48);
  }
  return v8;
}
