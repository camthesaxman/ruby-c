int __fastcall sub_80CEC1C(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r2@1
  __int16 v5; // r2@1
  signed int v6; // r1@5
  __int16 v7; // r0@6
  __int16 v8; // r0@7
  int v9; // r0@9
  int v11; // [sp+8h] [bp-4h]@0

  v1 = a1;
  v2 = 5 * ++*(_WORD *)(a1 + 46) % 256;
  v3 = *(_WORD *)(v1 + 58) + *(_WORD *)(v1 + 54);
  *(_WORD *)(v1 + 54) = v3;
  v4 = *(_WORD *)(v1 + 60) + *(_WORD *)(v1 + 56);
  *(_WORD *)(v1 + 56) = v4;
  *(_WORD *)(v1 + 32) = v3 << 16 >> 20;
  *(_WORD *)(v1 + 34) = v4 << 16 >> 20;
  *(_WORD *)(v1 + 38) = sine((signed __int16)v2, 15);
  v5 = *(_WORD *)(v1 + 34);
  if ( ((unsigned int)*(_WORD *)(v1 + 32) + 16) << 16 <= 0x1100000 && v5 >= -16 && v5 <= 128 )
  {
    v6 = *(_WORD *)(v1 + 52);
    if ( *(_WORD *)(v1 + 52) )
    {
      v7 = *(_WORD *)(v1 + 50) + 1;
      *(_WORD *)(v1 + 50) = v7;
      if ( v7 > v6 )
      {
        *(_WORD *)(v1 + 50) = 0;
        v8 = *(_WORD *)(v1 + 48) + 1;
        *(_WORD *)(v1 + 48) = v8;
        if ( v8 > 3 )
          *(_WORD *)(v1 + 48) = 0;
        v9 = (unsigned __int8)IndexOfSpritePaletteTag(gUnknown_083D712C[6 * *(_WORD *)(v1 + 48)]);
        if ( v9 != 255 )
          *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF | 16 * v9;
      }
    }
  }
  else
  {
    move_anim_8074EE0(v1);
  }
  return v11;
}
