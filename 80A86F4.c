int __fastcall sub_80A86F4(int a1)
{
  int v1; // r2@1
  int v2; // r0@1
  char *v3; // r3@1
  int v4; // r1@8
  int v6; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = *(_WORD *)(a1 + 60);
  v3 = &gSprites[68 * (v2 << 16 >> 24)];
  if ( *(_WORD *)(v1 + 46) )
  {
    --*(_WORD *)(v1 + 46);
    v4 = *(_WORD *)(v1 + 48) + *(_WORD *)(v1 + 52);
    *(_WORD *)(v1 + 52) = v4;
    *(_WORD *)(v1 + 54) += *(_WORD *)(v1 + 50);
    *(_WORD *)&gSprites[68 * (v2 << 16 >> 24) + 36] = (v4 << 16 >> 24) + *(_WORD *)(v1 + 56);
    *(_WORD *)&gSprites[68 * (v2 << 16 >> 24) + 38] = (*(_WORD *)(v1 + 54) << 16 >> 24) + *(_WORD *)(v1 + 58);
  }
  else
  {
    if ( (unsigned __int8)v2 <= 1u )
      *((_WORD *)v3 + 18) = 0;
    if ( (unsigned __int8)v2 == 2 || !(_BYTE)v2 )
      *((_WORD *)v3 + 19) = 0;
    move_anim_8072740(v1);
  }
  return v6;
}
