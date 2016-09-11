int sub_80767C4()
{
  unsigned int v0; // r5@1
  _BYTE *v1; // r0@7
  int v2; // r4@9
  unsigned int v3; // r0@10
  int v4; // r1@12
  char *v5; // r0@14
  int v6; // r4@15
  unsigned int v7; // r0@17
  int v8; // r1@19
  char *v9; // r0@21
  int v11; // [sp+8h] [bp-4h]@0

  ++v202F7A4;
  v0 = *v202F7A4;
  if ( *v202F7A4 )
  {
    if ( v0 == 1 )
      v0 = 3;
    if ( !v0 )
      goto _080767EA;
  }
  else
  {
    v0 = 2;
  }
  if ( v0 == 2 )
  {
_080767EA:
    v1 = (_BYTE *)33748936;
    goto _080767F6;
  }
  v1 = (_BYTE *)33748937;
_080767F6:
  v2 = *v1;
  if ( b_side_obj__get_some_boolean(v2) << 24 )
  {
    v3 = (unsigned int)((battle_get_per_side_status(v2) << 24) - 0x1000000) >> 24;
    v4 = v3 > 1 && !(sub_8076BE0(v3) << 24);
    sub_8076034(v2, v4);
    v5 = &gSprites[68 * *(_BYTE *)(v2 + 33704928) + 62];
    *v5 &= 0xFBu;
  }
  v6 = v2 ^ 2;
  if ( v0 > 1 && b_side_obj__get_some_boolean(v6) << 24 )
  {
    v7 = (unsigned int)((battle_get_per_side_status(v6) << 24) - 0x1000000) >> 24;
    v8 = v7 > 1 && !(sub_8076BE0(v7) << 24);
    sub_8076034(v6, v8);
    v9 = &gSprites[68 * *(_BYTE *)(v6 + 33704928) + 62];
    *v9 &= 0xFBu;
  }
  ++v202F7A4;
  return v11;
}
