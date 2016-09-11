int ma23_8073484()
{
  unsigned int v0; // r5@1
  _BYTE *v1; // r0@7
  int v2; // r6@9
  char *v3; // r0@10
  char *v4; // r0@13
  int *v5; // r1@15
  int v7; // [sp+Ch] [bp-4h]@0

  ++v202F7A4;
  v0 = *v202F7A4;
  if ( *v202F7A4 )
  {
    if ( v0 == 1 )
      v0 = 3;
    if ( !v0 )
      goto _080768F6;
  }
  else
  {
    v0 = 2;
  }
  if ( v0 == 2 )
  {
_080768F6:
    v1 = (_BYTE *)33748936;
    goto _08076902;
  }
  v1 = (_BYTE *)33748937;
_08076902:
  v2 = *v1;
  if ( b_side_obj__get_some_boolean(v2) << 24 )
  {
    v3 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
    *v3 &= 0xFBu;
  }
  if ( v0 > 1 && b_side_obj__get_some_boolean(v2 ^ 2) << 24 )
  {
    v4 = &gSprites[68 * *(_BYTE *)((v2 ^ 2) + 0x2024BE0) + 62];
    *v4 &= 0xFBu;
  }
  else
  {
    LOWORD(v0) = 0;
  }
  v5 = &dword_3004B20[10 * (unsigned __int8)CreateTask(sub_80769A4, 5)];
  *((_WORD *)v5 + 4) = v0;
  *((_WORD *)v5 + 6) = v2;
  ++v202F7A4;
  return v7;
}
