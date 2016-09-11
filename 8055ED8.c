int __fastcall sub_8055ED8(int a1)
{
  int v1; // r5@1
  int v2; // r4@1
  int *v3; // r6@1
  char v4; // r0@2
  char v5; // r0@3
  int v7; // [sp+Ch] [bp-4h]@0

  v1 = a1;
  v2 = 4 * *(_WORD *)(a1 + 46) + 33724440;
  v3 = &dword_30048A0[9 * *(_BYTE *)(4 * *(_WORD *)(a1 + 46) + 0x202981A)];
  *(_WORD *)(a1 + 32) = *((_WORD *)v3 + 6);
  *(_WORD *)(a1 + 34) = *((_WORD *)v3 + 7);
  SetObjectSubpriorityByZCoord((unsigned int)*((_BYTE *)v3 + 11) >> 4, a1, 1);
  *(_BYTE *)(v1 + 5) = *(_BYTE *)(v1 + 5) & 0xF3 | 4 * (ZCoordToPriority((unsigned int)*((_BYTE *)v3 + 11) >> 4) & 3);
  if ( *(_BYTE *)(v2 + 3) )
  {
    v5 = get_go_image_anim_num(*((_BYTE *)v3 + 25));
    StartSpriteAnimIfDifferent(v1, v5);
  }
  else
  {
    v4 = FieldObjectDirectionToImageAnimId(*((_BYTE *)v3 + 25));
    StartSpriteAnim(v1, v4);
  }
  sub_806487C(v1, 0);
  if ( *(_BYTE *)v3 & 4 )
    *(_BYTE *)(v1 + 62) = *(_BYTE *)(v1 + 62) & 0xFB | 4 * (((*(_WORD *)(v1 + 60))++ & 4u) << 16 >> 18);
  return v7;
}
