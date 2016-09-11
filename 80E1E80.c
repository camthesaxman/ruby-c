int __fastcall sub_80E1E80(int a1)
{
  int v1; // r4@1
  signed int v2; // r3@6
  __int16 v3; // r0@9
  int v5; // [sp+4h] [bp-4h]@0

  v1 = a1;
  if ( (signed int)*(_WORD *)(a1 + 46) <= 0 )
  {
    if ( !(v202F38F & 0x80) )
    {
      if ( *(_WORD *)(a1 + 50) )
      {
        v2 = sub_80E1DC4(*(_WORD *)(a1 + 60));
        if ( *(_WORD *)(v1 + 48) & 0x100 )
          BlendPalettes(v2, *(_BYTE *)(v1 + 54), *(_WORD *)(v1 + 52));
        else
          BlendPalettes(v2, *(_BYTE *)(v1 + 58), *(_WORD *)(v1 + 56));
        v3 = *(_WORD *)(v1 + 48) ^ 0x100;
        *(_WORD *)(v1 + 48) = v3;
        *(_WORD *)(v1 + 46) = (unsigned __int8)v3;
        --*(_WORD *)(v1 + 50);
      }
      else
      {
        *(_DWORD *)(a1 + 28) = sub_80E1F0C;
      }
    }
  }
  else
  {
    --*(_WORD *)(a1 + 46);
  }
  return v5;
}
