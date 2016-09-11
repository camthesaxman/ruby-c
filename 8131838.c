int __fastcall sub_8131838(int a1)
{
  int v1; // r4@1
  __int16 v2; // r0@1
  __int16 v3; // r0@6
  int v4; // r0@8
  __int16 v5; // r0@9
  _WORD *v6; // r1@10
  int v8; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 48) + 1;
  *(_WORD *)(v1 + 48) = v2;
  if ( v2 > 1 )
  {
    *(_WORD *)(v1 + 48) = 0;
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((unsigned int)*(_BYTE *)(v1 + 62) << 29 >> 31) ^ 1);
  }
  *(_WORD *)(v1 + 54) = (*(_WORD *)(v1 + 52) + *(_WORD *)(v1 + 54)) & 0xFF;
  *(_WORD *)(v1 + 36) = cosine(*(_WORD *)(v1 + 54), *(_WORD *)(v1 + 56));
  if ( *(_WORD *)(v1 + 46) )
  {
    if ( *(_WORD *)(v1 + 46) == 1 )
    {
      v4 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v4;
      if ( v4 << 16 > 0 )
      {
        *(_WORD *)(v1 + 50) = 0;
        v5 = *(_WORD *)(v1 + 56) - 2;
        *(_WORD *)(v1 + 56) = v5;
        if ( v5 & 0x8000 )
        {
          v6 = &byte_3004B28[40 * *(_WORD *)(v1 + 58)] + 2 * *(_WORD *)(v1 + 60);
          --*v6;
          obj_delete_but_dont_free_vram(v1);
        }
      }
    }
  }
  else
  {
    v3 = *(_WORD *)(v1 + 50) + 1;
    *(_WORD *)(v1 + 50) = v3;
    if ( v3 == 60 )
    {
      *(_WORD *)(v1 + 50) = 0;
      ++*(_WORD *)(v1 + 46);
    }
  }
  return v8;
}
